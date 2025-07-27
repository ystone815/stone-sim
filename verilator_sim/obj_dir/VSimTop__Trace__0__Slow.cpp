// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


VL_ATTR_COLD void VSimTop___024root__trace_init_sub__TOP__0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4882,0,"io_success",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4883,0,"io_finished",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("SimTop", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4882,0,"io_success",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4883,0,"io_finished",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("soc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"io_debug_perf_avg_ipc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_imem_req_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"io_imem_resp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_imem_resp_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"io_dmem_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"io_dmem_req_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"io_dmem_req_bits_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"io_dmem_req_bits_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"io_dmem_req_bits_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"io_dmem_resp_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+12,0,"io_perf_instret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+12,0,"inst_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"io_inst_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"io_inst_pc_plus4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"io_inst_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"io_inst_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"io_regfile_rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"io_regfile_rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"io_regfile_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"io_regfile_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"io_out_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"io_out_pc_plus4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"io_out_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"io_out_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"io_out_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"io_out_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"io_out_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"io_out_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"io_out_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+24,0,"io_out_ctrl_alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"io_out_ctrl_alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+26,0,"io_out_ctrl_mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_out_ctrl_mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_out_ctrl_reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"io_out_ctrl_mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"io_out_ctrl_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"io_out_ctrl_jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"io_out_ctrl_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"io_out_ctrl_lui",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"io_out_ctrl_auipc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"io_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"io_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,0,"io_funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+37,0,"io_imm_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+24,0,"io_ctrl_sigs_alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"io_ctrl_sigs_alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+26,0,"io_ctrl_sigs_mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_ctrl_sigs_mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_ctrl_sigs_reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"io_ctrl_sigs_mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"io_ctrl_sigs_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"io_ctrl_sigs_jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"io_ctrl_sigs_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"io_ctrl_sigs_lui",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"io_ctrl_sigs_auipc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"ctrl_sigs_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ex_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_in_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_in_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_in_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"io_in_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+42,0,"io_in_ctrl_mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"io_in_ctrl_mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"io_in_ctrl_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"io_in_ctrl_mem_to_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"io_in_ctrl_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"io_in_ctrl_jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"io_in_branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"io_out_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"io_out_alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"io_out_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"io_out_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+53,0,"io_out_ctrl_mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"io_out_ctrl_mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"io_out_ctrl_reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"io_out_ctrl_mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"io_out_ctrl_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"io_out_ctrl_jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"io_out_branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"reg_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"reg_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"reg_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"reg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+53,0,"reg_ctrl_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"reg_ctrl_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"reg_ctrl_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"reg_ctrl_mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"reg_ctrl_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"reg_ctrl_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"reg_branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"reg_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("execute", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"io_in_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"io_in_pc_plus4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"io_in_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"io_in_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"io_in_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"io_in_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"io_in_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+66,0,"io_in_ctrl_alu_src",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"io_in_ctrl_alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"io_in_ctrl_mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"io_in_ctrl_mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"io_in_ctrl_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"io_in_ctrl_mem_to_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"io_in_ctrl_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"io_in_ctrl_jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"io_in_ctrl_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"io_in_ctrl_lui",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"io_in_ctrl_auipc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"io_forward_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+72,0,"io_forward_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"io_ex_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"io_mem_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"io_out_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_out_alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_out_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"io_out_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+42,0,"io_out_ctrl_mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"io_out_ctrl_mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"io_out_ctrl_reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"io_out_ctrl_mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"io_out_ctrl_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"io_out_ctrl_jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"io_out_branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"io_pc_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"alu_b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+76,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"io_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+78,0,"io_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("branch_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"io_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"io_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"io_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+46,0,"io_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"lt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"ltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"io_pc_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+74,0,"io_pc_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"io_imem_req_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"io_imem_resp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_imem_resp_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"io_out_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"io_out_pc_plus4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"io_out_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("forward", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+87,0,"io_id_ex_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+88,0,"io_id_ex_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"io_ex_mem_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+54,0,"io_ex_mem_ctrl_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"io_ex_mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"io_mem_wb_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+90,0,"io_mem_wb_ctrl_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"io_mem_wb_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"io_forward_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+72,0,"io_forward_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("hazard", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"io_if_id_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"io_id_ex_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+42,0,"io_id_ex_ctrl_mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"io_id_ex_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"io_ex_mem_ctrl_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"io_ex_mem_ctrl_jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"io_ex_mem_branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"io_ex_mem_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"io_pc_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+92,0,"io_if_id_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"io_if_id_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"io_id_ex_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"io_ex_mem_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"load_use_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"control_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("id_ex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"io_in_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"io_in_pc_plus4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"io_in_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"io_in_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"io_in_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"io_in_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"io_in_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"io_in_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"io_in_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+24,0,"io_in_ctrl_alu_src",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"io_in_ctrl_alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+26,0,"io_in_ctrl_mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_in_ctrl_mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_in_ctrl_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"io_in_ctrl_mem_to_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"io_in_ctrl_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"io_in_ctrl_jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"io_in_ctrl_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"io_in_ctrl_lui",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"io_in_ctrl_auipc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"io_out_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"io_out_pc_plus4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"io_out_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"io_out_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"io_out_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"io_out_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"io_out_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"io_out_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+88,0,"io_out_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+66,0,"io_out_ctrl_alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"io_out_ctrl_alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"io_out_ctrl_mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"io_out_ctrl_mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"io_out_ctrl_reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"io_out_ctrl_mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"io_out_ctrl_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"io_out_ctrl_jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"io_out_ctrl_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"io_out_ctrl_lui",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"io_out_ctrl_auipc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"reg_pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"reg_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"reg_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"reg_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"reg_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"reg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+87,0,"reg_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+88,0,"reg_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+66,0,"reg_ctrl_alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"reg_ctrl_alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"reg_ctrl_mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"reg_ctrl_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"reg_ctrl_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"reg_ctrl_mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"reg_ctrl_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"reg_ctrl_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"reg_ctrl_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"reg_ctrl_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"reg_ctrl_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"reg_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("if_id", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_in_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"io_in_pc_plus4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"io_in_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"io_out_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"io_out_pc_plus4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"io_out_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"reg_pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"reg_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"reg_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mem_wb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"io_in_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"io_in_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+54,0,"io_in_ctrl_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"io_out_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"io_out_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+90,0,"io_out_ctrl_reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"reg_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"reg_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+90,0,"reg_ctrl_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"reg_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+50,0,"io_in_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"io_in_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"io_in_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"io_in_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+53,0,"io_in_ctrl_mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"io_in_ctrl_mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"io_in_ctrl_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"io_in_ctrl_mem_to_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"io_dmem_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"io_dmem_req_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"io_dmem_req_bits_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"io_dmem_req_bits_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"io_dmem_req_bits_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"io_dmem_resp_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"io_out_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"io_out_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+54,0,"io_out_ctrl_reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"io_read_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"io_read_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"io_read_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"io_read_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"io_write_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"io_write_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+73,0,"io_write_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"regfile_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"regfile_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"regfile_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"regfile_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"regfile_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"regfile_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"regfile_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"regfile_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"regfile_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"regfile_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"regfile_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"regfile_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"regfile_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"regfile_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"regfile_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"regfile_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"regfile_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"regfile_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"regfile_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"regfile_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"regfile_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"regfile_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"regfile_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"regfile_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"regfile_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"regfile_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"regfile_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"regfile_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"regfile_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"regfile_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"regfile_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"regfile_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("writeback", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"io_in_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"io_in_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+90,0,"io_in_ctrl_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"io_regfile_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"io_regfile_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+73,0,"io_regfile_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"io_inst_retire",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dcache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"io_cpu_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"io_cpu_req_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"io_cpu_req_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"io_cpu_req_bits_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"io_cpu_req_bits_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"io_cpu_resp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"io_cpu_resp_bits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"io_mem_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"io_mem_req_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"io_mem_req_bits_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"io_mem_req_bits_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+133,0,"io_mem_req_bits_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"io_mem_resp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"io_mem_resp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"io_mem_resp_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"io_mem_resp_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"validArray_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"validArray_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"validArray_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"validArray_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"validArray_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"validArray_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"validArray_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"validArray_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"validArray_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"validArray_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"validArray_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"validArray_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"validArray_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"validArray_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"validArray_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"validArray_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"validArray_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"validArray_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"validArray_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"validArray_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"validArray_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"validArray_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"validArray_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"validArray_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"validArray_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"validArray_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"validArray_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"validArray_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"validArray_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"validArray_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"validArray_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"validArray_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"validArray_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"validArray_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"validArray_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"validArray_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"validArray_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"validArray_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"validArray_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"validArray_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"validArray_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"validArray_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"validArray_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"validArray_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"validArray_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"validArray_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"validArray_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"validArray_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"validArray_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"validArray_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"validArray_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"validArray_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"validArray_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"validArray_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"validArray_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"validArray_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"validArray_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"validArray_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"validArray_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"validArray_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"validArray_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"validArray_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"validArray_62",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"validArray_63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"validArray_64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"validArray_65",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"validArray_66",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"validArray_67",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"validArray_68",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"validArray_69",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"validArray_70",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"validArray_71",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"validArray_72",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"validArray_73",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"validArray_74",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"validArray_75",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"validArray_76",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"validArray_77",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"validArray_78",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"validArray_79",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"validArray_80",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"validArray_81",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"validArray_82",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"validArray_83",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"validArray_84",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"validArray_85",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"validArray_86",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"validArray_87",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"validArray_88",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"validArray_89",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"validArray_90",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"validArray_91",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"validArray_92",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"validArray_93",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"validArray_94",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"validArray_95",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"validArray_96",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"validArray_97",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"validArray_98",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"validArray_99",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"validArray_100",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"validArray_101",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"validArray_102",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"validArray_103",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"validArray_104",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"validArray_105",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"validArray_106",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"validArray_107",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"validArray_108",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"validArray_109",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"validArray_110",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"validArray_111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"validArray_112",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"validArray_113",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"validArray_114",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"validArray_115",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"validArray_116",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"validArray_117",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"validArray_118",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"validArray_119",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"validArray_120",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"validArray_121",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"validArray_122",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"validArray_123",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"validArray_124",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"validArray_125",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"validArray_126",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"validArray_127",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+266,0,"io_cpu_req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+268,0,"word_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBit(c+129,0,"io_mem_req_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dataArray_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+285,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4880,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+286,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+284,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+302,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4880,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+303,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->pushPrefix("Memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 128; ++i) {
        tracep->declArray(c+319+i*16,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 511,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tagArray_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+2367,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4880,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2368,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+284,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+302,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4880,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2369,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("Memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 128; ++i) {
        tracep->declBus(c+2370+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 18,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dmem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"io_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"io_req_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"io_req_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"io_req_bits_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+133,0,"io_req_bits_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"io_resp_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"io_resp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"io_resp_bits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+135,0,"resp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"resp_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mem_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2498,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+2499,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4880,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2500,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2498,0,"R1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+2501,0,"R1_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4880,0,"R1_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2502,0,"R1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2498,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+2501,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4880,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2503,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("icache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4884,0,"io_cpu_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_cpu_req_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4885,0,"io_cpu_req_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4886,0,"io_cpu_req_bits_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4887,0,"io_cpu_req_bits_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_cpu_resp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_cpu_resp_bits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2504,0,"io_mem_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2505,0,"io_mem_req_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4885,0,"io_mem_req_bits_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4886,0,"io_mem_req_bits_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4887,0,"io_mem_req_bits_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2506,0,"io_mem_resp_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2507,0,"io_mem_resp_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2508,0,"io_mem_resp_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2506,0,"io_mem_resp_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2509,0,"validArray_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2510,0,"validArray_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2511,0,"validArray_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2512,0,"validArray_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2513,0,"validArray_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2514,0,"validArray_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2515,0,"validArray_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2516,0,"validArray_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2517,0,"validArray_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2518,0,"validArray_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2519,0,"validArray_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2520,0,"validArray_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2521,0,"validArray_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2522,0,"validArray_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2523,0,"validArray_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2524,0,"validArray_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2525,0,"validArray_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2526,0,"validArray_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2527,0,"validArray_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2528,0,"validArray_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2529,0,"validArray_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2530,0,"validArray_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2531,0,"validArray_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2532,0,"validArray_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2533,0,"validArray_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2534,0,"validArray_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2535,0,"validArray_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2536,0,"validArray_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2537,0,"validArray_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2538,0,"validArray_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2539,0,"validArray_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2540,0,"validArray_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2541,0,"validArray_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2542,0,"validArray_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2543,0,"validArray_34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2544,0,"validArray_35",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2545,0,"validArray_36",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2546,0,"validArray_37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2547,0,"validArray_38",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2548,0,"validArray_39",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2549,0,"validArray_40",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2550,0,"validArray_41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2551,0,"validArray_42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2552,0,"validArray_43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2553,0,"validArray_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2554,0,"validArray_45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2555,0,"validArray_46",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2556,0,"validArray_47",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2557,0,"validArray_48",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2558,0,"validArray_49",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2559,0,"validArray_50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2560,0,"validArray_51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2561,0,"validArray_52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2562,0,"validArray_53",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2563,0,"validArray_54",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2564,0,"validArray_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2565,0,"validArray_56",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2566,0,"validArray_57",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2567,0,"validArray_58",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2568,0,"validArray_59",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2569,0,"validArray_60",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2570,0,"validArray_61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2571,0,"validArray_62",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2572,0,"validArray_63",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2573,0,"validArray_64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2574,0,"validArray_65",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2575,0,"validArray_66",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2576,0,"validArray_67",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2577,0,"validArray_68",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2578,0,"validArray_69",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2579,0,"validArray_70",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2580,0,"validArray_71",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2581,0,"validArray_72",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2582,0,"validArray_73",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2583,0,"validArray_74",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2584,0,"validArray_75",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2585,0,"validArray_76",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2586,0,"validArray_77",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2587,0,"validArray_78",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2588,0,"validArray_79",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2589,0,"validArray_80",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2590,0,"validArray_81",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2591,0,"validArray_82",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2592,0,"validArray_83",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2593,0,"validArray_84",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2594,0,"validArray_85",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2595,0,"validArray_86",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2596,0,"validArray_87",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2597,0,"validArray_88",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2598,0,"validArray_89",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2599,0,"validArray_90",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2600,0,"validArray_91",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2601,0,"validArray_92",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2602,0,"validArray_93",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2603,0,"validArray_94",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2604,0,"validArray_95",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2605,0,"validArray_96",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2606,0,"validArray_97",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2607,0,"validArray_98",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2608,0,"validArray_99",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2609,0,"validArray_100",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2610,0,"validArray_101",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2611,0,"validArray_102",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2612,0,"validArray_103",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2613,0,"validArray_104",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2614,0,"validArray_105",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2615,0,"validArray_106",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2616,0,"validArray_107",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2617,0,"validArray_108",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2618,0,"validArray_109",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2619,0,"validArray_110",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2620,0,"validArray_111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2621,0,"validArray_112",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2622,0,"validArray_113",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2623,0,"validArray_114",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2624,0,"validArray_115",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2625,0,"validArray_116",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2626,0,"validArray_117",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2627,0,"validArray_118",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2628,0,"validArray_119",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2629,0,"validArray_120",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2630,0,"validArray_121",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2631,0,"validArray_122",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2632,0,"validArray_123",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2633,0,"validArray_124",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2634,0,"validArray_125",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2635,0,"validArray_126",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2636,0,"validArray_127",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2637,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2638,0,"io_cpu_req_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2639,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2640,0,"word_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBit(c+2504,0,"io_mem_req_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dataArray_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2656,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+2657,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4880,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2658,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+2656,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+2674,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4880,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2675,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->pushPrefix("Memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 128; ++i) {
        tracep->declArray(c+2691+i*16,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 511,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tagArray_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2656,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+2638,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4880,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4739,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+2656,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+2674,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4880,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4740,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("Memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 128; ++i) {
        tracep->declBus(c+4741+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 18,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2504,0,"io_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2505,0,"io_req_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4885,0,"io_req_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4886,0,"io_req_bits_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4887,0,"io_req_bits_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2506,0,"io_resp_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2507,0,"io_resp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2508,0,"io_resp_bits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2507,0,"resp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2508,0,"resp_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mem_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4869,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+4870,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4880,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4871,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4869,0,"R1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+4887,0,"R1_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4880,0,"R1_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4872,0,"R1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4869,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+4887,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4880,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4873,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("perf_monitor", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+12,0,"io_cpu_perf_instret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2,0,"io_debug_perf_avg_ipc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("perf_monitor", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+12,0,"io_cpu_perf_instret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2,0,"io_perf_data_ipc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+4874,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+4876,0,"instruction_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("trace_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4880,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4881,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+4878,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VSimTop___024root__trace_init_top(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_init_top\n"); );
    // Body
    VSimTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSimTop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VSimTop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSimTop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSimTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSimTop___024root__trace_register(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VSimTop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VSimTop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VSimTop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VSimTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSimTop___024root__trace_const_0_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSimTop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_const_0\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSimTop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSimTop___024root__trace_const_0_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+4884,(1U));
    bufp->fullIData(oldp+4885,(0U),32);
    bufp->fullCData(oldp+4886,(0U),4);
    bufp->fullBit(oldp+4887,(0U));
}

VL_ATTR_COLD void VSimTop___024root__trace_full_0_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSimTop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_full_0\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSimTop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<16>/*511:0*/ VSimTop__ConstPool__CONST_h93e1b771_0;

VL_ATTR_COLD void VSimTop___024root__trace_full_0_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<16>/*511:0*/ __Vtemp_10;
    VlWide<16>/*511:0*/ __Vtemp_11;
    VlWide<8>/*255:0*/ __Vtemp_23;
    VlWide<16>/*511:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<16>/*511:0*/ __Vtemp_45;
    VlWide<16>/*511:0*/ __Vtemp_46;
    VlWide<16>/*511:0*/ __Vtemp_47;
    VlWide<8>/*255:0*/ __Vtemp_52;
    VlWide<16>/*511:0*/ __Vtemp_53;
    VlWide<16>/*511:0*/ __Vtemp_54;
    VlWide<16>/*511:0*/ __Vtemp_55;
    VlWide<16>/*511:0*/ __Vtemp_56;
    VlWide<16>/*511:0*/ __Vtemp_57;
    VlWide<16>/*511:0*/ __Vtemp_58;
    VlWide<16>/*511:0*/ __Vtemp_59;
    VlWide<16>/*511:0*/ __Vtemp_60;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->SimTop__DOT__cycle_counter),32);
    __Vtemp_3[0U] = 0x3e8U;
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    __Vtemp_4[0U] = (IData)(vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__instruction_counter);
    __Vtemp_4[1U] = (IData)((vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__instruction_counter 
                             >> 0x20U));
    __Vtemp_4[2U] = 0U;
    VL_MUL_W(3, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    __Vtemp_6[0U] = __Vtemp_5[0U];
    __Vtemp_6[1U] = __Vtemp_5[1U];
    __Vtemp_6[2U] = (0x3ffU & __Vtemp_5[2U]);
    __Vtemp_7[0U] = (IData)(vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__cycle_counter);
    __Vtemp_7[1U] = 0U;
    __Vtemp_7[2U] = 0U;
    VL_DIV_WWW(74, __Vtemp_8, __Vtemp_6, __Vtemp_7);
    bufp->fullIData(oldp+2,(((0ULL == vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__cycle_counter)
                              ? 0U : __Vtemp_8[0U])),32);
    bufp->fullIData(oldp+3,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc),32);
    bufp->fullBit(oldp+4,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___fetch_io_out_valid));
    if (vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_en_d0) {
        __Vtemp_10[0U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0U];
        __Vtemp_10[1U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][1U];
        __Vtemp_10[2U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][2U];
        __Vtemp_10[3U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][3U];
        __Vtemp_10[4U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][4U];
        __Vtemp_10[5U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][5U];
        __Vtemp_10[6U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][6U];
        __Vtemp_10[7U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][7U];
        __Vtemp_10[8U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][8U];
        __Vtemp_10[9U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][9U];
        __Vtemp_10[0xaU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xaU];
        __Vtemp_10[0xbU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xbU];
        __Vtemp_10[0xcU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xcU];
        __Vtemp_10[0xdU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xdU];
        __Vtemp_10[0xeU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xeU];
        __Vtemp_10[0xfU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xfU];
    } else {
        __Vtemp_10[0U] = VSimTop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_10[1U] = VSimTop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_10[2U] = VSimTop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_10[3U] = VSimTop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_10[4U] = VSimTop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_10[5U] = VSimTop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_10[6U] = VSimTop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_10[7U] = VSimTop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_10[8U] = VSimTop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_10[9U] = VSimTop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_10[0xaU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_10[0xbU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_10[0xcU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_10[0xdU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_10[0xeU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_10[0xfU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_11, __Vtemp_10, 
                  (0x1e0U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                             << 3U)));
    bufp->fullIData(oldp+5,(((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state))
                              ? ((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_2)
                                  ? __Vtemp_11[0U] : 0U)
                              : ((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_5)
                                  ? vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_data
                                  : 0U))),32);
    bufp->fullBit(oldp+6,(((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_read) 
                           | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write))));
    bufp->fullIData(oldp+7,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result),32);
    bufp->fullIData(oldp+8,(vlSelf->SimTop__DOT__soc__DOT___cpu_io_dmem_req_bits_data),32);
    bufp->fullCData(oldp+9,(((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write)
                              ? ((2U == (7U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                               >> 0xcU)))
                                  ? 0xfU : (IData)(vlSelf->__VdfgTmp_h90747646__0))
                              : 0U)),4);
    bufp->fullBit(oldp+10,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write));
    bufp->fullIData(oldp+11,(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits),32);
    bufp->fullQData(oldp+12,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__inst_counter),64);
    bufp->fullIData(oldp+14,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_pc),32);
    bufp->fullIData(oldp+15,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_pc_plus4),32);
    bufp->fullIData(oldp+16,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst),32);
    bufp->fullBit(oldp+17,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_valid));
    bufp->fullCData(oldp+18,((0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+19,((0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+20,(((0U == (0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                               >> 0xfU)))
                               ? 0U : (((0U == (0x1fU 
                                                & VL_SHIFTL_III(10,10,32, 
                                                                (0x1fU 
                                                                 & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                    >> 0xfU)), 5U)))
                                         ? 0U : (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[
                                                 (((IData)(0x1fU) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x1fU 
                                                                     & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                        >> 0xfU)), 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x1fU 
                                                                    & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                       >> 0xfU)), 5U))))) 
                                       | (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[
                                          (0x1fU & 
                                           (VL_SHIFTL_III(10,10,32, 
                                                          (0x1fU 
                                                           & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                              >> 0xfU)), 5U) 
                                            >> 5U))] 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(10,10,32, 
                                                              (0x1fU 
                                                               & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                  >> 0xfU)), 5U)))))),32);
    bufp->fullIData(oldp+21,(((0U == (0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                               >> 0x14U)))
                               ? 0U : (((0U == (0x1fU 
                                                & VL_SHIFTL_III(10,10,32, 
                                                                (0x1fU 
                                                                 & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                    >> 0x14U)), 5U)))
                                         ? 0U : (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[
                                                 (((IData)(0x1fU) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,10,32, 
                                                                    (0x1fU 
                                                                     & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                        >> 0x14U)), 5U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x1fU 
                                                                    & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                       >> 0x14U)), 5U))))) 
                                       | (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[
                                          (0x1fU & 
                                           (VL_SHIFTL_III(10,10,32, 
                                                          (0x1fU 
                                                           & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                              >> 0x14U)), 5U) 
                                            >> 5U))] 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(10,10,32, 
                                                              (0x1fU 
                                                               & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                  >> 0x14U)), 5U)))))),32);
    __Vtemp_23[0U] = (IData)((((QData)((IData)((0xfffffU 
                                                & (- (IData)(
                                                             (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                              >> 0x1fU)))))) 
                               << 0x2cU) | (((QData)((IData)(
                                                             (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                              >> 0x19U))) 
                                             << 0x25U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                    >> 7U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((- (IData)(
                                                                              (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                               >> 0x1fU))) 
                                                                   << 0xcU) 
                                                                  | (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                     >> 0x14U))))))));
    __Vtemp_23[1U] = (IData)(((((QData)((IData)((0xfffffU 
                                                 & (- (IData)(
                                                              (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                               >> 0x1fU)))))) 
                                << 0x2cU) | (((QData)((IData)(
                                                              (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                               >> 0x19U))) 
                                              << 0x25U) 
                                             | (((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                     >> 7U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (((- (IData)(
                                                                               (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                                >> 0x1fU))) 
                                                                    << 0xcU) 
                                                                   | (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                      >> 0x14U))))))) 
                              >> 0x20U));
    __Vtemp_23[2U] = (((- (IData)((vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                   >> 0x1fU))) << 0xcU) 
                      | ((0x800U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                    << 4U)) | ((0x7e0U 
                                                & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                     >> 7U)))));
    __Vtemp_23[3U] = (0xfffff000U & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst);
    __Vtemp_23[4U] = (((- (IData)((vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                   >> 0x1fU))) << 0x14U) 
                      | ((0xff000U & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst) 
                         | ((0x800U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                       >> 9U)) | (0x7feU 
                                                  & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                     >> 0x14U)))));
    if (vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_en_d0) {
        __Vtemp_46[0U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0U];
        __Vtemp_46[1U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][1U];
        __Vtemp_46[2U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][2U];
        __Vtemp_46[3U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][3U];
        __Vtemp_46[4U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][4U];
        __Vtemp_46[5U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][5U];
        __Vtemp_46[6U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][6U];
        __Vtemp_46[7U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][7U];
        __Vtemp_46[8U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][8U];
        __Vtemp_46[9U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][9U];
        __Vtemp_46[0xaU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xaU];
        __Vtemp_46[0xbU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xbU];
        __Vtemp_46[0xcU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xcU];
        __Vtemp_46[0xdU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xdU];
        __Vtemp_46[0xeU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xeU];
        __Vtemp_46[0xfU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xfU];
        __Vtemp_57[0U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0U];
        __Vtemp_57[1U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][1U];
        __Vtemp_57[2U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][2U];
        __Vtemp_57[3U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][3U];
        __Vtemp_57[4U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][4U];
        __Vtemp_57[5U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][5U];
        __Vtemp_57[6U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][6U];
        __Vtemp_57[7U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][7U];
        __Vtemp_57[8U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][8U];
        __Vtemp_57[9U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][9U];
        __Vtemp_57[0xaU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xaU];
        __Vtemp_57[0xbU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xbU];
        __Vtemp_57[0xcU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xcU];
        __Vtemp_57[0xdU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xdU];
        __Vtemp_57[0xeU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xeU];
        __Vtemp_57[0xfU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xfU];
        __Vtemp_59[0U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0U];
        __Vtemp_59[1U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][1U];
        __Vtemp_59[2U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][2U];
        __Vtemp_59[3U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][3U];
        __Vtemp_59[4U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][4U];
        __Vtemp_59[5U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][5U];
        __Vtemp_59[6U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][6U];
        __Vtemp_59[7U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][7U];
        __Vtemp_59[8U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][8U];
        __Vtemp_59[9U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][9U];
        __Vtemp_59[0xaU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xaU];
        __Vtemp_59[0xbU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xbU];
        __Vtemp_59[0xcU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xcU];
        __Vtemp_59[0xdU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xdU];
        __Vtemp_59[0xeU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xeU];
        __Vtemp_59[0xfU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xfU];
    } else {
        __Vtemp_46[0U] = VSimTop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_46[1U] = VSimTop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_46[2U] = VSimTop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_46[3U] = VSimTop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_46[4U] = VSimTop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_46[5U] = VSimTop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_46[6U] = VSimTop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_46[7U] = VSimTop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_46[8U] = VSimTop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_46[9U] = VSimTop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_46[0xaU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_46[0xbU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_46[0xcU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_46[0xdU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_46[0xeU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_46[0xfU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xfU];
        __Vtemp_57[0U] = VSimTop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_57[1U] = VSimTop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_57[2U] = VSimTop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_57[3U] = VSimTop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_57[4U] = VSimTop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_57[5U] = VSimTop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_57[6U] = VSimTop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_57[7U] = VSimTop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_57[8U] = VSimTop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_57[9U] = VSimTop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_57[0xaU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_57[0xbU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_57[0xcU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_57[0xdU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_57[0xeU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_57[0xfU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xfU];
        __Vtemp_59[0U] = VSimTop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_59[1U] = VSimTop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_59[2U] = VSimTop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_59[3U] = VSimTop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_59[4U] = VSimTop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_59[5U] = VSimTop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_59[6U] = VSimTop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_59[7U] = VSimTop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_59[8U] = VSimTop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_59[9U] = VSimTop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_59[0xaU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_59[0xbU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_59[0xcU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_59[0xdU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_59[0xeU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_59[0xfU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    __Vtemp_23[5U] = 0U;
    __Vtemp_23[6U] = 0U;
    __Vtemp_23[7U] = 0U;
    bufp->fullIData(oldp+22,((((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                             ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6)
                                                               ? 0U
                                                               : 
                                                              ((0x23U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                                ? 1U
                                                                : 
                                                               ((0x63U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                                 ? 2U
                                                                 : 
                                                                ((0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                                  ? 4U
                                                                  : 
                                                                 ((1U 
                                                                   & ((~ 
                                                                       ((0x37U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
                                                                        | (0x17U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))) 
                                                                      | (0x67U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))))
                                                                   ? 0U
                                                                   : 3U))))), 5U)))
                                ? 0U : (__Vtemp_23[
                                        (((IData)(0x1fU) 
                                          + (0xffU 
                                             & VL_SHIFTL_III(8,8,32, 
                                                             ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6)
                                                               ? 0U
                                                               : 
                                                              ((0x23U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                                ? 1U
                                                                : 
                                                               ((0x63U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                                 ? 2U
                                                                 : 
                                                                ((0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                                  ? 4U
                                                                  : 
                                                                 ((1U 
                                                                   & ((~ 
                                                                       ((0x37U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
                                                                        | (0x17U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))) 
                                                                      | (0x67U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))))
                                                                   ? 0U
                                                                   : 3U))))), 5U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(8,8,32, 
                                                          ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6)
                                                            ? 0U
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                             ? 1U
                                                             : 
                                                            ((0x63U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                              ? 2U
                                                              : 
                                                             ((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                               ? 4U
                                                               : 
                                                              ((1U 
                                                                & ((~ 
                                                                    ((0x37U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
                                                                     | (0x17U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))) 
                                                                   | (0x67U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))))
                                                                ? 0U
                                                                : 3U))))), 5U))))) 
                              | (__Vtemp_23[(7U & (
                                                   VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6)
                                                                   ? 0U
                                                                   : 
                                                                  ((0x23U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                                    ? 1U
                                                                    : 
                                                                   ((0x63U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                                     ? 2U
                                                                     : 
                                                                    ((0x6fU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                                      ? 4U
                                                                      : 
                                                                     ((1U 
                                                                       & ((~ 
                                                                           ((0x37U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
                                                                            | (0x17U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))) 
                                                                          | (0x67U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))))
                                                                       ? 0U
                                                                       : 3U))))), 5U) 
                                                   >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                           ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6)
                                                             ? 0U
                                                             : 
                                                            ((0x23U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                              ? 1U
                                                              : 
                                                             ((0x63U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                               ? 2U
                                                               : 
                                                              ((0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                                ? 4U
                                                                : 
                                                               ((1U 
                                                                 & ((~ 
                                                                     ((0x37U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
                                                                      | (0x17U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))) 
                                                                    | (0x67U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))))
                                                                 ? 0U
                                                                 : 3U))))), 5U))))),32);
    bufp->fullCData(oldp+23,((0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                       >> 7U))),5);
    bufp->fullBit(oldp+24,(((0x13U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
                            | ((0x33U != (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
                               & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_8) 
                                  | ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_12)) 
                                     & (0x67U == (0x7fU 
                                                  & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))))))));
    bufp->fullCData(oldp+25,((0xfU & ((0x13U == (0x7fU 
                                                 & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                       ? ((0x846570U 
                                           | ((0xff000000U 
                                               & (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_0) 
                                                   << 0x1cU) 
                                                  | ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_0) 
                                                     << 0x18U))) 
                                              | (0x100000U 
                                                 & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                    >> 0xaU)))) 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(5,5,32, 
                                                              (7U 
                                                               & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                  >> 0xcU)), 2U)))
                                       : ((0x33U == 
                                           (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                           ? ((0x846570U 
                                               | ((0xff000000U 
                                                   & (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_0) 
                                                       << 0x1cU) 
                                                      | ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_0) 
                                                         << 0x18U))) 
                                                  | ((0x100000U 
                                                      & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                         >> 0xaU)) 
                                                     | (1U 
                                                        & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                           >> 0x1eU))))) 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(5,5,32, 
                                                                  (7U 
                                                                   & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                      >> 0xcU)), 2U)))
                                           : ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_8)
                                               ? 0U
                                               : (0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))))))),4);
    bufp->fullBit(oldp+26,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT__ctrl_sigs_mem_read));
    bufp->fullBit(oldp+27,(((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6)) 
                            & (0x23U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))));
    bufp->fullBit(oldp+28,(((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6) 
                            | ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_11)) 
                               & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_15) 
                                  | (0x17U == (0x7fU 
                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))))));
    bufp->fullBit(oldp+29,(((~ ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h832d9e96__0) 
                                | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_8))) 
                            & (0x63U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))));
    bufp->fullBit(oldp+30,(((~ ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6) 
                                | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_11))) 
                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h198d7daa__0))));
    bufp->fullBit(oldp+31,(((~ ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_he2fd0082__0) 
                                | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_12))) 
                            & (0x67U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))));
    bufp->fullBit(oldp+32,(((~ ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h5b8071d1__0) 
                                | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h198d7daa__0))) 
                            & (0x37U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))));
    bufp->fullBit(oldp+33,(((~ ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h5b8071d1__0) 
                                | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_15))) 
                            & (0x17U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))));
    bufp->fullCData(oldp+34,((0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)),7);
    bufp->fullCData(oldp+35,((7U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+36,((vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+37,(((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6)
                               ? 0U : ((0x23U == (0x7fU 
                                                  & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                        ? 1U : ((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                 ? 2U
                                                 : 
                                                ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                                  ? 4U
                                                  : 
                                                 ((1U 
                                                   & ((~ 
                                                       ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
                                                        | (0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))) 
                                                      | (0x67U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))))
                                                   ? 0U
                                                   : 3U)))))),3);
    bufp->fullIData(oldp+38,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_inst),32);
    __Vtemp_34[0U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                      + vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_34[1U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                      - vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_34[2U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                      & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_34[3U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                      | vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_34[4U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                      ^ vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_34[5U] = VL_LTS_III(32, vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a, vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_34[6U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                      < vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_34[7U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                      << (0x1fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b));
    __Vtemp_34[8U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                      >> (0x1fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b));
    __Vtemp_34[9U] = VL_SHIFTRS_III(32,32,5, vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a, 
                                    (0x1fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b));
    __Vtemp_34[0xaU] = 0U;
    __Vtemp_34[0xbU] = 0U;
    __Vtemp_34[0xcU] = 0U;
    __Vtemp_34[0xdU] = 0U;
    __Vtemp_34[0xeU] = 0U;
    __Vtemp_34[0xfU] = 0U;
    __Vtemp_35[0U] = (((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U)))
                        ? 0U : (__Vtemp_34[(((IData)(0x1fU) 
                                             + (0x1ffU 
                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U))) 
                                            >> 5U)] 
                                << ((IData)(0x20U) 
                                    - (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U))))) 
                      | (__Vtemp_34[(0xfU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U) 
                                             >> 5U))] 
                         >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U))));
    __Vtemp_35[1U] = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4;
    __Vtemp_35[2U] = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4)) 
                               << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm))));
    __Vtemp_35[3U] = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4)) 
                                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm))) 
                              >> 0x20U));
    bufp->fullIData(oldp+39,((((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                             (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_lui) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr) 
                                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump))), 5U)))
                                ? 0U : (__Vtemp_35[
                                        (((IData)(0x1fU) 
                                          + (0x7fU 
                                             & VL_SHIFTL_III(7,7,32, 
                                                             (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_lui) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr) 
                                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump))), 5U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(7,7,32, 
                                                          (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_lui) 
                                                            << 1U) 
                                                           | ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr) 
                                                              | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump))), 5U))))) 
                              | (__Vtemp_35[(3U & (
                                                   VL_SHIFTL_III(7,7,32, 
                                                                 (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_lui) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr) 
                                                                     | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump))), 5U) 
                                                   >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                           (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_lui) 
                                                             << 1U) 
                                                            | ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr) 
                                                               | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump))), 5U))))),32);
    bufp->fullIData(oldp+40,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_b_reg),32);
    bufp->fullCData(oldp+41,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rd),5);
    bufp->fullBit(oldp+42,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_mem_read));
    bufp->fullBit(oldp+43,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_mem_write));
    bufp->fullBit(oldp+44,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_reg_write));
    bufp->fullBit(oldp+45,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_mem_to_reg));
    bufp->fullBit(oldp+46,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_branch));
    bufp->fullBit(oldp+47,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump));
    bufp->fullBit(oldp+48,((((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_branch) 
                             & (((0x80U & ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__ltu)) 
                                           << 7U)) 
                                 | (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__ltu) 
                                     << 6U) | ((0x20U 
                                                & ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__lt)) 
                                                   << 5U)) 
                                               | (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__lt) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT___branch_taken_T_4) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT___branch_taken_T_4) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__eq)) 
                                                               << 1U)) 
                                                           | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT___branch_taken_T_4)))))))) 
                                >> (7U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_inst 
                                          >> 0xcU)))) 
                            | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump))));
    bufp->fullBit(oldp+49,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_valid));
    bufp->fullIData(oldp+50,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst),32);
    bufp->fullIData(oldp+51,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rs2_data),32);
    bufp->fullCData(oldp+52,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rd),5);
    bufp->fullBit(oldp+53,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_read));
    bufp->fullBit(oldp+54,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_reg_write));
    bufp->fullBit(oldp+55,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_to_reg));
    bufp->fullBit(oldp+56,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_branch));
    bufp->fullBit(oldp+57,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_jump));
    bufp->fullBit(oldp+58,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_branch_taken));
    bufp->fullBit(oldp+59,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_valid));
    bufp->fullBit(oldp+60,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard));
    bufp->fullIData(oldp+61,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc),32);
    bufp->fullIData(oldp+62,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4),32);
    bufp->fullIData(oldp+63,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs1_data),32);
    bufp->fullIData(oldp+64,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs2_data),32);
    bufp->fullIData(oldp+65,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm),32);
    bufp->fullBit(oldp+66,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_src));
    bufp->fullCData(oldp+67,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op),4);
    bufp->fullBit(oldp+68,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr));
    bufp->fullBit(oldp+69,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_lui));
    bufp->fullBit(oldp+70,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_auipc));
    bufp->fullCData(oldp+71,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___forward_io_forward_a),2);
    bufp->fullCData(oldp+72,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___forward_io_forward_b),2);
    bufp->fullIData(oldp+73,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result),32);
    bufp->fullIData(oldp+74,((((6U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT___pc_target_T)) 
                               | (4U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT___pc_target_T)))
                               ? (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_a 
                                  + vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm)
                               : (((2U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT___pc_target_T)) 
                                   | (1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT___pc_target_T)))
                                   ? (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm 
                                      + vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc)
                                   : vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4))),32);
    bufp->fullIData(oldp+75,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_a),32);
    bufp->fullIData(oldp+76,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a),32);
    bufp->fullIData(oldp+77,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b),32);
    __Vtemp_45[0U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                      + vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_45[1U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                      - vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_45[2U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                      & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_45[3U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                      | vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_45[4U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                      ^ vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_45[5U] = VL_LTS_III(32, vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a, vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_45[6U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                      < vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_45[7U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                      << (0x1fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b));
    __Vtemp_45[8U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                      >> (0x1fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b));
    __Vtemp_45[9U] = VL_SHIFTRS_III(32,32,5, vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a, 
                                    (0x1fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b));
    __Vtemp_45[0xaU] = 0U;
    __Vtemp_45[0xbU] = 0U;
    __Vtemp_45[0xcU] = 0U;
    __Vtemp_45[0xdU] = 0U;
    __Vtemp_45[0xeU] = 0U;
    __Vtemp_45[0xfU] = 0U;
    bufp->fullIData(oldp+78,((((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U)))
                                ? 0U : (__Vtemp_45[
                                        (((IData)(0x1fU) 
                                          + (0x1ffU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U))))) 
                              | (__Vtemp_45[(0xfU & 
                                             (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U) 
                                              >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U))))),32);
    bufp->fullCData(oldp+79,((7U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_inst 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+80,(((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_branch) 
                            & (((0x80U & ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__ltu)) 
                                          << 7U)) | 
                                (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__ltu) 
                                  << 6U) | ((0x20U 
                                             & ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__lt)) 
                                                << 5U)) 
                                            | (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__lt) 
                                                << 4U) 
                                               | (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT___branch_taken_T_4) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT___branch_taken_T_4) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__eq)) 
                                                            << 1U)) 
                                                        | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT___branch_taken_T_4)))))))) 
                               >> (7U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_inst 
                                         >> 0xcU))))));
    bufp->fullBit(oldp+81,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__eq));
    bufp->fullBit(oldp+82,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__lt));
    bufp->fullBit(oldp+83,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__ltu));
    bufp->fullCData(oldp+84,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard),2);
    bufp->fullIData(oldp+85,(((IData)(4U) + vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc)),32);
    VL_SHIFTR_WWI(512,512,9, __Vtemp_47, __Vtemp_46, 
                  (0x1e0U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                             << 3U)));
    bufp->fullIData(oldp+86,(((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___fetch_io_out_valid)
                               ? ((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state))
                                   ? ((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_2)
                                       ? __Vtemp_47[0U]
                                       : 0U) : ((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_5)
                                                 ? vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_data
                                                 : 0U))
                               : 0U)),32);
    bufp->fullCData(oldp+87,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs1),5);
    bufp->fullCData(oldp+88,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs2),5);
    bufp->fullCData(oldp+89,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd),5);
    bufp->fullBit(oldp+90,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_ctrl_reg_write));
    bufp->fullBit(oldp+91,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_valid));
    bufp->fullBit(oldp+92,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__load_use_hazard));
    bufp->fullBit(oldp+93,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush));
    __Vtemp_52[0U] = (((- (IData)((1U & (vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits 
                                         >> 7U)))) 
                       << 8U) | (0xffU & vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits));
    __Vtemp_52[1U] = (((- (IData)((1U & (vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits 
                                         >> 0xfU)))) 
                       << 0x10U) | (0xffffU & vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits));
    __Vtemp_52[2U] = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits)) 
                               << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits))));
    __Vtemp_52[3U] = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits)) 
                                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits))) 
                              >> 0x20U));
    __Vtemp_52[4U] = (0xffU & vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits);
    __Vtemp_52[5U] = (0xffffU & vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits);
    __Vtemp_52[6U] = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits)) 
                               << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits))));
    __Vtemp_52[7U] = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits)) 
                                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits))) 
                              >> 0x20U));
    bufp->fullIData(oldp+94,(((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_to_reg)
                               ? (((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, 
                                                         (7U 
                                                          & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                             >> 0xcU)), 5U)))
                                    ? 0U : (__Vtemp_52[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 (7U 
                                                                  & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                                     >> 0xcU)), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (7U 
                                                                    & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                                       >> 0xcU)), 5U))))) 
                                  | (__Vtemp_52[(7U 
                                                 & (VL_SHIFTL_III(8,8,32, 
                                                                  (7U 
                                                                   & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                                      >> 0xcU)), 5U) 
                                                    >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(8,8,32, 
                                                               (7U 
                                                                & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                                   >> 0xcU)), 5U))))
                               : vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result)),32);
    bufp->fullBit(oldp+95,(((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_ctrl_reg_write) 
                            & ((0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)) 
                               & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_valid)))));
    bufp->fullIData(oldp+96,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_0),32);
    bufp->fullIData(oldp+97,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_1),32);
    bufp->fullIData(oldp+98,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_2),32);
    bufp->fullIData(oldp+99,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_3),32);
    bufp->fullIData(oldp+100,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_4),32);
    bufp->fullIData(oldp+101,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_5),32);
    bufp->fullIData(oldp+102,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_6),32);
    bufp->fullIData(oldp+103,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_7),32);
    bufp->fullIData(oldp+104,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_8),32);
    bufp->fullIData(oldp+105,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_9),32);
    bufp->fullIData(oldp+106,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_10),32);
    bufp->fullIData(oldp+107,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_11),32);
    bufp->fullIData(oldp+108,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_12),32);
    bufp->fullIData(oldp+109,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_13),32);
    bufp->fullIData(oldp+110,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_14),32);
    bufp->fullIData(oldp+111,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_15),32);
    bufp->fullIData(oldp+112,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_16),32);
    bufp->fullIData(oldp+113,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_17),32);
    bufp->fullIData(oldp+114,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_18),32);
    bufp->fullIData(oldp+115,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_19),32);
    bufp->fullIData(oldp+116,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_20),32);
    bufp->fullIData(oldp+117,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_21),32);
    bufp->fullIData(oldp+118,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_22),32);
    bufp->fullIData(oldp+119,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_23),32);
    bufp->fullIData(oldp+120,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_24),32);
    bufp->fullIData(oldp+121,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_25),32);
    bufp->fullIData(oldp+122,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_26),32);
    bufp->fullIData(oldp+123,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_27),32);
    bufp->fullIData(oldp+124,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_28),32);
    bufp->fullIData(oldp+125,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_29),32);
    bufp->fullIData(oldp+126,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_30),32);
    bufp->fullIData(oldp+127,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_31),32);
    bufp->fullBit(oldp+128,(((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state))
                              ? ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write)) 
                                 & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_2))
                              : (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_5))));
    bufp->fullBit(oldp+129,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_mem_req_valid_0));
    bufp->fullIData(oldp+130,(vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_addr),32);
    bufp->fullIData(oldp+131,(((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit)
                                ? vlSelf->SimTop__DOT__soc__DOT___cpu_io_dmem_req_bits_data
                                : 0U)),32);
    bufp->fullCData(oldp+132,(((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit)
                                ? ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write)
                                    ? ((2U == (7U & 
                                               (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                >> 0xcU)))
                                        ? 0xfU : (IData)(vlSelf->__VdfgTmp_h90747646__0))
                                    : 0U) : 0U)),4);
    bufp->fullBit(oldp+133,(vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_wen));
    bufp->fullBit(oldp+134,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_mem_resp_ready_0));
    bufp->fullBit(oldp+135,(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_valid));
    bufp->fullIData(oldp+136,(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_data),32);
    bufp->fullBit(oldp+137,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_0));
    bufp->fullBit(oldp+138,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_1));
    bufp->fullBit(oldp+139,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_2));
    bufp->fullBit(oldp+140,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_3));
    bufp->fullBit(oldp+141,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_4));
    bufp->fullBit(oldp+142,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_5));
    bufp->fullBit(oldp+143,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_6));
    bufp->fullBit(oldp+144,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_7));
    bufp->fullBit(oldp+145,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_8));
    bufp->fullBit(oldp+146,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_9));
    bufp->fullBit(oldp+147,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_10));
    bufp->fullBit(oldp+148,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_11));
    bufp->fullBit(oldp+149,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_12));
    bufp->fullBit(oldp+150,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_13));
    bufp->fullBit(oldp+151,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_14));
    bufp->fullBit(oldp+152,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_15));
    bufp->fullBit(oldp+153,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_16));
    bufp->fullBit(oldp+154,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_17));
    bufp->fullBit(oldp+155,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_18));
    bufp->fullBit(oldp+156,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_19));
    bufp->fullBit(oldp+157,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_20));
    bufp->fullBit(oldp+158,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_21));
    bufp->fullBit(oldp+159,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_22));
    bufp->fullBit(oldp+160,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_23));
    bufp->fullBit(oldp+161,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_24));
    bufp->fullBit(oldp+162,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_25));
    bufp->fullBit(oldp+163,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_26));
    bufp->fullBit(oldp+164,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_27));
    bufp->fullBit(oldp+165,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_28));
    bufp->fullBit(oldp+166,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_29));
    bufp->fullBit(oldp+167,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_30));
    bufp->fullBit(oldp+168,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_31));
    bufp->fullBit(oldp+169,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_32));
    bufp->fullBit(oldp+170,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_33));
    bufp->fullBit(oldp+171,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_34));
    bufp->fullBit(oldp+172,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_35));
    bufp->fullBit(oldp+173,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_36));
    bufp->fullBit(oldp+174,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_37));
    bufp->fullBit(oldp+175,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_38));
    bufp->fullBit(oldp+176,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_39));
    bufp->fullBit(oldp+177,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_40));
    bufp->fullBit(oldp+178,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_41));
    bufp->fullBit(oldp+179,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_42));
    bufp->fullBit(oldp+180,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_43));
    bufp->fullBit(oldp+181,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_44));
    bufp->fullBit(oldp+182,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_45));
    bufp->fullBit(oldp+183,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_46));
    bufp->fullBit(oldp+184,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_47));
    bufp->fullBit(oldp+185,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_48));
    bufp->fullBit(oldp+186,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_49));
    bufp->fullBit(oldp+187,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_50));
    bufp->fullBit(oldp+188,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_51));
    bufp->fullBit(oldp+189,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_52));
    bufp->fullBit(oldp+190,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_53));
    bufp->fullBit(oldp+191,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_54));
    bufp->fullBit(oldp+192,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_55));
    bufp->fullBit(oldp+193,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_56));
    bufp->fullBit(oldp+194,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_57));
    bufp->fullBit(oldp+195,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_58));
    bufp->fullBit(oldp+196,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_59));
    bufp->fullBit(oldp+197,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_60));
    bufp->fullBit(oldp+198,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_61));
    bufp->fullBit(oldp+199,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_62));
    bufp->fullBit(oldp+200,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_63));
    bufp->fullBit(oldp+201,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_64));
    bufp->fullBit(oldp+202,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_65));
    bufp->fullBit(oldp+203,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_66));
    bufp->fullBit(oldp+204,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_67));
    bufp->fullBit(oldp+205,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_68));
    bufp->fullBit(oldp+206,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_69));
    bufp->fullBit(oldp+207,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_70));
    bufp->fullBit(oldp+208,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_71));
    bufp->fullBit(oldp+209,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_72));
    bufp->fullBit(oldp+210,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_73));
    bufp->fullBit(oldp+211,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_74));
    bufp->fullBit(oldp+212,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_75));
    bufp->fullBit(oldp+213,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_76));
    bufp->fullBit(oldp+214,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_77));
    bufp->fullBit(oldp+215,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_78));
    bufp->fullBit(oldp+216,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_79));
    bufp->fullBit(oldp+217,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_80));
    bufp->fullBit(oldp+218,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_81));
    bufp->fullBit(oldp+219,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_82));
    bufp->fullBit(oldp+220,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_83));
    bufp->fullBit(oldp+221,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_84));
    bufp->fullBit(oldp+222,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_85));
    bufp->fullBit(oldp+223,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_86));
    bufp->fullBit(oldp+224,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_87));
    bufp->fullBit(oldp+225,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_88));
    bufp->fullBit(oldp+226,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_89));
    bufp->fullBit(oldp+227,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_90));
    bufp->fullBit(oldp+228,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_91));
    bufp->fullBit(oldp+229,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_92));
    bufp->fullBit(oldp+230,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_93));
    bufp->fullBit(oldp+231,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_94));
    bufp->fullBit(oldp+232,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_95));
    bufp->fullBit(oldp+233,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_96));
    bufp->fullBit(oldp+234,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_97));
    bufp->fullBit(oldp+235,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_98));
    bufp->fullBit(oldp+236,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_99));
    bufp->fullBit(oldp+237,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_100));
    bufp->fullBit(oldp+238,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_101));
    bufp->fullBit(oldp+239,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_102));
    bufp->fullBit(oldp+240,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_103));
    bufp->fullBit(oldp+241,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_104));
    bufp->fullBit(oldp+242,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_105));
    bufp->fullBit(oldp+243,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_106));
    bufp->fullBit(oldp+244,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_107));
    bufp->fullBit(oldp+245,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_108));
    bufp->fullBit(oldp+246,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_109));
    bufp->fullBit(oldp+247,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_110));
    bufp->fullBit(oldp+248,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_111));
    bufp->fullBit(oldp+249,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_112));
    bufp->fullBit(oldp+250,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_113));
    bufp->fullBit(oldp+251,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_114));
    bufp->fullBit(oldp+252,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_115));
    bufp->fullBit(oldp+253,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_116));
    bufp->fullBit(oldp+254,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_117));
    bufp->fullBit(oldp+255,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_118));
    bufp->fullBit(oldp+256,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_119));
    bufp->fullBit(oldp+257,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_120));
    bufp->fullBit(oldp+258,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_121));
    bufp->fullBit(oldp+259,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_122));
    bufp->fullBit(oldp+260,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_123));
    bufp->fullBit(oldp+261,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_124));
    bufp->fullBit(oldp+262,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_125));
    bufp->fullBit(oldp+263,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_126));
    bufp->fullBit(oldp+264,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_127));
    bufp->fullCData(oldp+265,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state),2);
    bufp->fullBit(oldp+266,((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state))));
    bufp->fullBit(oldp+267,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit));
    if (vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_en_d0) {
        __Vtemp_53[0U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0U];
        __Vtemp_53[1U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][1U];
        __Vtemp_53[2U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][2U];
        __Vtemp_53[3U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][3U];
        __Vtemp_53[4U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][4U];
        __Vtemp_53[5U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][5U];
        __Vtemp_53[6U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][6U];
        __Vtemp_53[7U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][7U];
        __Vtemp_53[8U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][8U];
        __Vtemp_53[9U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][9U];
        __Vtemp_53[0xaU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xaU];
        __Vtemp_53[0xbU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xbU];
        __Vtemp_53[0xcU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xcU];
        __Vtemp_53[0xdU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xdU];
        __Vtemp_53[0xeU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xeU];
        __Vtemp_53[0xfU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xfU];
        __Vtemp_55[0U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0U];
        __Vtemp_55[1U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][1U];
        __Vtemp_55[2U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][2U];
        __Vtemp_55[3U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][3U];
        __Vtemp_55[4U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][4U];
        __Vtemp_55[5U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][5U];
        __Vtemp_55[6U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][6U];
        __Vtemp_55[7U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][7U];
        __Vtemp_55[8U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][8U];
        __Vtemp_55[9U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][9U];
        __Vtemp_55[0xaU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xaU];
        __Vtemp_55[0xbU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xbU];
        __Vtemp_55[0xcU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xcU];
        __Vtemp_55[0xdU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xdU];
        __Vtemp_55[0xeU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xeU];
        __Vtemp_55[0xfU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xfU];
    } else {
        __Vtemp_53[0U] = VSimTop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_53[1U] = VSimTop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_53[2U] = VSimTop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_53[3U] = VSimTop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_53[4U] = VSimTop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_53[5U] = VSimTop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_53[6U] = VSimTop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_53[7U] = VSimTop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_53[8U] = VSimTop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_53[9U] = VSimTop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_53[0xaU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_53[0xbU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_53[0xcU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_53[0xdU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_53[0xeU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_53[0xfU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xfU];
        __Vtemp_55[0U] = VSimTop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_55[1U] = VSimTop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_55[2U] = VSimTop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_55[3U] = VSimTop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_55[4U] = VSimTop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_55[5U] = VSimTop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_55[6U] = VSimTop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_55[7U] = VSimTop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_55[8U] = VSimTop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_55[9U] = VSimTop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_55[0xaU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_55[0xbU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_55[0xcU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_55[0xdU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_55[0xeU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_55[0xfU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_54, __Vtemp_53, 
                  (0x1e0U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result 
                             << 3U)));
    bufp->fullWData(oldp+268,(__Vtemp_54),512);
    bufp->fullCData(oldp+284,((0x7fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result 
                                        >> 6U))),7);
    bufp->fullBit(oldp+285,(((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT____Vcellinp__tagArray_ext__R0_en) 
                             & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit))));
    bufp->fullWData(oldp+286,(__Vtemp_55),512);
    bufp->fullBit(oldp+302,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_6));
    __Vtemp_56[0U] = vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_data;
    __Vtemp_56[1U] = 0U;
    __Vtemp_56[2U] = 0U;
    __Vtemp_56[3U] = 0U;
    __Vtemp_56[4U] = 0U;
    __Vtemp_56[5U] = 0U;
    __Vtemp_56[6U] = 0U;
    __Vtemp_56[7U] = 0U;
    __Vtemp_56[8U] = 0U;
    __Vtemp_56[9U] = 0U;
    __Vtemp_56[0xaU] = 0U;
    __Vtemp_56[0xbU] = 0U;
    __Vtemp_56[0xcU] = 0U;
    __Vtemp_56[0xdU] = 0U;
    __Vtemp_56[0xeU] = 0U;
    __Vtemp_56[0xfU] = 0U;
    bufp->fullWData(oldp+303,(__Vtemp_56),512);
    bufp->fullWData(oldp+319,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[0]),512);
    bufp->fullWData(oldp+335,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[1]),512);
    bufp->fullWData(oldp+351,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[2]),512);
    bufp->fullWData(oldp+367,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[3]),512);
    bufp->fullWData(oldp+383,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[4]),512);
    bufp->fullWData(oldp+399,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[5]),512);
    bufp->fullWData(oldp+415,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[6]),512);
    bufp->fullWData(oldp+431,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[7]),512);
    bufp->fullWData(oldp+447,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[8]),512);
    bufp->fullWData(oldp+463,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[9]),512);
    bufp->fullWData(oldp+479,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[10]),512);
    bufp->fullWData(oldp+495,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[11]),512);
    bufp->fullWData(oldp+511,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[12]),512);
    bufp->fullWData(oldp+527,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[13]),512);
    bufp->fullWData(oldp+543,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[14]),512);
    bufp->fullWData(oldp+559,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[15]),512);
    bufp->fullWData(oldp+575,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[16]),512);
    bufp->fullWData(oldp+591,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[17]),512);
    bufp->fullWData(oldp+607,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[18]),512);
    bufp->fullWData(oldp+623,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[19]),512);
    bufp->fullWData(oldp+639,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[20]),512);
    bufp->fullWData(oldp+655,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[21]),512);
    bufp->fullWData(oldp+671,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[22]),512);
    bufp->fullWData(oldp+687,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[23]),512);
    bufp->fullWData(oldp+703,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[24]),512);
    bufp->fullWData(oldp+719,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[25]),512);
    bufp->fullWData(oldp+735,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[26]),512);
    bufp->fullWData(oldp+751,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[27]),512);
    bufp->fullWData(oldp+767,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[28]),512);
    bufp->fullWData(oldp+783,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[29]),512);
    bufp->fullWData(oldp+799,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[30]),512);
    bufp->fullWData(oldp+815,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[31]),512);
    bufp->fullWData(oldp+831,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[32]),512);
    bufp->fullWData(oldp+847,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[33]),512);
    bufp->fullWData(oldp+863,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[34]),512);
    bufp->fullWData(oldp+879,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[35]),512);
    bufp->fullWData(oldp+895,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[36]),512);
    bufp->fullWData(oldp+911,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[37]),512);
    bufp->fullWData(oldp+927,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[38]),512);
    bufp->fullWData(oldp+943,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[39]),512);
    bufp->fullWData(oldp+959,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[40]),512);
    bufp->fullWData(oldp+975,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[41]),512);
    bufp->fullWData(oldp+991,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[42]),512);
    bufp->fullWData(oldp+1007,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[43]),512);
    bufp->fullWData(oldp+1023,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[44]),512);
    bufp->fullWData(oldp+1039,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[45]),512);
    bufp->fullWData(oldp+1055,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[46]),512);
    bufp->fullWData(oldp+1071,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[47]),512);
    bufp->fullWData(oldp+1087,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[48]),512);
    bufp->fullWData(oldp+1103,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[49]),512);
    bufp->fullWData(oldp+1119,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[50]),512);
    bufp->fullWData(oldp+1135,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[51]),512);
    bufp->fullWData(oldp+1151,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[52]),512);
    bufp->fullWData(oldp+1167,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[53]),512);
    bufp->fullWData(oldp+1183,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[54]),512);
    bufp->fullWData(oldp+1199,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[55]),512);
    bufp->fullWData(oldp+1215,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[56]),512);
    bufp->fullWData(oldp+1231,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[57]),512);
    bufp->fullWData(oldp+1247,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[58]),512);
    bufp->fullWData(oldp+1263,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[59]),512);
    bufp->fullWData(oldp+1279,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[60]),512);
    bufp->fullWData(oldp+1295,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[61]),512);
    bufp->fullWData(oldp+1311,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[62]),512);
    bufp->fullWData(oldp+1327,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[63]),512);
    bufp->fullWData(oldp+1343,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[64]),512);
    bufp->fullWData(oldp+1359,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[65]),512);
    bufp->fullWData(oldp+1375,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[66]),512);
    bufp->fullWData(oldp+1391,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[67]),512);
    bufp->fullWData(oldp+1407,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[68]),512);
    bufp->fullWData(oldp+1423,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[69]),512);
    bufp->fullWData(oldp+1439,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[70]),512);
    bufp->fullWData(oldp+1455,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[71]),512);
    bufp->fullWData(oldp+1471,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[72]),512);
    bufp->fullWData(oldp+1487,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[73]),512);
    bufp->fullWData(oldp+1503,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[74]),512);
    bufp->fullWData(oldp+1519,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[75]),512);
    bufp->fullWData(oldp+1535,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[76]),512);
    bufp->fullWData(oldp+1551,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[77]),512);
    bufp->fullWData(oldp+1567,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[78]),512);
    bufp->fullWData(oldp+1583,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[79]),512);
    bufp->fullWData(oldp+1599,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[80]),512);
    bufp->fullWData(oldp+1615,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[81]),512);
    bufp->fullWData(oldp+1631,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[82]),512);
    bufp->fullWData(oldp+1647,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[83]),512);
    bufp->fullWData(oldp+1663,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[84]),512);
    bufp->fullWData(oldp+1679,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[85]),512);
    bufp->fullWData(oldp+1695,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[86]),512);
    bufp->fullWData(oldp+1711,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[87]),512);
    bufp->fullWData(oldp+1727,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[88]),512);
    bufp->fullWData(oldp+1743,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[89]),512);
    bufp->fullWData(oldp+1759,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[90]),512);
    bufp->fullWData(oldp+1775,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[91]),512);
    bufp->fullWData(oldp+1791,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[92]),512);
    bufp->fullWData(oldp+1807,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[93]),512);
    bufp->fullWData(oldp+1823,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[94]),512);
    bufp->fullWData(oldp+1839,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[95]),512);
    bufp->fullWData(oldp+1855,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[96]),512);
    bufp->fullWData(oldp+1871,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[97]),512);
    bufp->fullWData(oldp+1887,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[98]),512);
    bufp->fullWData(oldp+1903,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[99]),512);
    bufp->fullWData(oldp+1919,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[100]),512);
    bufp->fullWData(oldp+1935,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[101]),512);
    bufp->fullWData(oldp+1951,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[102]),512);
    bufp->fullWData(oldp+1967,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[103]),512);
    bufp->fullWData(oldp+1983,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[104]),512);
    bufp->fullWData(oldp+1999,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[105]),512);
    bufp->fullWData(oldp+2015,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[106]),512);
    bufp->fullWData(oldp+2031,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[107]),512);
    bufp->fullWData(oldp+2047,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[108]),512);
    bufp->fullWData(oldp+2063,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[109]),512);
    bufp->fullWData(oldp+2079,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[110]),512);
    bufp->fullWData(oldp+2095,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[111]),512);
    bufp->fullWData(oldp+2111,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[112]),512);
    bufp->fullWData(oldp+2127,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[113]),512);
    bufp->fullWData(oldp+2143,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[114]),512);
    bufp->fullWData(oldp+2159,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[115]),512);
    bufp->fullWData(oldp+2175,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[116]),512);
    bufp->fullWData(oldp+2191,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[117]),512);
    bufp->fullWData(oldp+2207,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[118]),512);
    bufp->fullWData(oldp+2223,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[119]),512);
    bufp->fullWData(oldp+2239,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[120]),512);
    bufp->fullWData(oldp+2255,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[121]),512);
    bufp->fullWData(oldp+2271,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[122]),512);
    bufp->fullWData(oldp+2287,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[123]),512);
    bufp->fullWData(oldp+2303,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[124]),512);
    bufp->fullWData(oldp+2319,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[125]),512);
    bufp->fullWData(oldp+2335,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[126]),512);
    bufp->fullWData(oldp+2351,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[127]),512);
    bufp->fullBit(oldp+2367,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT____Vcellinp__tagArray_ext__R0_en));
    bufp->fullIData(oldp+2368,(((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT___R0_en_d0)
                                 ? vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory
                                [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT___R0_addr_d0]
                                 : 0U)),19);
    bufp->fullIData(oldp+2369,((vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result 
                                >> 0xdU)),19);
    bufp->fullIData(oldp+2370,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[0]),19);
    bufp->fullIData(oldp+2371,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[1]),19);
    bufp->fullIData(oldp+2372,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[2]),19);
    bufp->fullIData(oldp+2373,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[3]),19);
    bufp->fullIData(oldp+2374,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[4]),19);
    bufp->fullIData(oldp+2375,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[5]),19);
    bufp->fullIData(oldp+2376,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[6]),19);
    bufp->fullIData(oldp+2377,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[7]),19);
    bufp->fullIData(oldp+2378,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[8]),19);
    bufp->fullIData(oldp+2379,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[9]),19);
    bufp->fullIData(oldp+2380,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[10]),19);
    bufp->fullIData(oldp+2381,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[11]),19);
    bufp->fullIData(oldp+2382,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[12]),19);
    bufp->fullIData(oldp+2383,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[13]),19);
    bufp->fullIData(oldp+2384,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[14]),19);
    bufp->fullIData(oldp+2385,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[15]),19);
    bufp->fullIData(oldp+2386,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[16]),19);
    bufp->fullIData(oldp+2387,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[17]),19);
    bufp->fullIData(oldp+2388,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[18]),19);
    bufp->fullIData(oldp+2389,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[19]),19);
    bufp->fullIData(oldp+2390,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[20]),19);
    bufp->fullIData(oldp+2391,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[21]),19);
    bufp->fullIData(oldp+2392,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[22]),19);
    bufp->fullIData(oldp+2393,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[23]),19);
    bufp->fullIData(oldp+2394,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[24]),19);
    bufp->fullIData(oldp+2395,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[25]),19);
    bufp->fullIData(oldp+2396,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[26]),19);
    bufp->fullIData(oldp+2397,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[27]),19);
    bufp->fullIData(oldp+2398,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[28]),19);
    bufp->fullIData(oldp+2399,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[29]),19);
    bufp->fullIData(oldp+2400,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[30]),19);
    bufp->fullIData(oldp+2401,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[31]),19);
    bufp->fullIData(oldp+2402,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[32]),19);
    bufp->fullIData(oldp+2403,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[33]),19);
    bufp->fullIData(oldp+2404,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[34]),19);
    bufp->fullIData(oldp+2405,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[35]),19);
    bufp->fullIData(oldp+2406,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[36]),19);
    bufp->fullIData(oldp+2407,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[37]),19);
    bufp->fullIData(oldp+2408,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[38]),19);
    bufp->fullIData(oldp+2409,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[39]),19);
    bufp->fullIData(oldp+2410,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[40]),19);
    bufp->fullIData(oldp+2411,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[41]),19);
    bufp->fullIData(oldp+2412,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[42]),19);
    bufp->fullIData(oldp+2413,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[43]),19);
    bufp->fullIData(oldp+2414,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[44]),19);
    bufp->fullIData(oldp+2415,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[45]),19);
    bufp->fullIData(oldp+2416,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[46]),19);
    bufp->fullIData(oldp+2417,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[47]),19);
    bufp->fullIData(oldp+2418,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[48]),19);
    bufp->fullIData(oldp+2419,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[49]),19);
    bufp->fullIData(oldp+2420,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[50]),19);
    bufp->fullIData(oldp+2421,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[51]),19);
    bufp->fullIData(oldp+2422,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[52]),19);
    bufp->fullIData(oldp+2423,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[53]),19);
    bufp->fullIData(oldp+2424,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[54]),19);
    bufp->fullIData(oldp+2425,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[55]),19);
    bufp->fullIData(oldp+2426,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[56]),19);
    bufp->fullIData(oldp+2427,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[57]),19);
    bufp->fullIData(oldp+2428,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[58]),19);
    bufp->fullIData(oldp+2429,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[59]),19);
    bufp->fullIData(oldp+2430,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[60]),19);
    bufp->fullIData(oldp+2431,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[61]),19);
    bufp->fullIData(oldp+2432,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[62]),19);
    bufp->fullIData(oldp+2433,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[63]),19);
    bufp->fullIData(oldp+2434,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[64]),19);
    bufp->fullIData(oldp+2435,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[65]),19);
    bufp->fullIData(oldp+2436,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[66]),19);
    bufp->fullIData(oldp+2437,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[67]),19);
    bufp->fullIData(oldp+2438,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[68]),19);
    bufp->fullIData(oldp+2439,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[69]),19);
    bufp->fullIData(oldp+2440,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[70]),19);
    bufp->fullIData(oldp+2441,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[71]),19);
    bufp->fullIData(oldp+2442,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[72]),19);
    bufp->fullIData(oldp+2443,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[73]),19);
    bufp->fullIData(oldp+2444,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[74]),19);
    bufp->fullIData(oldp+2445,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[75]),19);
    bufp->fullIData(oldp+2446,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[76]),19);
    bufp->fullIData(oldp+2447,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[77]),19);
    bufp->fullIData(oldp+2448,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[78]),19);
    bufp->fullIData(oldp+2449,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[79]),19);
    bufp->fullIData(oldp+2450,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[80]),19);
    bufp->fullIData(oldp+2451,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[81]),19);
    bufp->fullIData(oldp+2452,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[82]),19);
    bufp->fullIData(oldp+2453,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[83]),19);
    bufp->fullIData(oldp+2454,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[84]),19);
    bufp->fullIData(oldp+2455,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[85]),19);
    bufp->fullIData(oldp+2456,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[86]),19);
    bufp->fullIData(oldp+2457,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[87]),19);
    bufp->fullIData(oldp+2458,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[88]),19);
    bufp->fullIData(oldp+2459,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[89]),19);
    bufp->fullIData(oldp+2460,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[90]),19);
    bufp->fullIData(oldp+2461,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[91]),19);
    bufp->fullIData(oldp+2462,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[92]),19);
    bufp->fullIData(oldp+2463,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[93]),19);
    bufp->fullIData(oldp+2464,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[94]),19);
    bufp->fullIData(oldp+2465,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[95]),19);
    bufp->fullIData(oldp+2466,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[96]),19);
    bufp->fullIData(oldp+2467,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[97]),19);
    bufp->fullIData(oldp+2468,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[98]),19);
    bufp->fullIData(oldp+2469,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[99]),19);
    bufp->fullIData(oldp+2470,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[100]),19);
    bufp->fullIData(oldp+2471,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[101]),19);
    bufp->fullIData(oldp+2472,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[102]),19);
    bufp->fullIData(oldp+2473,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[103]),19);
    bufp->fullIData(oldp+2474,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[104]),19);
    bufp->fullIData(oldp+2475,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[105]),19);
    bufp->fullIData(oldp+2476,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[106]),19);
    bufp->fullIData(oldp+2477,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[107]),19);
    bufp->fullIData(oldp+2478,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[108]),19);
    bufp->fullIData(oldp+2479,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[109]),19);
    bufp->fullIData(oldp+2480,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[110]),19);
    bufp->fullIData(oldp+2481,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[111]),19);
    bufp->fullIData(oldp+2482,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[112]),19);
    bufp->fullIData(oldp+2483,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[113]),19);
    bufp->fullIData(oldp+2484,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[114]),19);
    bufp->fullIData(oldp+2485,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[115]),19);
    bufp->fullIData(oldp+2486,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[116]),19);
    bufp->fullIData(oldp+2487,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[117]),19);
    bufp->fullIData(oldp+2488,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[118]),19);
    bufp->fullIData(oldp+2489,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[119]),19);
    bufp->fullIData(oldp+2490,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[120]),19);
    bufp->fullIData(oldp+2491,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[121]),19);
    bufp->fullIData(oldp+2492,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[122]),19);
    bufp->fullIData(oldp+2493,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[123]),19);
    bufp->fullIData(oldp+2494,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[124]),19);
    bufp->fullIData(oldp+2495,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[125]),19);
    bufp->fullIData(oldp+2496,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[126]),19);
    bufp->fullIData(oldp+2497,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[127]),19);
    bufp->fullSData(oldp+2498,((0x3fffU & (vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_addr 
                                           >> 2U))),14);
    bufp->fullBit(oldp+2499,(((~ (IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_wen)) 
                              & (IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN))));
    bufp->fullIData(oldp+2500,(((IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R0_en_d0)
                                 ? vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory
                                [vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R0_addr_d0]
                                 : 0U)),32);
    bufp->fullBit(oldp+2501,(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN_0));
    bufp->fullIData(oldp+2502,(((IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R1_en_d0)
                                 ? vlSelf->__VdfgTmp_h3ccf2380__0
                                 : 0U)),32);
    bufp->fullIData(oldp+2503,(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT____Vcellinp__mem_ext__W0_data),32);
    bufp->fullBit(oldp+2504,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_mem_req_valid_0));
    bufp->fullIData(oldp+2505,(vlSelf->SimTop__DOT__soc__DOT___icache_io_mem_req_bits_addr),32);
    bufp->fullBit(oldp+2506,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_mem_resp_ready_0));
    bufp->fullBit(oldp+2507,(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_valid));
    bufp->fullIData(oldp+2508,(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_data),32);
    bufp->fullBit(oldp+2509,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_0));
    bufp->fullBit(oldp+2510,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_1));
    bufp->fullBit(oldp+2511,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_2));
    bufp->fullBit(oldp+2512,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_3));
    bufp->fullBit(oldp+2513,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_4));
    bufp->fullBit(oldp+2514,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_5));
    bufp->fullBit(oldp+2515,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_6));
    bufp->fullBit(oldp+2516,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_7));
    bufp->fullBit(oldp+2517,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_8));
    bufp->fullBit(oldp+2518,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_9));
    bufp->fullBit(oldp+2519,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_10));
    bufp->fullBit(oldp+2520,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_11));
    bufp->fullBit(oldp+2521,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_12));
    bufp->fullBit(oldp+2522,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_13));
    bufp->fullBit(oldp+2523,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_14));
    bufp->fullBit(oldp+2524,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_15));
    bufp->fullBit(oldp+2525,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_16));
    bufp->fullBit(oldp+2526,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_17));
    bufp->fullBit(oldp+2527,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_18));
    bufp->fullBit(oldp+2528,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_19));
    bufp->fullBit(oldp+2529,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_20));
    bufp->fullBit(oldp+2530,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_21));
    bufp->fullBit(oldp+2531,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_22));
    bufp->fullBit(oldp+2532,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_23));
    bufp->fullBit(oldp+2533,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_24));
    bufp->fullBit(oldp+2534,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_25));
    bufp->fullBit(oldp+2535,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_26));
    bufp->fullBit(oldp+2536,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_27));
    bufp->fullBit(oldp+2537,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_28));
    bufp->fullBit(oldp+2538,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_29));
    bufp->fullBit(oldp+2539,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_30));
    bufp->fullBit(oldp+2540,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_31));
    bufp->fullBit(oldp+2541,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_32));
    bufp->fullBit(oldp+2542,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_33));
    bufp->fullBit(oldp+2543,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_34));
    bufp->fullBit(oldp+2544,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_35));
    bufp->fullBit(oldp+2545,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_36));
    bufp->fullBit(oldp+2546,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_37));
    bufp->fullBit(oldp+2547,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_38));
    bufp->fullBit(oldp+2548,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_39));
    bufp->fullBit(oldp+2549,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_40));
    bufp->fullBit(oldp+2550,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_41));
    bufp->fullBit(oldp+2551,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_42));
    bufp->fullBit(oldp+2552,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_43));
    bufp->fullBit(oldp+2553,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_44));
    bufp->fullBit(oldp+2554,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_45));
    bufp->fullBit(oldp+2555,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_46));
    bufp->fullBit(oldp+2556,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_47));
    bufp->fullBit(oldp+2557,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_48));
    bufp->fullBit(oldp+2558,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_49));
    bufp->fullBit(oldp+2559,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_50));
    bufp->fullBit(oldp+2560,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_51));
    bufp->fullBit(oldp+2561,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_52));
    bufp->fullBit(oldp+2562,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_53));
    bufp->fullBit(oldp+2563,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_54));
    bufp->fullBit(oldp+2564,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_55));
    bufp->fullBit(oldp+2565,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_56));
    bufp->fullBit(oldp+2566,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_57));
    bufp->fullBit(oldp+2567,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_58));
    bufp->fullBit(oldp+2568,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_59));
    bufp->fullBit(oldp+2569,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_60));
    bufp->fullBit(oldp+2570,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_61));
    bufp->fullBit(oldp+2571,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_62));
    bufp->fullBit(oldp+2572,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_63));
    bufp->fullBit(oldp+2573,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_64));
    bufp->fullBit(oldp+2574,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_65));
    bufp->fullBit(oldp+2575,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_66));
    bufp->fullBit(oldp+2576,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_67));
    bufp->fullBit(oldp+2577,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_68));
    bufp->fullBit(oldp+2578,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_69));
    bufp->fullBit(oldp+2579,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_70));
    bufp->fullBit(oldp+2580,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_71));
    bufp->fullBit(oldp+2581,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_72));
    bufp->fullBit(oldp+2582,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_73));
    bufp->fullBit(oldp+2583,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_74));
    bufp->fullBit(oldp+2584,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_75));
    bufp->fullBit(oldp+2585,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_76));
    bufp->fullBit(oldp+2586,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_77));
    bufp->fullBit(oldp+2587,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_78));
    bufp->fullBit(oldp+2588,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_79));
    bufp->fullBit(oldp+2589,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_80));
    bufp->fullBit(oldp+2590,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_81));
    bufp->fullBit(oldp+2591,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_82));
    bufp->fullBit(oldp+2592,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_83));
    bufp->fullBit(oldp+2593,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_84));
    bufp->fullBit(oldp+2594,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_85));
    bufp->fullBit(oldp+2595,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_86));
    bufp->fullBit(oldp+2596,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_87));
    bufp->fullBit(oldp+2597,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_88));
    bufp->fullBit(oldp+2598,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_89));
    bufp->fullBit(oldp+2599,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_90));
    bufp->fullBit(oldp+2600,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_91));
    bufp->fullBit(oldp+2601,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_92));
    bufp->fullBit(oldp+2602,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_93));
    bufp->fullBit(oldp+2603,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_94));
    bufp->fullBit(oldp+2604,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_95));
    bufp->fullBit(oldp+2605,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_96));
    bufp->fullBit(oldp+2606,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_97));
    bufp->fullBit(oldp+2607,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_98));
    bufp->fullBit(oldp+2608,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_99));
    bufp->fullBit(oldp+2609,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_100));
    bufp->fullBit(oldp+2610,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_101));
    bufp->fullBit(oldp+2611,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_102));
    bufp->fullBit(oldp+2612,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_103));
    bufp->fullBit(oldp+2613,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_104));
    bufp->fullBit(oldp+2614,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_105));
    bufp->fullBit(oldp+2615,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_106));
    bufp->fullBit(oldp+2616,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_107));
    bufp->fullBit(oldp+2617,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_108));
    bufp->fullBit(oldp+2618,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_109));
    bufp->fullBit(oldp+2619,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_110));
    bufp->fullBit(oldp+2620,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_111));
    bufp->fullBit(oldp+2621,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_112));
    bufp->fullBit(oldp+2622,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_113));
    bufp->fullBit(oldp+2623,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_114));
    bufp->fullBit(oldp+2624,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_115));
    bufp->fullBit(oldp+2625,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_116));
    bufp->fullBit(oldp+2626,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_117));
    bufp->fullBit(oldp+2627,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_118));
    bufp->fullBit(oldp+2628,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_119));
    bufp->fullBit(oldp+2629,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_120));
    bufp->fullBit(oldp+2630,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_121));
    bufp->fullBit(oldp+2631,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_122));
    bufp->fullBit(oldp+2632,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_123));
    bufp->fullBit(oldp+2633,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_124));
    bufp->fullBit(oldp+2634,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_125));
    bufp->fullBit(oldp+2635,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_126));
    bufp->fullBit(oldp+2636,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_127));
    bufp->fullCData(oldp+2637,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state),2);
    bufp->fullBit(oldp+2638,((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state))));
    bufp->fullBit(oldp+2639,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__hit));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_58, __Vtemp_57, 
                  (0x1e0U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                             << 3U)));
    bufp->fullWData(oldp+2640,(__Vtemp_58),512);
    bufp->fullCData(oldp+2656,((0x7fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                                         >> 6U))),7);
    bufp->fullBit(oldp+2657,(((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                              & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__hit))));
    bufp->fullWData(oldp+2658,(__Vtemp_59),512);
    bufp->fullBit(oldp+2674,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_6));
    __Vtemp_60[0U] = vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_data;
    __Vtemp_60[1U] = 0U;
    __Vtemp_60[2U] = 0U;
    __Vtemp_60[3U] = 0U;
    __Vtemp_60[4U] = 0U;
    __Vtemp_60[5U] = 0U;
    __Vtemp_60[6U] = 0U;
    __Vtemp_60[7U] = 0U;
    __Vtemp_60[8U] = 0U;
    __Vtemp_60[9U] = 0U;
    __Vtemp_60[0xaU] = 0U;
    __Vtemp_60[0xbU] = 0U;
    __Vtemp_60[0xcU] = 0U;
    __Vtemp_60[0xdU] = 0U;
    __Vtemp_60[0xeU] = 0U;
    __Vtemp_60[0xfU] = 0U;
    bufp->fullWData(oldp+2675,(__Vtemp_60),512);
    bufp->fullWData(oldp+2691,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[0]),512);
    bufp->fullWData(oldp+2707,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[1]),512);
    bufp->fullWData(oldp+2723,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[2]),512);
    bufp->fullWData(oldp+2739,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[3]),512);
    bufp->fullWData(oldp+2755,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[4]),512);
    bufp->fullWData(oldp+2771,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[5]),512);
    bufp->fullWData(oldp+2787,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[6]),512);
    bufp->fullWData(oldp+2803,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[7]),512);
    bufp->fullWData(oldp+2819,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[8]),512);
    bufp->fullWData(oldp+2835,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[9]),512);
    bufp->fullWData(oldp+2851,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[10]),512);
    bufp->fullWData(oldp+2867,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[11]),512);
    bufp->fullWData(oldp+2883,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[12]),512);
    bufp->fullWData(oldp+2899,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[13]),512);
    bufp->fullWData(oldp+2915,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[14]),512);
    bufp->fullWData(oldp+2931,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[15]),512);
    bufp->fullWData(oldp+2947,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[16]),512);
    bufp->fullWData(oldp+2963,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[17]),512);
    bufp->fullWData(oldp+2979,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[18]),512);
    bufp->fullWData(oldp+2995,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[19]),512);
    bufp->fullWData(oldp+3011,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[20]),512);
    bufp->fullWData(oldp+3027,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[21]),512);
    bufp->fullWData(oldp+3043,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[22]),512);
    bufp->fullWData(oldp+3059,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[23]),512);
    bufp->fullWData(oldp+3075,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[24]),512);
    bufp->fullWData(oldp+3091,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[25]),512);
    bufp->fullWData(oldp+3107,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[26]),512);
    bufp->fullWData(oldp+3123,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[27]),512);
    bufp->fullWData(oldp+3139,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[28]),512);
    bufp->fullWData(oldp+3155,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[29]),512);
    bufp->fullWData(oldp+3171,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[30]),512);
    bufp->fullWData(oldp+3187,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[31]),512);
    bufp->fullWData(oldp+3203,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[32]),512);
    bufp->fullWData(oldp+3219,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[33]),512);
    bufp->fullWData(oldp+3235,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[34]),512);
    bufp->fullWData(oldp+3251,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[35]),512);
    bufp->fullWData(oldp+3267,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[36]),512);
    bufp->fullWData(oldp+3283,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[37]),512);
    bufp->fullWData(oldp+3299,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[38]),512);
    bufp->fullWData(oldp+3315,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[39]),512);
    bufp->fullWData(oldp+3331,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[40]),512);
    bufp->fullWData(oldp+3347,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[41]),512);
    bufp->fullWData(oldp+3363,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[42]),512);
    bufp->fullWData(oldp+3379,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[43]),512);
    bufp->fullWData(oldp+3395,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[44]),512);
    bufp->fullWData(oldp+3411,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[45]),512);
    bufp->fullWData(oldp+3427,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[46]),512);
    bufp->fullWData(oldp+3443,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[47]),512);
    bufp->fullWData(oldp+3459,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[48]),512);
    bufp->fullWData(oldp+3475,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[49]),512);
    bufp->fullWData(oldp+3491,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[50]),512);
    bufp->fullWData(oldp+3507,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[51]),512);
    bufp->fullWData(oldp+3523,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[52]),512);
    bufp->fullWData(oldp+3539,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[53]),512);
    bufp->fullWData(oldp+3555,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[54]),512);
    bufp->fullWData(oldp+3571,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[55]),512);
    bufp->fullWData(oldp+3587,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[56]),512);
    bufp->fullWData(oldp+3603,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[57]),512);
    bufp->fullWData(oldp+3619,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[58]),512);
    bufp->fullWData(oldp+3635,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[59]),512);
    bufp->fullWData(oldp+3651,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[60]),512);
    bufp->fullWData(oldp+3667,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[61]),512);
    bufp->fullWData(oldp+3683,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[62]),512);
    bufp->fullWData(oldp+3699,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[63]),512);
    bufp->fullWData(oldp+3715,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[64]),512);
    bufp->fullWData(oldp+3731,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[65]),512);
    bufp->fullWData(oldp+3747,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[66]),512);
    bufp->fullWData(oldp+3763,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[67]),512);
    bufp->fullWData(oldp+3779,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[68]),512);
    bufp->fullWData(oldp+3795,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[69]),512);
    bufp->fullWData(oldp+3811,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[70]),512);
    bufp->fullWData(oldp+3827,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[71]),512);
    bufp->fullWData(oldp+3843,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[72]),512);
    bufp->fullWData(oldp+3859,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[73]),512);
    bufp->fullWData(oldp+3875,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[74]),512);
    bufp->fullWData(oldp+3891,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[75]),512);
    bufp->fullWData(oldp+3907,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[76]),512);
    bufp->fullWData(oldp+3923,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[77]),512);
    bufp->fullWData(oldp+3939,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[78]),512);
    bufp->fullWData(oldp+3955,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[79]),512);
    bufp->fullWData(oldp+3971,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[80]),512);
    bufp->fullWData(oldp+3987,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[81]),512);
    bufp->fullWData(oldp+4003,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[82]),512);
    bufp->fullWData(oldp+4019,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[83]),512);
    bufp->fullWData(oldp+4035,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[84]),512);
    bufp->fullWData(oldp+4051,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[85]),512);
    bufp->fullWData(oldp+4067,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[86]),512);
    bufp->fullWData(oldp+4083,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[87]),512);
    bufp->fullWData(oldp+4099,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[88]),512);
    bufp->fullWData(oldp+4115,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[89]),512);
    bufp->fullWData(oldp+4131,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[90]),512);
    bufp->fullWData(oldp+4147,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[91]),512);
    bufp->fullWData(oldp+4163,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[92]),512);
    bufp->fullWData(oldp+4179,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[93]),512);
    bufp->fullWData(oldp+4195,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[94]),512);
    bufp->fullWData(oldp+4211,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[95]),512);
    bufp->fullWData(oldp+4227,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[96]),512);
    bufp->fullWData(oldp+4243,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[97]),512);
    bufp->fullWData(oldp+4259,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[98]),512);
    bufp->fullWData(oldp+4275,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[99]),512);
    bufp->fullWData(oldp+4291,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[100]),512);
    bufp->fullWData(oldp+4307,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[101]),512);
    bufp->fullWData(oldp+4323,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[102]),512);
    bufp->fullWData(oldp+4339,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[103]),512);
    bufp->fullWData(oldp+4355,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[104]),512);
    bufp->fullWData(oldp+4371,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[105]),512);
    bufp->fullWData(oldp+4387,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[106]),512);
    bufp->fullWData(oldp+4403,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[107]),512);
    bufp->fullWData(oldp+4419,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[108]),512);
    bufp->fullWData(oldp+4435,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[109]),512);
    bufp->fullWData(oldp+4451,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[110]),512);
    bufp->fullWData(oldp+4467,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[111]),512);
    bufp->fullWData(oldp+4483,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[112]),512);
    bufp->fullWData(oldp+4499,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[113]),512);
    bufp->fullWData(oldp+4515,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[114]),512);
    bufp->fullWData(oldp+4531,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[115]),512);
    bufp->fullWData(oldp+4547,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[116]),512);
    bufp->fullWData(oldp+4563,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[117]),512);
    bufp->fullWData(oldp+4579,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[118]),512);
    bufp->fullWData(oldp+4595,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[119]),512);
    bufp->fullWData(oldp+4611,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[120]),512);
    bufp->fullWData(oldp+4627,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[121]),512);
    bufp->fullWData(oldp+4643,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[122]),512);
    bufp->fullWData(oldp+4659,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[123]),512);
    bufp->fullWData(oldp+4675,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[124]),512);
    bufp->fullWData(oldp+4691,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[125]),512);
    bufp->fullWData(oldp+4707,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[126]),512);
    bufp->fullWData(oldp+4723,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[127]),512);
    bufp->fullIData(oldp+4739,(((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT___R0_en_d0)
                                 ? vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory
                                [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT___R0_addr_d0]
                                 : 0U)),19);
    bufp->fullIData(oldp+4740,((vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                                >> 0xdU)),19);
    bufp->fullIData(oldp+4741,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[0]),19);
    bufp->fullIData(oldp+4742,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[1]),19);
    bufp->fullIData(oldp+4743,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[2]),19);
    bufp->fullIData(oldp+4744,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[3]),19);
    bufp->fullIData(oldp+4745,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[4]),19);
    bufp->fullIData(oldp+4746,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[5]),19);
    bufp->fullIData(oldp+4747,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[6]),19);
    bufp->fullIData(oldp+4748,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[7]),19);
    bufp->fullIData(oldp+4749,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[8]),19);
    bufp->fullIData(oldp+4750,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[9]),19);
    bufp->fullIData(oldp+4751,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[10]),19);
    bufp->fullIData(oldp+4752,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[11]),19);
    bufp->fullIData(oldp+4753,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[12]),19);
    bufp->fullIData(oldp+4754,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[13]),19);
    bufp->fullIData(oldp+4755,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[14]),19);
    bufp->fullIData(oldp+4756,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[15]),19);
    bufp->fullIData(oldp+4757,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[16]),19);
    bufp->fullIData(oldp+4758,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[17]),19);
    bufp->fullIData(oldp+4759,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[18]),19);
    bufp->fullIData(oldp+4760,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[19]),19);
    bufp->fullIData(oldp+4761,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[20]),19);
    bufp->fullIData(oldp+4762,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[21]),19);
    bufp->fullIData(oldp+4763,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[22]),19);
    bufp->fullIData(oldp+4764,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[23]),19);
    bufp->fullIData(oldp+4765,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[24]),19);
    bufp->fullIData(oldp+4766,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[25]),19);
    bufp->fullIData(oldp+4767,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[26]),19);
    bufp->fullIData(oldp+4768,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[27]),19);
    bufp->fullIData(oldp+4769,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[28]),19);
    bufp->fullIData(oldp+4770,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[29]),19);
    bufp->fullIData(oldp+4771,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[30]),19);
    bufp->fullIData(oldp+4772,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[31]),19);
    bufp->fullIData(oldp+4773,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[32]),19);
    bufp->fullIData(oldp+4774,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[33]),19);
    bufp->fullIData(oldp+4775,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[34]),19);
    bufp->fullIData(oldp+4776,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[35]),19);
    bufp->fullIData(oldp+4777,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[36]),19);
    bufp->fullIData(oldp+4778,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[37]),19);
    bufp->fullIData(oldp+4779,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[38]),19);
    bufp->fullIData(oldp+4780,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[39]),19);
    bufp->fullIData(oldp+4781,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[40]),19);
    bufp->fullIData(oldp+4782,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[41]),19);
    bufp->fullIData(oldp+4783,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[42]),19);
    bufp->fullIData(oldp+4784,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[43]),19);
    bufp->fullIData(oldp+4785,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[44]),19);
    bufp->fullIData(oldp+4786,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[45]),19);
    bufp->fullIData(oldp+4787,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[46]),19);
    bufp->fullIData(oldp+4788,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[47]),19);
    bufp->fullIData(oldp+4789,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[48]),19);
    bufp->fullIData(oldp+4790,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[49]),19);
    bufp->fullIData(oldp+4791,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[50]),19);
    bufp->fullIData(oldp+4792,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[51]),19);
    bufp->fullIData(oldp+4793,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[52]),19);
    bufp->fullIData(oldp+4794,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[53]),19);
    bufp->fullIData(oldp+4795,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[54]),19);
    bufp->fullIData(oldp+4796,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[55]),19);
    bufp->fullIData(oldp+4797,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[56]),19);
    bufp->fullIData(oldp+4798,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[57]),19);
    bufp->fullIData(oldp+4799,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[58]),19);
    bufp->fullIData(oldp+4800,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[59]),19);
    bufp->fullIData(oldp+4801,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[60]),19);
    bufp->fullIData(oldp+4802,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[61]),19);
    bufp->fullIData(oldp+4803,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[62]),19);
    bufp->fullIData(oldp+4804,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[63]),19);
    bufp->fullIData(oldp+4805,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[64]),19);
    bufp->fullIData(oldp+4806,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[65]),19);
    bufp->fullIData(oldp+4807,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[66]),19);
    bufp->fullIData(oldp+4808,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[67]),19);
    bufp->fullIData(oldp+4809,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[68]),19);
    bufp->fullIData(oldp+4810,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[69]),19);
    bufp->fullIData(oldp+4811,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[70]),19);
    bufp->fullIData(oldp+4812,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[71]),19);
    bufp->fullIData(oldp+4813,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[72]),19);
    bufp->fullIData(oldp+4814,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[73]),19);
    bufp->fullIData(oldp+4815,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[74]),19);
    bufp->fullIData(oldp+4816,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[75]),19);
    bufp->fullIData(oldp+4817,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[76]),19);
    bufp->fullIData(oldp+4818,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[77]),19);
    bufp->fullIData(oldp+4819,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[78]),19);
    bufp->fullIData(oldp+4820,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[79]),19);
    bufp->fullIData(oldp+4821,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[80]),19);
    bufp->fullIData(oldp+4822,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[81]),19);
    bufp->fullIData(oldp+4823,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[82]),19);
    bufp->fullIData(oldp+4824,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[83]),19);
    bufp->fullIData(oldp+4825,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[84]),19);
    bufp->fullIData(oldp+4826,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[85]),19);
    bufp->fullIData(oldp+4827,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[86]),19);
    bufp->fullIData(oldp+4828,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[87]),19);
    bufp->fullIData(oldp+4829,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[88]),19);
    bufp->fullIData(oldp+4830,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[89]),19);
    bufp->fullIData(oldp+4831,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[90]),19);
    bufp->fullIData(oldp+4832,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[91]),19);
    bufp->fullIData(oldp+4833,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[92]),19);
    bufp->fullIData(oldp+4834,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[93]),19);
    bufp->fullIData(oldp+4835,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[94]),19);
    bufp->fullIData(oldp+4836,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[95]),19);
    bufp->fullIData(oldp+4837,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[96]),19);
    bufp->fullIData(oldp+4838,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[97]),19);
    bufp->fullIData(oldp+4839,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[98]),19);
    bufp->fullIData(oldp+4840,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[99]),19);
    bufp->fullIData(oldp+4841,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[100]),19);
    bufp->fullIData(oldp+4842,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[101]),19);
    bufp->fullIData(oldp+4843,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[102]),19);
    bufp->fullIData(oldp+4844,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[103]),19);
    bufp->fullIData(oldp+4845,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[104]),19);
    bufp->fullIData(oldp+4846,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[105]),19);
    bufp->fullIData(oldp+4847,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[106]),19);
    bufp->fullIData(oldp+4848,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[107]),19);
    bufp->fullIData(oldp+4849,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[108]),19);
    bufp->fullIData(oldp+4850,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[109]),19);
    bufp->fullIData(oldp+4851,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[110]),19);
    bufp->fullIData(oldp+4852,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[111]),19);
    bufp->fullIData(oldp+4853,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[112]),19);
    bufp->fullIData(oldp+4854,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[113]),19);
    bufp->fullIData(oldp+4855,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[114]),19);
    bufp->fullIData(oldp+4856,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[115]),19);
    bufp->fullIData(oldp+4857,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[116]),19);
    bufp->fullIData(oldp+4858,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[117]),19);
    bufp->fullIData(oldp+4859,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[118]),19);
    bufp->fullIData(oldp+4860,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[119]),19);
    bufp->fullIData(oldp+4861,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[120]),19);
    bufp->fullIData(oldp+4862,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[121]),19);
    bufp->fullIData(oldp+4863,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[122]),19);
    bufp->fullIData(oldp+4864,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[123]),19);
    bufp->fullIData(oldp+4865,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[124]),19);
    bufp->fullIData(oldp+4866,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[125]),19);
    bufp->fullIData(oldp+4867,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[126]),19);
    bufp->fullIData(oldp+4868,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[127]),19);
    bufp->fullSData(oldp+4869,((0x3fffU & (vlSelf->SimTop__DOT__soc__DOT___icache_io_mem_req_bits_addr 
                                           >> 2U))),14);
    bufp->fullBit(oldp+4870,(vlSelf->SimTop__DOT__soc__DOT__imem__DOT____Vcellinp__mem_ext__R0_en));
    bufp->fullIData(oldp+4871,(((IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R0_en_d0)
                                 ? vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT__Memory
                                [vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R0_addr_d0]
                                 : 0U)),32);
    bufp->fullIData(oldp+4872,(((IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_en_d0)
                                 ? vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT__Memory
                                [vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_addr_d0]
                                 : 0U)),32);
    bufp->fullIData(oldp+4873,(((((IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_en_d0)
                                   ? (vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT__Memory
                                      [vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_addr_d0] 
                                      >> 0x18U) : 0U) 
                                 << 0x18U) | ((((IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_en_d0)
                                                 ? 
                                                (0xffU 
                                                 & (vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT__Memory
                                                    [vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_addr_d0] 
                                                    >> 0x10U))
                                                 : 0U) 
                                               << 0x10U) 
                                              | ((((IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_en_d0)
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT__Memory
                                                       [vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_addr_d0] 
                                                       >> 8U))
                                                    : 0U) 
                                                  << 8U) 
                                                 | ((IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_en_d0)
                                                     ? 
                                                    (0xffU 
                                                     & vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT__Memory
                                                     [vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_addr_d0])
                                                     : 0U))))),32);
    bufp->fullQData(oldp+4874,(vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__cycle_counter),64);
    bufp->fullQData(oldp+4876,(vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__instruction_counter),64);
    bufp->fullQData(oldp+4878,(vlSelf->SimTop__DOT__soc__DOT__trace_gen__DOT__cycle_counter),64);
    bufp->fullBit(oldp+4880,(vlSelf->clock));
    bufp->fullBit(oldp+4881,(vlSelf->reset));
    bufp->fullBit(oldp+4882,(vlSelf->io_success));
    bufp->fullBit(oldp+4883,(vlSelf->io_finished));
}
