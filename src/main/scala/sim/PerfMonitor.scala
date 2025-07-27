package sim

import chisel3._
import chisel3.util._
import soc.base._

// Performance Monitoring System
class PerfMonitor(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val cpu_perf = Input(new PerfCounterBundle)
    val cache_perf = Input(Vec(2, new Bundle {  // I-cache and D-cache
      val hits = UInt(32.W)
      val misses = UInt(32.W)
    }))
    val bus_perf = Input(new Bundle {
      val transactions = UInt(32.W)
      val utilization = UInt(8.W)  // Percentage
    })
    
    // Control interface
    val enable = Input(Bool())
    val reset_counters = Input(Bool())
    
    // Output interface
    val perf_data = Output(new Bundle {
      val cycles = UInt(64.W)
      val instructions = UInt(64.W)
      val ipc = UInt(32.W)  // Instructions per cycle (fixed point)
      val cache_hit_rate = UInt(32.W)  // Percentage (fixed point)
      val branch_prediction_accuracy = UInt(32.W)  // Percentage
      val bus_utilization = UInt(8.W)
    })
    
    // Memory-mapped register interface
    val mmio = Flipped(new MemoryBundle(config.addrWidth, config.dataWidth))
  })
  
  // Performance counters
  val cycle_counter = RegInit(0.U(64.W))
  val instruction_counter = RegInit(0.U(64.W))
  val branch_counter = RegInit(0.U(32.W))
  val branch_miss_counter = RegInit(0.U(32.W))
  val total_cache_hits = RegInit(0.U(32.W))
  val total_cache_misses = RegInit(0.U(32.W))
  val bus_transaction_counter = RegInit(0.U(32.W))
  
  // Update counters
  when(io.enable && !io.reset_counters) {
    cycle_counter := cycle_counter + 1.U
    instruction_counter := io.cpu_perf.instret
    branch_miss_counter := io.cpu_perf.branch_miss
    total_cache_hits := io.cache_perf(0).hits + io.cache_perf(1).hits
    total_cache_misses := io.cache_perf(0).misses + io.cache_perf(1).misses
    bus_transaction_counter := io.bus_perf.transactions
  }
  
  // Reset counters
  when(io.reset_counters) {
    cycle_counter := 0.U
    instruction_counter := 0.U
    branch_counter := 0.U
    branch_miss_counter := 0.U
    total_cache_hits := 0.U
    total_cache_misses := 0.U
    bus_transaction_counter := 0.U
  }
  
  // Calculate derived metrics
  val total_cache_accesses = total_cache_hits + total_cache_misses
  val cache_hit_rate = Mux(total_cache_accesses === 0.U, 100.U, 
    (total_cache_hits * 100.U) / total_cache_accesses)
  
  val ipc = Mux(cycle_counter === 0.U, 0.U,
    (instruction_counter * 1000.U) / cycle_counter(31, 0))  // Fixed point with 3 decimal places
  
  val branch_accuracy = Mux(branch_counter === 0.U, 100.U,
    ((branch_counter - branch_miss_counter) * 100.U) / branch_counter)
  
  // Output assignments
  io.perf_data.cycles := cycle_counter
  io.perf_data.instructions := instruction_counter
  io.perf_data.ipc := ipc
  io.perf_data.cache_hit_rate := cache_hit_rate
  io.perf_data.branch_prediction_accuracy := branch_accuracy
  io.perf_data.bus_utilization := io.bus_perf.utilization
  
  // Memory-mapped interface for reading performance counters
  val addr = io.mmio.req.bits.addr(7, 0)  // Use lower 8 bits for register addressing
  val read_data = Wire(UInt(config.dataWidth.W))
  
  read_data := MuxLookup(addr, 0.U)(Seq(
    0x00.U -> cycle_counter(31, 0),
    0x04.U -> cycle_counter(63, 32),
    0x08.U -> instruction_counter(31, 0),
    0x0C.U -> instruction_counter(63, 32),
    0x10.U -> ipc,
    0x14.U -> cache_hit_rate,
    0x18.U -> branch_accuracy,
    0x1C.U -> io.bus_perf.utilization.asUInt,
    0x20.U -> total_cache_hits,
    0x24.U -> total_cache_misses,
    0x28.U -> branch_miss_counter,
    0x2C.U -> bus_transaction_counter
  ))
  
  // MMIO response
  io.mmio.req.ready := true.B
  io.mmio.resp.valid := RegNext(io.mmio.req.fire && !io.mmio.req.bits.wen)
  io.mmio.resp.bits := RegNext(read_data)
}

// Top-level performance monitoring wrapper
class SoCPerfMonitor(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val cpu_perf = Input(new PerfCounterBundle)
    val system_enable = Input(Bool())
    val perf_mmio = Flipped(new MemoryBundle(config.addrWidth, config.dataWidth))
    
    // Debug output
    val debug_perf = Output(new Bundle {
      val cycles_per_second = UInt(32.W)
      val instructions_per_second = UInt(32.W)
      val avg_ipc = UInt(32.W)
    })
  })
  
  val perf_monitor = Module(new PerfMonitor(config))
  
  // Connect basic performance monitor
  perf_monitor.io.cpu_perf := io.cpu_perf
  val cache_perf_placeholder = Wire(Vec(2, new Bundle {
    val hits = UInt(32.W)
    val misses = UInt(32.W)
  }))
  cache_perf_placeholder.foreach { cp =>
    cp.hits := 0.U
    cp.misses := 0.U
  }
  perf_monitor.io.cache_perf := cache_perf_placeholder
  
  val bus_perf_placeholder = Wire(new Bundle {
    val transactions = UInt(32.W)
    val utilization = UInt(8.W)
  })
  bus_perf_placeholder.transactions := 0.U
  bus_perf_placeholder.utilization := 0.U
  perf_monitor.io.bus_perf := bus_perf_placeholder
  
  perf_monitor.io.enable := io.system_enable
  perf_monitor.io.reset_counters := false.B  // Could be controlled via MMIO
  perf_monitor.io.mmio <> io.perf_mmio
  
  // Calculate debug metrics (assuming 100MHz clock)
  val cycles_per_second = RegInit(0.U(32.W))
  val instructions_per_second = RegInit(0.U(32.W))
  val second_counter = RegInit(0.U(32.W))
  val last_cycles = RegInit(0.U(32.W))
  val last_instructions = RegInit(0.U(32.W))
  
  second_counter := second_counter + 1.U
  
  when(second_counter === (config.clockFreq - 1).U) {
    second_counter := 0.U
    cycles_per_second := perf_monitor.io.perf_data.cycles(31, 0) - last_cycles
    instructions_per_second := perf_monitor.io.perf_data.instructions(31, 0) - last_instructions
    last_cycles := perf_monitor.io.perf_data.cycles(31, 0)
    last_instructions := perf_monitor.io.perf_data.instructions(31, 0)
  }
  
  io.debug_perf.cycles_per_second := cycles_per_second
  io.debug_perf.instructions_per_second := instructions_per_second
  io.debug_perf.avg_ipc := perf_monitor.io.perf_data.ipc
}

// Trace Generator for debugging
class TraceGenerator(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val enable = Input(Bool())
    val cpu_state = Input(new Bundle {
      val pc = UInt(config.addrWidth.W)
      val inst = UInt(32.W)
      val rd_addr = UInt(5.W)
      val rd_data = UInt(config.xlen.W)
      val valid = Bool()
    })
    val trace_out = Output(new Bundle {
      val valid = Bool()
      val pc = UInt(config.addrWidth.W)
      val inst = UInt(32.W)
      val rd_addr = UInt(5.W)
      val rd_data = UInt(config.xlen.W)
      val cycle = UInt(64.W)
    })
  })
  
  val cycle_counter = RegInit(0.U(64.W))
  cycle_counter := cycle_counter + 1.U
  
  // Simple trace output
  io.trace_out.valid := io.enable && io.cpu_state.valid
  io.trace_out.pc := io.cpu_state.pc
  io.trace_out.inst := io.cpu_state.inst
  io.trace_out.rd_addr := io.cpu_state.rd_addr
  io.trace_out.rd_data := io.cpu_state.rd_data
  io.trace_out.cycle := cycle_counter
  
  // In a real implementation, this would write to a file or FIFO
  when(io.trace_out.valid) {
    printf("TRACE[%d]: PC=0x%x INST=0x%x RD=%d DATA=0x%x\n", 
      cycle_counter, io.cpu_state.pc, io.cpu_state.inst, 
      io.cpu_state.rd_addr, io.cpu_state.rd_data)
  }
}