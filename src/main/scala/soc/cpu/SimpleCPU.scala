package soc.cpu

import chisel3._
import chisel3.util._
import soc.base._

// Simple RISC-V CPU Core (RV32I subset)
class SimpleCPU(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val imem = new MemoryBundle(config.addrWidth, 32)
    val dmem = new MemoryBundle(config.addrWidth, config.dataWidth)
    val perf = Output(new PerfCounterBundle)
  })
  
  // Pipeline stages
  val fetch = Module(new FetchStage(config))
  val decode = Module(new DecodeStage(config))
  val execute = Module(new ExecuteStage(config))
  val memory = Module(new MemoryStage(config))
  val writeback = Module(new WritebackStage(config))
  
  // Pipeline registers
  val if_id = Module(new IFIDRegister(config))
  val id_ex = Module(new IDEXRegister(config))
  val ex_mem = Module(new EXMEMRegister(config))
  val mem_wb = Module(new MEMWBRegister(config))
  
  // Register file
  val regfile = Module(new RegisterFile(config))
  
  // Hazard detection and forwarding
  val hazard = Module(new HazardUnit(config))
  val forward = Module(new ForwardingUnit(config))
  
  // Connect pipeline stages
  fetch.io.pc_sel := hazard.io.pc_sel
  fetch.io.pc_target := execute.io.pc_target
  fetch.io.imem <> io.imem
  
  if_id.io.in := fetch.io.out
  if_id.io.stall := hazard.io.if_id_stall
  if_id.io.flush := hazard.io.if_id_flush
  
  decode.io.inst := if_id.io.out
  decode.io.regfile <> regfile.io.read
  
  id_ex.io.in := decode.io.out
  id_ex.io.stall := hazard.io.id_ex_stall
  id_ex.io.flush := hazard.io.id_ex_flush
  
  execute.io.in := id_ex.io.out
  execute.io.forward_a := forward.io.forward_a
  execute.io.forward_b := forward.io.forward_b
  execute.io.ex_result := ex_mem.io.out.alu_result
  execute.io.mem_result := mem_wb.io.out.result
  
  ex_mem.io.in := execute.io.out
  ex_mem.io.stall := hazard.io.ex_mem_stall
  ex_mem.io.flush := hazard.io.ex_mem_flush
  
  memory.io.in := ex_mem.io.out
  memory.io.dmem <> io.dmem
  
  mem_wb.io.in := memory.io.out
  mem_wb.io.stall := hazard.io.mem_wb_stall
  mem_wb.io.flush := hazard.io.mem_wb_flush
  
  writeback.io.in := mem_wb.io.out
  writeback.io.regfile <> regfile.io.write
  
  // Connect hazard detection
  hazard.io.if_id := if_id.io.out
  hazard.io.id_ex := id_ex.io.out
  hazard.io.ex_mem := ex_mem.io.out
  hazard.io.mem_wb := mem_wb.io.out
  
  // Connect forwarding unit
  forward.io.id_ex := id_ex.io.out
  forward.io.ex_mem := ex_mem.io.out
  forward.io.mem_wb := mem_wb.io.out
  
  // Performance counters
  val cycle_counter = RegInit(0.U(64.W))
  val inst_counter = RegInit(0.U(64.W))
  val branch_miss_counter = RegInit(0.U(32.W))
  
  cycle_counter := cycle_counter + 1.U
  when(writeback.io.inst_retire) {
    inst_counter := inst_counter + 1.U
  }
  when(hazard.io.branch_miss) {
    branch_miss_counter := branch_miss_counter + 1.U
  }
  
  io.perf.cycles := cycle_counter
  io.perf.instret := inst_counter
  io.perf.cache_miss := 0.U  // TODO: implement cache miss counting
  io.perf.branch_miss := branch_miss_counter
}

// Fetch Stage
class FetchStage(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val pc_sel = Input(UInt(2.W))
    val pc_target = Input(UInt(config.addrWidth.W))
    val imem = new MemoryBundle(config.addrWidth, 32)
    val out = Output(new IFIDBundle(config))
  })
  
  val pc = RegInit(0.U(config.addrWidth.W))
  val pc_plus4 = pc + 4.U
  
  // PC selection
  val next_pc = MuxLookup(io.pc_sel, pc_plus4)(Seq(
    0.U -> pc_plus4,    // Normal increment
    1.U -> io.pc_target, // Branch/Jump target
    2.U -> pc_plus4,    // Stall (keep current PC)
    3.U -> 0.U          // Reset
  ))
  
  pc := next_pc
  
  // Instruction memory request
  io.imem.req.valid := true.B
  io.imem.req.bits.addr := pc
  io.imem.req.bits.data := 0.U
  io.imem.req.bits.mask := 0.U
  io.imem.req.bits.wen := false.B
  
  // Output
  io.out.pc := pc
  io.out.pc_plus4 := pc_plus4
  io.out.inst := Mux(io.imem.resp.valid, io.imem.resp.bits, 0.U)
  io.out.valid := io.imem.resp.valid
  
  io.imem.resp.ready := true.B
}

// IF/ID Pipeline Register Bundle
class IFIDBundle(config: SoCConfig) extends Bundle {
  val pc = UInt(config.addrWidth.W)
  val pc_plus4 = UInt(config.addrWidth.W)
  val inst = UInt(32.W)
  val valid = Bool()
}

// IF/ID Pipeline Register
class IFIDRegister(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val in = Input(new IFIDBundle(config))
    val out = Output(new IFIDBundle(config))
    val stall = Input(Bool())
    val flush = Input(Bool())
  })
  
  val reg = RegInit(0.U.asTypeOf(new IFIDBundle(config)))
  
  when(io.flush) {
    reg := 0.U.asTypeOf(new IFIDBundle(config))
  }.elsewhen(!io.stall) {
    reg := io.in
  }
  
  io.out := reg
}