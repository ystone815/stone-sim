package soc.cpu

import chisel3._
import chisel3.util._
import soc.base._

// Hazard Detection Unit
class HazardUnit(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val if_id = Input(new IFIDBundle(config))
    val id_ex = Input(new IDEXBundle(config))
    val ex_mem = Input(new EXMEMBundle(config))
    val mem_wb = Input(new MEMWBBundle(config))
    
    // Control outputs
    val pc_sel = Output(UInt(2.W))
    val if_id_stall = Output(Bool())
    val if_id_flush = Output(Bool())
    val id_ex_stall = Output(Bool())
    val id_ex_flush = Output(Bool())
    val ex_mem_stall = Output(Bool())
    val ex_mem_flush = Output(Bool())
    val mem_wb_stall = Output(Bool())
    val mem_wb_flush = Output(Bool())
    val branch_miss = Output(Bool())
  })
  
  // Extract register addresses
  val if_id_rs1 = io.if_id.inst(19, 15)
  val if_id_rs2 = io.if_id.inst(24, 20)
  val id_ex_rd = io.id_ex.rd
  val ex_mem_rd = io.ex_mem.rd
  val mem_wb_rd = io.mem_wb.rd
  
  // Load-use hazard detection
  val load_use_hazard = io.id_ex.ctrl.mem_read && io.id_ex.valid &&
    (id_ex_rd =/= 0.U) &&
    ((id_ex_rd === if_id_rs1) || (id_ex_rd === if_id_rs2))
  
  // Branch/Jump control hazard
  val control_hazard = io.ex_mem.valid && 
    (io.ex_mem.ctrl.branch || io.ex_mem.ctrl.jump) &&
    io.ex_mem.branch_taken
  
  // Default values
  io.pc_sel := 0.U  // Normal PC increment
  io.if_id_stall := false.B
  io.if_id_flush := false.B
  io.id_ex_stall := false.B
  io.id_ex_flush := false.B
  io.ex_mem_stall := false.B
  io.ex_mem_flush := false.B
  io.mem_wb_stall := false.B
  io.mem_wb_flush := false.B
  io.branch_miss := false.B
  
  // Handle load-use hazard (stall pipeline)
  when(load_use_hazard) {
    io.if_id_stall := true.B
    io.id_ex_flush := true.B  // Insert bubble
  }
  
  // Handle control hazard (flush and redirect)
  when(control_hazard) {
    io.pc_sel := 1.U  // Branch/Jump target
    io.if_id_flush := true.B
    io.id_ex_flush := true.B
    io.ex_mem_flush := true.B
    io.branch_miss := true.B
  }
}

// Forwarding Unit
class ForwardingUnit(config: SoCConfig) extends Module {
  val io = IO(new Bundle {
    val id_ex = Input(new IDEXBundle(config))
    val ex_mem = Input(new EXMEMBundle(config))
    val mem_wb = Input(new MEMWBBundle(config))
    
    val forward_a = Output(UInt(2.W))
    val forward_b = Output(UInt(2.W))
  })
  
  val id_ex_rs1 = io.id_ex.rs1
  val id_ex_rs2 = io.id_ex.rs2
  val ex_mem_rd = io.ex_mem.rd
  val mem_wb_rd = io.mem_wb.rd
  
  // Default: no forwarding
  io.forward_a := 0.U
  io.forward_b := 0.U
  
  // EX hazard: forward from EX/MEM stage
  when(io.ex_mem.ctrl.reg_write && io.ex_mem.valid &&
       ex_mem_rd =/= 0.U && ex_mem_rd === id_ex_rs1) {
    io.forward_a := 1.U
  }
  
  when(io.ex_mem.ctrl.reg_write && io.ex_mem.valid &&
       ex_mem_rd =/= 0.U && ex_mem_rd === id_ex_rs2) {
    io.forward_b := 1.U
  }
  
  // MEM hazard: forward from MEM/WB stage (if not already forwarding from EX)
  when(io.mem_wb.ctrl.reg_write && io.mem_wb.valid &&
       mem_wb_rd =/= 0.U && mem_wb_rd === id_ex_rs1 &&
       !(io.ex_mem.ctrl.reg_write && io.ex_mem.valid &&
         ex_mem_rd =/= 0.U && ex_mem_rd === id_ex_rs1)) {
    io.forward_a := 2.U
  }
  
  when(io.mem_wb.ctrl.reg_write && io.mem_wb.valid &&
       mem_wb_rd =/= 0.U && mem_wb_rd === id_ex_rs2 &&
       !(io.ex_mem.ctrl.reg_write && io.ex_mem.valid &&
         ex_mem_rd =/= 0.U && ex_mem_rd === id_ex_rs2)) {
    io.forward_b := 2.U
  }
}