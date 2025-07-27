package soc.cpu

import chisel3._
import chisel3.util._
import soc.base._

// Decode Stage
class DecodeStage(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val inst = Input(new IFIDBundle(config))
    val regfile = new Bundle {
      val rs1_addr = Output(UInt(5.W))
      val rs2_addr = Output(UInt(5.W))
      val rs1_data = Input(UInt(config.xlen.W))
      val rs2_data = Input(UInt(config.xlen.W))
    }
    val out = Output(new IDEXBundle(config))
  })
  
  val inst = io.inst.inst
  val opcode = inst(6, 0)
  val rd = inst(11, 7)
  val funct3 = inst(14, 12)
  val rs1 = inst(19, 15)
  val rs2 = inst(24, 20)
  val funct7 = inst(31, 25)
  
  // Immediate generation
  val imm_i = inst(31, 20).asSInt.pad(config.xlen).asUInt
  val imm_s = Cat(inst(31, 25), inst(11, 7)).asSInt.pad(config.xlen).asUInt
  val imm_b = Cat(inst(31), inst(7), inst(30, 25), inst(11, 8), 0.U(1.W)).asSInt.pad(config.xlen).asUInt
  val imm_u = Cat(inst(31, 12), 0.U(12.W))
  val imm_j = Cat(inst(31), inst(19, 12), inst(20), inst(30, 21), 0.U(1.W)).asSInt.pad(config.xlen).asUInt
  
  // Control signals
  val ctrl = Module(new ControlUnit)
  ctrl.io.opcode := opcode
  ctrl.io.funct3 := funct3
  ctrl.io.funct7 := funct7
  
  // Register file connections
  io.regfile.rs1_addr := rs1
  io.regfile.rs2_addr := rs2
  
  // Immediate selection
  val imm = MuxLookup(ctrl.io.imm_sel, 0.U)(Seq(
    0.U -> imm_i,
    1.U -> imm_s,
    2.U -> imm_b,
    3.U -> imm_u,
    4.U -> imm_j
  ))
  
  // Output
  io.out.pc := io.inst.pc
  io.out.pc_plus4 := io.inst.pc_plus4
  io.out.inst := inst
  io.out.rs1_data := io.regfile.rs1_data
  io.out.rs2_data := io.regfile.rs2_data
  io.out.imm := imm
  io.out.rd := rd
  io.out.rs1 := rs1
  io.out.rs2 := rs2
  io.out.ctrl := ctrl.io.ctrl_sigs
  io.out.valid := io.inst.valid
}

// Control Unit
class ControlUnit extends Module {
  val io = IO(new Bundle {
    val opcode = Input(UInt(7.W))
    val funct3 = Input(UInt(3.W))
    val funct7 = Input(UInt(7.W))
    val imm_sel = Output(UInt(3.W))
    val ctrl_sigs = Output(new ControlSignals)
  })
  
  import RiscvConsts._
  
  // Default values
  val ctrl_sigs = Wire(new ControlSignals)
  ctrl_sigs := 0.U.asTypeOf(new ControlSignals)
  io.imm_sel := 0.U  // Default immediate selection
  
  // Decode logic
  switch(io.opcode) {
    is(OP_IMM) {
      ctrl_sigs.alu_src := true.B
      ctrl_sigs.reg_write := true.B
      ctrl_sigs.mem_to_reg := false.B
      io.imm_sel := 0.U // I-type
      
      switch(io.funct3) {
        is(FUNC_ADD) { ctrl_sigs.alu_op := ALUOp.ADD }
        is(FUNC_SLL) { ctrl_sigs.alu_op := ALUOp.SLL }
        is(FUNC_SLT) { ctrl_sigs.alu_op := ALUOp.SLT }
        is(FUNC_SLTU) { ctrl_sigs.alu_op := ALUOp.SLTU }
        is(FUNC_XOR) { ctrl_sigs.alu_op := ALUOp.XOR }
        is(FUNC_SRL) { 
          ctrl_sigs.alu_op := Mux(io.funct7(5), ALUOp.SRA, ALUOp.SRL)
        }
        is(FUNC_OR) { ctrl_sigs.alu_op := ALUOp.OR }
        is(FUNC_AND) { ctrl_sigs.alu_op := ALUOp.AND }
      }
    }
    
    is(OP) {
      ctrl_sigs.alu_src := false.B
      ctrl_sigs.reg_write := true.B
      ctrl_sigs.mem_to_reg := false.B
      io.imm_sel := 0.U // Don't care
      
      switch(io.funct3) {
        is(FUNC_ADD) { 
          ctrl_sigs.alu_op := Mux(io.funct7(5), ALUOp.SUB, ALUOp.ADD)
        }
        is(FUNC_SLL) { ctrl_sigs.alu_op := ALUOp.SLL }
        is(FUNC_SLT) { ctrl_sigs.alu_op := ALUOp.SLT }
        is(FUNC_SLTU) { ctrl_sigs.alu_op := ALUOp.SLTU }
        is(FUNC_XOR) { ctrl_sigs.alu_op := ALUOp.XOR }
        is(FUNC_SRL) { 
          ctrl_sigs.alu_op := Mux(io.funct7(5), ALUOp.SRA, ALUOp.SRL)
        }
        is(FUNC_OR) { ctrl_sigs.alu_op := ALUOp.OR }
        is(FUNC_AND) { ctrl_sigs.alu_op := ALUOp.AND }
      }
    }
    
    is(LOAD) {
      ctrl_sigs.alu_src := true.B
      ctrl_sigs.reg_write := true.B
      ctrl_sigs.mem_to_reg := true.B
      ctrl_sigs.mem_read := true.B
      ctrl_sigs.alu_op := ALUOp.ADD
      io.imm_sel := 0.U // I-type
    }
    
    is(STORE) {
      ctrl_sigs.alu_src := true.B
      ctrl_sigs.mem_write := true.B
      ctrl_sigs.alu_op := ALUOp.ADD
      io.imm_sel := 1.U // S-type
    }
    
    is(BRANCH) {
      ctrl_sigs.branch := true.B
      ctrl_sigs.alu_op := ALUOp.SUB
      io.imm_sel := 2.U // B-type
    }
    
    is(JAL) {
      ctrl_sigs.jump := true.B
      ctrl_sigs.reg_write := true.B
      ctrl_sigs.alu_op := ALUOp.ADD
      io.imm_sel := 4.U // J-type
    }
    
    is(JALR) {
      ctrl_sigs.jump := true.B
      ctrl_sigs.jalr := true.B
      ctrl_sigs.reg_write := true.B
      ctrl_sigs.alu_src := true.B
      ctrl_sigs.alu_op := ALUOp.ADD
      io.imm_sel := 0.U // I-type
    }
    
    is(LUI) {
      ctrl_sigs.reg_write := true.B
      ctrl_sigs.lui := true.B
      io.imm_sel := 3.U // U-type
    }
    
    is(AUIPC) {
      ctrl_sigs.reg_write := true.B
      ctrl_sigs.auipc := true.B
      ctrl_sigs.alu_op := ALUOp.ADD
      io.imm_sel := 3.U // U-type
    }
  }
  
  io.ctrl_sigs := ctrl_sigs
}

// Control Signals Bundle
class ControlSignals extends Bundle {
  val alu_src = Bool()      // ALU source: 0=reg, 1=imm
  val alu_op = UInt(4.W)    // ALU operation
  val mem_read = Bool()     // Memory read enable
  val mem_write = Bool()    // Memory write enable
  val reg_write = Bool()    // Register write enable
  val mem_to_reg = Bool()   // Write back source: 0=ALU, 1=memory
  val branch = Bool()       // Branch instruction
  val jump = Bool()         // Jump instruction
  val jalr = Bool()         // JALR instruction
  val lui = Bool()          // LUI instruction
  val auipc = Bool()        // AUIPC instruction
}

// ALU Operations
object ALUOp {
  val ADD  = 0.U(4.W)
  val SUB  = 1.U(4.W)
  val AND  = 2.U(4.W)
  val OR   = 3.U(4.W)
  val XOR  = 4.U(4.W)
  val SLT  = 5.U(4.W)
  val SLTU = 6.U(4.W)
  val SLL  = 7.U(4.W)
  val SRL  = 8.U(4.W)
  val SRA  = 9.U(4.W)
}

// ID/EX Pipeline Register Bundle
class IDEXBundle(config: SoCConfig) extends Bundle {
  val pc = UInt(config.addrWidth.W)
  val pc_plus4 = UInt(config.addrWidth.W)
  val inst = UInt(32.W)
  val rs1_data = UInt(config.xlen.W)
  val rs2_data = UInt(config.xlen.W)
  val imm = UInt(config.xlen.W)
  val rd = UInt(5.W)
  val rs1 = UInt(5.W)
  val rs2 = UInt(5.W)
  val ctrl = new ControlSignals
  val valid = Bool()
}

// ID/EX Pipeline Register
class IDEXRegister(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val in = Input(new IDEXBundle(config))
    val out = Output(new IDEXBundle(config))
    val stall = Input(Bool())
    val flush = Input(Bool())
  })
  
  val reg = RegInit(0.U.asTypeOf(new IDEXBundle(config)))
  
  when(io.flush) {
    reg := 0.U.asTypeOf(new IDEXBundle(config))
  }.elsewhen(!io.stall) {
    reg := io.in
  }
  
  io.out := reg
}