/**
 * STONE-SIM: SynThetic On-chip Network SIMulator
 * 
 * A Chisel-based SoC simulator for performance measurement and RTL generation.
 * This module provides the top-level SoC implementation with network-centric
 * interconnect design and comprehensive performance monitoring.
 */
package soc

import chisel3._
import chisel3.util._
import soc.base._
import soc.cpu._
import soc.memory._
import soc.interconnect._
import sim._

/**
 * StoneSoC - Top-level STONE-SIM System-on-Chip
 * 
 * Implements a complete SoC with:
 * - RISC-V CPU core with 5-stage pipeline
 * - Memory hierarchy with caches
 * - Network-centric interconnect (AXI4/NoC)
 * - Peripheral devices (UART, Timer, GPIO)
 * - Performance monitoring and trace generation
 */
class StoneSoC(config: SoCConfig = SoCConfig()) extends Module {
  val io = IO(new Bundle {
    // External interfaces
    val uart_tx = Output(Bool())
    val uart_rx = Input(Bool())
    val gpio_out = Output(UInt(32.W))
    val gpio_in = Input(UInt(32.W))
    
    // Debug interfaces
    val debug_perf = if (config.enablePerfCounters) Some(Output(new Bundle {
      val cycles_per_second = UInt(32.W)
      val instructions_per_second = UInt(32.W)
      val avg_ipc = UInt(32.W)
    })) else None
    
    val debug_trace = if (config.enableTrace) Some(Output(new Bundle {
      val valid = Bool()
      val pc = UInt(config.addrWidth.W)
      val inst = UInt(32.W)
      val rd_addr = UInt(5.W)
      val rd_data = UInt(config.xlen.W)
      val cycle = UInt(64.W)
    })) else None
  })
  
  // CPU Core
  val cpu = Module(new SimpleCPU(config))
  
  // Memory System
  val imem = Module(new SimpleMemory(config))
  val dmem = Module(new SimpleMemory(config))
  val icache = Module(new SimpleCache(config, config.icacheSize))
  val dcache = Module(new SimpleCache(config, config.dcacheSize))
  
  // Simplified: No interconnect for now, direct connections
  // Peripherals with dummy connections
  val uart = Module(new SimpleUART(config))
  val timer = Module(new SimpleTimer(config))
  val gpio = Module(new SimpleGPIO(config))
  
  // Connect peripherals with dummy signals
  uart.io.mmio.req.valid := false.B
  uart.io.mmio.req.bits := DontCare
  uart.io.mmio.resp.ready := false.B
  
  timer.io.mmio.req.valid := false.B
  timer.io.mmio.req.bits := DontCare
  timer.io.mmio.resp.ready := false.B
  
  gpio.io.mmio.req.valid := false.B
  gpio.io.mmio.req.bits := DontCare
  gpio.io.mmio.resp.ready := false.B
  
  // Performance Monitor
  val perf_monitor = if (config.enablePerfCounters) {
    Some(Module(new SoCPerfMonitor(config)))
  } else None
  
  // Trace Generator
  val trace_gen = if (config.enableTrace) {
    Some(Module(new TraceGenerator(config)))
  } else None
  
  // Connect CPU to cache
  icache.io.cpu <> cpu.io.imem
  icache.io.mem <> imem.io
  dcache.io.cpu <> cpu.io.dmem
  dcache.io.mem <> dmem.io
  
  // Simplified: No complex memory mapping for now
  
  // Connect peripherals
  io.uart_tx := uart.io.tx
  uart.io.rx := io.uart_rx
  io.gpio_out := gpio.io.out
  gpio.io.in := io.gpio_in
  
  // Connect performance monitor  
  if (config.enablePerfCounters) {
    perf_monitor.get.io.cpu_perf := cpu.io.perf
    perf_monitor.get.io.system_enable := true.B
    perf_monitor.get.io.perf_mmio.req.valid := false.B
    perf_monitor.get.io.perf_mmio.req.bits := DontCare
    perf_monitor.get.io.perf_mmio.resp.ready := false.B
    io.debug_perf.get := perf_monitor.get.io.debug_perf
  }
  
  // Connect trace generator
  if (config.enableTrace) {
    trace_gen.get.io.enable := true.B
    trace_gen.get.io.cpu_state.pc := 0.U  // Connect to actual CPU state
    trace_gen.get.io.cpu_state.inst := 0.U
    trace_gen.get.io.cpu_state.rd_addr := 0.U
    trace_gen.get.io.cpu_state.rd_data := 0.U
    trace_gen.get.io.cpu_state.valid := false.B
    io.debug_trace.get := trace_gen.get.io.trace_out
  }
}

// Simple UART peripheral
class SimpleUART(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val mmio = Flipped(new MemoryBundle(config.addrWidth, config.dataWidth))
    val tx = Output(Bool())
    val rx = Input(Bool())
  })
  
  // Simplified UART - just echo for now
  io.tx := io.rx
  io.mmio.req.ready := true.B
  io.mmio.resp.valid := RegNext(io.mmio.req.fire)
  io.mmio.resp.bits := 0.U
}

// Simple Timer peripheral
class SimpleTimer(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val mmio = Flipped(new MemoryBundle(config.addrWidth, config.dataWidth))
    val interrupt = Output(Bool())
  })
  
  val counter = RegInit(0.U(32.W))
  val compare = RegInit(0.U(32.W))
  
  counter := counter + 1.U
  io.interrupt := counter === compare
  
  io.mmio.req.ready := true.B
  io.mmio.resp.valid := RegNext(io.mmio.req.fire && !io.mmio.req.bits.wen)
  io.mmio.resp.bits := counter
}

// Simple GPIO peripheral
class SimpleGPIO(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val mmio = Flipped(new MemoryBundle(config.addrWidth, config.dataWidth))
    val out = Output(UInt(32.W))
    val in = Input(UInt(32.W))
  })
  
  val gpio_out_reg = RegInit(0.U(32.W))
  val gpio_in_reg = RegNext(io.in)
  
  io.out := gpio_out_reg
  
  // MMIO interface
  when(io.mmio.req.fire && io.mmio.req.bits.wen) {
    gpio_out_reg := io.mmio.req.bits.data
  }
  
  io.mmio.req.ready := true.B
  io.mmio.resp.valid := RegNext(io.mmio.req.fire && !io.mmio.req.bits.wen)
  io.mmio.resp.bits := gpio_in_reg
}