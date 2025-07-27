package soc.cpu

import chisel3._
import chisel3.util._
import soc.base._

// Execute Stage
class ExecuteStage(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val in = Input(new IDEXBundle(config))
    val forward_a = Input(UInt(2.W))
    val forward_b = Input(UInt(2.W))
    val ex_result = Input(UInt(config.xlen.W))
    val mem_result = Input(UInt(config.xlen.W))
    val out = Output(new EXMEMBundle(config))
    val pc_target = Output(UInt(config.addrWidth.W))
  })
  
  // ALU
  val alu = Module(new ALU(config))
  
  // Forwarding muxes
  val alu_a = MuxLookup(io.forward_a, io.in.rs1_data)(Seq(
    0.U -> io.in.rs1_data,
    1.U -> io.ex_result,
    2.U -> io.mem_result
  ))
  
  val alu_b_reg = MuxLookup(io.forward_b, io.in.rs2_data)(Seq(
    0.U -> io.in.rs2_data,
    1.U -> io.ex_result,
    2.U -> io.mem_result
  ))
  
  // ALU source mux
  val alu_b = Mux(io.in.ctrl.alu_src, io.in.imm, alu_b_reg)
  
  // ALU inputs
  alu.io.a := Mux(io.in.ctrl.auipc, io.in.pc, alu_a)
  alu.io.b := alu_b
  alu.io.op := io.in.ctrl.alu_op
  
  // Branch logic
  val branch_unit = Module(new BranchUnit(config))
  branch_unit.io.rs1_data := alu_a
  branch_unit.io.rs2_data := alu_b_reg
  branch_unit.io.funct3 := io.in.inst(14, 12)
  branch_unit.io.branch := io.in.ctrl.branch
  
  val branch_taken = branch_unit.io.taken || io.in.ctrl.jump
  
  // PC target calculation
  val pc_target = MuxLookup(Cat(io.in.ctrl.jalr, io.in.ctrl.jump, io.in.ctrl.branch), io.in.pc_plus4)(Seq(
    "b001".U -> (io.in.pc + io.in.imm),  // Branch
    "b010".U -> (io.in.pc + io.in.imm),  // JAL
    "b100".U -> (alu_a + io.in.imm),     // JALR
    "b110".U -> (alu_a + io.in.imm)      // JALR (shouldn't happen with jump=1)
  ))
  
  io.pc_target := pc_target
  
  // Result selection
  val result = MuxLookup(Cat(io.in.ctrl.lui, io.in.ctrl.jump || io.in.ctrl.jalr), alu.io.result)(Seq(
    "b01".U -> io.in.pc_plus4,  // JAL/JALR
    "b10".U -> io.in.imm,       // LUI
    "b11".U -> io.in.pc_plus4   // Shouldn't happen
  ))
  
  // Output
  io.out.pc := io.in.pc
  io.out.pc_plus4 := io.in.pc_plus4
  io.out.inst := io.in.inst
  io.out.alu_result := result
  io.out.rs2_data := alu_b_reg
  io.out.rd := io.in.rd
  io.out.ctrl := io.in.ctrl
  io.out.branch_taken := branch_taken
  io.out.valid := io.in.valid
}

// ALU
class ALU(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(config.xlen.W))
    val b = Input(UInt(config.xlen.W))
    val op = Input(UInt(4.W))
    val result = Output(UInt(config.xlen.W))
  })
  
  val shamt = io.b(4, 0) // Shift amount
  
  io.result := MuxLookup(io.op, 0.U)(Seq(
    ALUOp.ADD  -> (io.a + io.b),
    ALUOp.SUB  -> (io.a - io.b),
    ALUOp.AND  -> (io.a & io.b),
    ALUOp.OR   -> (io.a | io.b),
    ALUOp.XOR  -> (io.a ^ io.b),
    ALUOp.SLT  -> (io.a.asSInt < io.b.asSInt).asUInt,
    ALUOp.SLTU -> (io.a < io.b).asUInt,
    ALUOp.SLL  -> (io.a << shamt),
    ALUOp.SRL  -> (io.a >> shamt),
    ALUOp.SRA  -> (io.a.asSInt >> shamt).asUInt
  ))
}

// Branch Unit
class BranchUnit(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val rs1_data = Input(UInt(config.xlen.W))
    val rs2_data = Input(UInt(config.xlen.W))
    val funct3 = Input(UInt(3.W))
    val branch = Input(Bool())
    val taken = Output(Bool())
  })
  
  import RiscvConsts._
  
  val eq = io.rs1_data === io.rs2_data
  val lt = io.rs1_data.asSInt < io.rs2_data.asSInt
  val ltu = io.rs1_data < io.rs2_data
  
  val branch_taken = MuxLookup(io.funct3, false.B)(Seq(
    FUNC_BEQ  -> eq,
    FUNC_BNE  -> !eq,
    FUNC_BLT  -> lt,
    FUNC_BGE  -> !lt,
    FUNC_BLTU -> ltu,
    FUNC_BGEU -> !ltu
  ))
  
  io.taken := io.branch && branch_taken
}

// EX/MEM Pipeline Register Bundle
class EXMEMBundle(config: SoCConfig) extends Bundle {
  val pc = UInt(config.addrWidth.W)
  val pc_plus4 = UInt(config.addrWidth.W)
  val inst = UInt(32.W)
  val alu_result = UInt(config.xlen.W)
  val rs2_data = UInt(config.xlen.W)
  val rd = UInt(5.W)
  val ctrl = new ControlSignals
  val branch_taken = Bool()
  val valid = Bool()
}

// EX/MEM Pipeline Register
class EXMEMRegister(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val in = Input(new EXMEMBundle(config))
    val out = Output(new EXMEMBundle(config))
    val stall = Input(Bool())
    val flush = Input(Bool())
  })
  
  val reg = RegInit(0.U.asTypeOf(new EXMEMBundle(config)))
  
  when(io.flush) {
    reg := 0.U.asTypeOf(new EXMEMBundle(config))
  }.elsewhen(!io.stall) {
    reg := io.in
  }
  
  io.out := reg
}