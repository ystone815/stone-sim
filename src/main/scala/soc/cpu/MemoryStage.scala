package soc.cpu

import chisel3._
import chisel3.util._
import soc.base._

// Memory Stage
class MemoryStage(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val in = Input(new EXMEMBundle(config))
    val dmem = new MemoryBundle(config.addrWidth, config.dataWidth)
    val out = Output(new MEMWBBundle(config))
  })
  
  val funct3 = io.in.inst(14, 12)
  val addr = io.in.alu_result
  val write_data = io.in.rs2_data
  
  // Memory access logic
  io.dmem.req.valid := io.in.ctrl.mem_read || io.in.ctrl.mem_write
  io.dmem.req.bits.addr := addr
  io.dmem.req.bits.wen := io.in.ctrl.mem_write
  io.dmem.resp.ready := true.B
  
  // Store data formatting
  val store_data = MuxLookup(funct3, write_data)(Seq(
    RiscvConsts.FUNC_SB -> Fill(4, write_data(7, 0)),
    RiscvConsts.FUNC_SH -> Fill(2, write_data(15, 0)),
    RiscvConsts.FUNC_SW -> write_data
  ))
  
  // Store mask generation
  val byte_addr = addr(1, 0)
  val store_mask = MuxLookup(funct3, "b1111".U)(Seq(
    RiscvConsts.FUNC_SB -> ("b0001".U << byte_addr),
    RiscvConsts.FUNC_SH -> ("b0011".U << byte_addr),
    RiscvConsts.FUNC_SW -> "b1111".U
  ))
  
  io.dmem.req.bits.data := store_data
  io.dmem.req.bits.mask := Mux(io.in.ctrl.mem_write, store_mask, 0.U)
  
  // Load data formatting
  val load_data_raw = io.dmem.resp.bits
  val load_data = MuxLookup(funct3, load_data_raw)(Seq(
    RiscvConsts.FUNC_LB  -> Cat(Fill(24, load_data_raw(7)), load_data_raw(7, 0)),
    RiscvConsts.FUNC_LH  -> Cat(Fill(16, load_data_raw(15)), load_data_raw(15, 0)),
    RiscvConsts.FUNC_LW  -> load_data_raw,
    RiscvConsts.FUNC_LBU -> Cat(0.U(24.W), load_data_raw(7, 0)),
    RiscvConsts.FUNC_LHU -> Cat(0.U(16.W), load_data_raw(15, 0))
  ))
  
  // Result selection
  val result = Mux(io.in.ctrl.mem_to_reg, load_data, io.in.alu_result)
  
  // Output
  io.out.pc := io.in.pc
  io.out.inst := io.in.inst
  io.out.result := result
  io.out.rd := io.in.rd
  io.out.ctrl := io.in.ctrl
  io.out.valid := io.in.valid
}

// Writeback Stage
class WritebackStage(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val in = Input(new MEMWBBundle(config))
    val regfile = new Bundle {
      val wen = Output(Bool())
      val waddr = Output(UInt(5.W))
      val wdata = Output(UInt(config.xlen.W))
    }
    val inst_retire = Output(Bool())
  })
  
  // Register file write
  io.regfile.wen := io.in.ctrl.reg_write && io.in.rd =/= 0.U && io.in.valid
  io.regfile.waddr := io.in.rd
  io.regfile.wdata := io.in.result
  
  // Instruction retirement
  io.inst_retire := io.in.valid
}

// Register File
class RegisterFile(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val read = new Bundle {
      val rs1_addr = Input(UInt(5.W))
      val rs2_addr = Input(UInt(5.W))
      val rs1_data = Output(UInt(config.xlen.W))
      val rs2_data = Output(UInt(config.xlen.W))
    }
    val write = new Bundle {
      val wen = Input(Bool())
      val waddr = Input(UInt(5.W))
      val wdata = Input(UInt(config.xlen.W))
    }
  })
  
  val regfile = RegInit(VecInit(Seq.fill(32)(0.U(config.xlen.W))))
  
  // Write
  when(io.write.wen && io.write.waddr =/= 0.U) {
    regfile(io.write.waddr) := io.write.wdata
  }
  
  // Read (x0 is always 0)
  io.read.rs1_data := Mux(io.read.rs1_addr === 0.U, 0.U, regfile(io.read.rs1_addr))
  io.read.rs2_data := Mux(io.read.rs2_addr === 0.U, 0.U, regfile(io.read.rs2_addr))
}

// MEM/WB Pipeline Register Bundle
class MEMWBBundle(config: SoCConfig) extends Bundle {
  val pc = UInt(config.addrWidth.W)
  val inst = UInt(32.W)
  val result = UInt(config.xlen.W)
  val rd = UInt(5.W)
  val ctrl = new ControlSignals
  val valid = Bool()
}

// MEM/WB Pipeline Register
class MEMWBRegister(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val in = Input(new MEMWBBundle(config))
    val out = Output(new MEMWBBundle(config))
    val stall = Input(Bool())
    val flush = Input(Bool())
  })
  
  val reg = RegInit(0.U.asTypeOf(new MEMWBBundle(config)))
  
  when(io.flush) {
    reg := 0.U.asTypeOf(new MEMWBBundle(config))
  }.elsewhen(!io.stall) {
    reg := io.in
  }
  
  io.out := reg
}