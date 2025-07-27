package soc.base

import chisel3._

// SoC Configuration Parameters
case class SoCConfig(
  // Data path parameters
  xlen: Int = 32,              // CPU data width
  addrWidth: Int = 32,         // Address width
  dataWidth: Int = 32,         // Data bus width
  
  // Memory parameters
  memorySize: Int = 1024 * 1024,  // 1MB default memory
  cacheLineSize: Int = 64,     // Cache line size in bytes
  icacheSize: Int = 8192,      // I-cache size in bytes
  dcacheSize: Int = 8192,      // D-cache size in bytes
  
  // CPU parameters
  numHarts: Int = 1,           // Number of hardware threads
  
  // AXI parameters
  axiIdWidth: Int = 4,         // AXI ID width
  axiDataWidth: Int = 32,      // AXI data width
  axiAddrWidth: Int = 32,      // AXI address width
  
  // Performance counters
  perfCounterWidth: Int = 64,  // Performance counter width
  
  // Simulation parameters
  enablePerfCounters: Boolean = true,
  enableTrace: Boolean = false,
  clockFreq: Int = 100000000   // 100MHz default
)

// Memory Map
object MemoryMap {
  def apply(config: SoCConfig): Map[String, (BigInt, BigInt)] = Map(
    "IMEM"        -> (0x00000000L, config.memorySize),
    "DMEM"        -> (0x10000000L, config.memorySize),
    "PERIPHERALS" -> (0x40000000L, 0x10000000L),
    "UART"        -> (0x40000000L, 0x1000L),
    "TIMER"       -> (0x40001000L, 0x1000L),
    "GPIO"        -> (0x40002000L, 0x1000L),
    "PERF_CTR"    -> (0x40010000L, 0x1000L)
  )
}

// RISC-V ISA constants
object RiscvConsts {
  // Opcodes
  val OP_IMM    = "b0010011".U(7.W)
  val OP        = "b0110011".U(7.W)
  val LOAD      = "b0000011".U(7.W)
  val STORE     = "b0100011".U(7.W)
  val BRANCH    = "b1100011".U(7.W)
  val JAL       = "b1101111".U(7.W)
  val JALR      = "b1100111".U(7.W)
  val LUI       = "b0110111".U(7.W)
  val AUIPC     = "b0010111".U(7.W)
  
  // Function codes for ALU operations
  val FUNC_ADD  = "b000".U(3.W)
  val FUNC_SLL  = "b001".U(3.W)
  val FUNC_SLT  = "b010".U(3.W)
  val FUNC_SLTU = "b011".U(3.W)
  val FUNC_XOR  = "b100".U(3.W)
  val FUNC_SRL  = "b101".U(3.W)
  val FUNC_OR   = "b110".U(3.W)
  val FUNC_AND  = "b111".U(3.W)
  
  // Branch function codes
  val FUNC_BEQ  = "b000".U(3.W)
  val FUNC_BNE  = "b001".U(3.W)
  val FUNC_BLT  = "b100".U(3.W)
  val FUNC_BGE  = "b101".U(3.W)
  val FUNC_BLTU = "b110".U(3.W)
  val FUNC_BGEU = "b111".U(3.W)
  
  // Load/Store function codes
  val FUNC_LB   = "b000".U(3.W)
  val FUNC_LH   = "b001".U(3.W)
  val FUNC_LW   = "b010".U(3.W)
  val FUNC_LBU  = "b100".U(3.W)
  val FUNC_LHU  = "b101".U(3.W)
  val FUNC_SB   = "b000".U(3.W)
  val FUNC_SH   = "b001".U(3.W)
  val FUNC_SW   = "b010".U(3.W)
}

// AXI Constants
object AXIConsts {
  // Burst types
  val BURST_FIXED = "b00".U(2.W)
  val BURST_INCR  = "b01".U(2.W)
  val BURST_WRAP  = "b10".U(2.W)
  
  // Response codes
  val RESP_OKAY   = "b00".U(2.W)
  val RESP_EXOKAY = "b01".U(2.W)
  val RESP_SLVERR = "b10".U(2.W)
  val RESP_DECERR = "b11".U(2.W)
  
  // Size encoding
  val SIZE_1B     = "b000".U(3.W)
  val SIZE_2B     = "b001".U(3.W)
  val SIZE_4B     = "b010".U(3.W)
  val SIZE_8B     = "b011".U(3.W)
  val SIZE_16B    = "b100".U(3.W)
  val SIZE_32B    = "b101".U(3.W)
  val SIZE_64B    = "b110".U(3.W)
  val SIZE_128B   = "b111".U(3.W)
}