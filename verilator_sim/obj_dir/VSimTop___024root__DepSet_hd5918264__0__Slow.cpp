// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop__pch.h"
#include "VSimTop___024root.h"

VL_ATTR_COLD void VSimTop___024root___eval_static(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VSimTop___024root___eval_final(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__stl(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSimTop___024root___eval_phase__stl(VSimTop___024root* vlSelf);

VL_ATTR_COLD void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VSimTop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("SimTop.sv", 3053, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSimTop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__stl(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlWide<16>/*511:0*/ VSimTop__ConstPool__CONST_h93e1b771_0;

VL_ATTR_COLD void VSimTop___024root___stl_sequent__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN;
    SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN = 0;
    CData/*0:0*/ SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_0;
    SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_0 = 0;
    CData/*0:0*/ SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_1;
    SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_1 = 0;
    CData/*0:0*/ SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_2;
    SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_2 = 0;
    VlWide<4>/*127:0*/ SimTop__DOT__soc__DOT__icache__DOT___GEN_0;
    VL_ZERO_W(128, SimTop__DOT__soc__DOT__icache__DOT___GEN_0);
    VlWide<4>/*127:0*/ SimTop__DOT__soc__DOT__dcache__DOT___GEN_0;
    VL_ZERO_W(128, SimTop__DOT__soc__DOT__dcache__DOT___GEN_0);
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_78;
    VlWide<3>/*95:0*/ __Vtemp_93;
    VlWide<3>/*95:0*/ __Vtemp_109;
    VlWide<4>/*127:0*/ __Vtemp_141;
    VlWide<16>/*511:0*/ __Vtemp_156;
    VlWide<16>/*511:0*/ __Vtemp_157;
    // Body
    vlSelf->io_success = ((9U < vlSelf->SimTop__DOT__cycle_counter) 
                          & (0x65U > vlSelf->SimTop__DOT__cycle_counter));
    vlSelf->io_finished = (0x63U < vlSelf->SimTop__DOT__cycle_counter);
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT___pc_plus4_T 
        = ((IData)(4U) + vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc);
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_cpu_req_ready 
        = (0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_3 
        = (1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_7 
        = (2U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_8 
        = ((3U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
           | (0x23U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_12 
        = ((0x63U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
           | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_11 
        = ((0x23U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
           | (0x63U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_0 
        = ((6U == (7U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                         >> 0xcU))) ? 3U : ((IData)(
                                                    (7U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                         >> 0xcU)))) 
                                            << 1U));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_cpu_req_ready 
        = (0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_3 
        = (1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_7 
        = (2U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT___pc_target_T 
        = (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr) 
            << 2U) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump) 
                       << 1U) | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_branch)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h198d7daa__0 
        = ((0x6fU == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
           | (0x67U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__load_use_hazard 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_mem_read) 
           & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_valid) 
              & ((0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rd)) 
                 & (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rd) 
                     == (0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                  >> 0xfU))) | ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rd) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                    >> 0x14U)))))));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_valid) 
           & (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_branch) 
               | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_jump)) 
              & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_branch_taken)));
    vlSelf->SimTop__DOT__soc__DOT___cpu_io_dmem_req_bits_data 
        = ((2U == (7U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                         >> 0xcU))) ? vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rs2_data
            : ((1U == (7U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                             >> 0xcU))) ? ((vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rs2_data 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rs2_data))
                : ((0U == (7U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                 >> 0xcU))) ? ((vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rs2_data 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rs2_data 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rs2_data 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rs2_data))))
                    : vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rs2_data)));
    vlSelf->__VdfgTmp_h90747646__0 = (0xfU & ((1U == 
                                               (7U 
                                                & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                   >> 0xcU)))
                                               ? ((IData)(3U) 
                                                  << 
                                                  (3U 
                                                   & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))
                                               : ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))
                                                   : 0xfU)));
    vlSelf->__VdfgTmp_h3ccf2380__0 = vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory
        [vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R1_addr_d0];
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h832d9e96__0 
        = ((0x13U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
           | (0x33U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_mem_resp_ready_0 
        = ((0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
           & ((1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
              | (2U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state))));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_mem_resp_ready_0 
        = ((0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
           & ((1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
              | (2U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state))));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[1U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_1;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[2U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_2;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[3U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_3;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[4U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_4;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[5U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_5;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[6U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_6;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[7U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_7;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[8U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_8;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[9U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_9;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0xaU] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_10;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0xbU] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_11;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0xcU] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_12;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0xdU] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_13;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0xeU] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_14;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0xfU] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_15;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0x10U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_16;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0x11U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_17;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0x12U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_18;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0x13U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_19;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0x14U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_20;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0x15U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_21;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0x16U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_22;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0x17U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_23;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0x18U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_24;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0x19U] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_25;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0x1aU] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_26;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0x1bU] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_27;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0x1cU] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_28;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0x1dU] 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_29;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0x1eU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_31)) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_30))));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[0x1fU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_31)) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_30))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN 
        = ((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
           & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_read) 
              | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write)));
    SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_2 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_ctrl_reg_write) 
           & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_valid) 
              & (0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd))));
    SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_reg_write) 
           & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_valid) 
              & (0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rd))));
    __Vtemp_30[0U] = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_63)) 
                               << 0x3fU) | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_62)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_61)) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_60)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_59)) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_58)) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_57)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_56)) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_55)) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_54)) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_53)) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_52)) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_51)) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_50)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_49)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_48)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_47)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_46)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_45)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_44)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_43)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_42)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_41)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_40)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_39)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_38)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_37)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_36)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_35)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_34)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_33)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_32)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_31) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_30) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_29) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_28) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_27) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_26) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_25) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_24) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_23) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_22) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_21) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_20) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_19) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_17) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_16) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_15) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_14) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_13) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_12) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_11) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_10) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_9) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_7) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_30[1U] = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_63)) 
                                << 0x3fU) | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_62)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_61)) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_60)) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_59)) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_58)) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_57)) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_56)) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_55)) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_54)) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_53)) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_52)) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_51)) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_50)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_49)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_48)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_47)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_46)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_45)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_44)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_43)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_42)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_41)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_40)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_39)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_38)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_37)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_36)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_35)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_34)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_33)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_32)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_31) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_30) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_29) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_28) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_27) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_26) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_25) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_24) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_23) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_22) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_21) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_20) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_19) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_17) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_16) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_15) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_14) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_13) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_12) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_11) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_10) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_9) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_7) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                              >> 0x20U));
    __Vtemp_46[2U] = (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_80) 
                       << 0x10U) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_79) 
                                     << 0xfU) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_78) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_77) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_76) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_75) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_74) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_73) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_72) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_71) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_70) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_69) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_68) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_67) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_66) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_65) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_64)))))))))))))))));
    __Vtemp_78[3U] = (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_112) 
                       << 0x10U) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_111) 
                                     << 0xfU) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_110) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_109) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_108) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_107) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_106) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_105) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_104) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_103) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_102) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_101) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_100) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_99) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_98) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_97) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_96)))))))))))))))));
    SimTop__DOT__soc__DOT__icache__DOT___GEN_0[0U] 
        = __Vtemp_30[0U];
    SimTop__DOT__soc__DOT__icache__DOT___GEN_0[1U] 
        = __Vtemp_30[1U];
    SimTop__DOT__soc__DOT__icache__DOT___GEN_0[2U] 
        = (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_95) 
            << 0x1fU) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_94) 
                          << 0x1eU) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_93) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_92) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_91) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_90) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_89) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_88) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_87) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_86) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_85) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_84) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_83) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_82) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_81) 
                                                                          << 0x11U) 
                                                                         | __Vtemp_46[2U])))))))))))))));
    SimTop__DOT__soc__DOT__icache__DOT___GEN_0[3U] 
        = (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_127) 
            << 0x1fU) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_126) 
                          << 0x1eU) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_125) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_124) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_123) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_122) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_121) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_120) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_119) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_118) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_117) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_116) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_115) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_114) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_113) 
                                                                          << 0x11U) 
                                                                         | __Vtemp_78[3U])))))))))))))));
    __Vtemp_93[0U] = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_63)) 
                               << 0x3fU) | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_62)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_61)) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_60)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_59)) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_58)) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_57)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_56)) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_55)) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_54)) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_53)) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_52)) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_51)) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_50)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_49)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_48)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_47)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_46)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_45)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_44)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_43)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_42)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_41)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_40)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_39)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_38)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_37)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_36)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_35)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_34)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_33)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_32)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_31) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_30) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_29) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_28) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_27) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_26) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_25) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_24) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_23) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_22) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_21) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_20) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_19) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_17) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_16) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_15) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_14) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_13) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_12) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_11) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_10) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_9) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_7) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_93[1U] = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_63)) 
                                << 0x3fU) | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_62)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_61)) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_60)) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_59)) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_58)) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_57)) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_56)) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_55)) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_54)) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_53)) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_52)) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_51)) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_50)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_49)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_48)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_47)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_46)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_45)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_44)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_43)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_42)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_41)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_40)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_39)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_38)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_37)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_36)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_35)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_34)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_33)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_32)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_31) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_30) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_29) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_28) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_27) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_26) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_25) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_24) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_23) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_22) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_21) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_20) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_19) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_17) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_16) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_15) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_14) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_13) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_12) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_11) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_10) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_9) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_7) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                              >> 0x20U));
    __Vtemp_109[2U] = (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_80) 
                        << 0x10U) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_79) 
                                      << 0xfU) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_78) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_77) 
                                                      << 0xdU) 
                                                     | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_76) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_75) 
                                                            << 0xbU) 
                                                           | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_74) 
                                                               << 0xaU) 
                                                              | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_73) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_72) 
                                                                     << 8U) 
                                                                    | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_71) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_70) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_69) 
                                                                              << 5U) 
                                                                             | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_68) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_67) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_66) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_65) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_64)))))))))))))))));
    __Vtemp_141[3U] = (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_112) 
                        << 0x10U) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_111) 
                                      << 0xfU) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_110) 
                                                   << 0xeU) 
                                                  | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_109) 
                                                      << 0xdU) 
                                                     | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_108) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_107) 
                                                            << 0xbU) 
                                                           | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_106) 
                                                               << 0xaU) 
                                                              | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_105) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_104) 
                                                                     << 8U) 
                                                                    | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_103) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_102) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_101) 
                                                                              << 5U) 
                                                                             | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_100) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_99) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_98) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_97) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_96)))))))))))))))));
    SimTop__DOT__soc__DOT__dcache__DOT___GEN_0[0U] 
        = __Vtemp_93[0U];
    SimTop__DOT__soc__DOT__dcache__DOT___GEN_0[1U] 
        = __Vtemp_93[1U];
    SimTop__DOT__soc__DOT__dcache__DOT___GEN_0[2U] 
        = (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_95) 
            << 0x1fU) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_94) 
                          << 0x1eU) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_93) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_92) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_91) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_90) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_89) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_88) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_87) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_86) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_85) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_84) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_83) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_82) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_81) 
                                                                          << 0x11U) 
                                                                         | __Vtemp_109[2U])))))))))))))));
    SimTop__DOT__soc__DOT__dcache__DOT___GEN_0[3U] 
        = (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_127) 
            << 0x1fU) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_126) 
                          << 0x1eU) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_125) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_124) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_123) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_122) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_121) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_120) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_119) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_118) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_117) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_116) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_115) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_114) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_113) 
                                                                          << 0x11U) 
                                                                         | __Vtemp_141[3U])))))))))))))));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_15 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h198d7daa__0) 
           | (0x37U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard) 
           | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__load_use_hazard));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT__ctrl_sigs_mem_read 
        = ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h832d9e96__0)) 
           & (3U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h832d9e96__0) 
           | (3U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_mem_resp_ready_0) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_valid));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_mem_resp_ready_0) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_valid));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT____Vcellinp__tagArray_ext__R0_en 
        = ((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN));
    SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_0 
        = ((IData)(SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN) 
           & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rd) 
              == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs1)));
    SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_1 
        = ((IData)(SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN) 
           & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rd) 
              == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs2)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__hit 
        = ((SimTop__DOT__soc__DOT__icache__DOT___GEN_0[
            (3U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                   >> 0xbU))] >> (0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                                           >> 6U))) 
           & (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT___R0_en_d0)
                ? vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory
               [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT___R0_addr_d0]
                : 0U) == (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                          >> 0xdU)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit 
        = ((SimTop__DOT__soc__DOT__dcache__DOT___GEN_0[
            (3U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result 
                   >> 0xbU))] >> (0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result 
                                           >> 6U))) 
           & (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT___R0_en_d0)
                ? vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory
               [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT___R0_addr_d0]
                : 0U) == (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result 
                          >> 0xdU)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_he2fd0082__0 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6) 
           | (0x23U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_5 
        = ((1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_5 
        = ((1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___forward_io_forward_a 
        = (((IData)(SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_2) 
            & ((~ (IData)(SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_0)) 
               & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs1) 
                  == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd))))
            ? 2U : (IData)(SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_0));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___forward_io_forward_b 
        = (((IData)(SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_2) 
            & ((~ (IData)(SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_1)) 
               & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs2) 
                  == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd))))
            ? 2U : (IData)(SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_1));
    vlSelf->SimTop__DOT__soc__DOT___icache_io_mem_req_bits_addr 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__hit)
            ? vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc
            : (0xffffffc0U & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_mem_req_valid_0 
        = ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__hit)) 
           & (0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__hit));
    if (vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit) {
        vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_addr 
            = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result;
        vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_wen 
            = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write;
    } else {
        vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_addr 
            = (0xffffffc0U & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result);
        vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_wen = 0U;
    }
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT____Vcellinp__mem_ext__W0_data 
        = (((((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit) 
              & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write) 
                 & ((2U == (7U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                  >> 0xcU))) | ((IData)(vlSelf->__VdfgTmp_h90747646__0) 
                                                >> 3U))))
              ? ((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit)
                  ? (vlSelf->SimTop__DOT__soc__DOT___cpu_io_dmem_req_bits_data 
                     >> 0x18U) : 0U) : ((IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R1_en_d0)
                                         ? (vlSelf->__VdfgTmp_h3ccf2380__0 
                                            >> 0x18U)
                                         : 0U)) << 0x18U) 
           | ((0xff0000U & ((((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit) 
                              & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write) 
                                 & ((2U == (7U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                  >> 0xcU))) 
                                    | ((IData)(vlSelf->__VdfgTmp_h90747646__0) 
                                       >> 2U)))) ? 
                             ((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit)
                               ? (vlSelf->SimTop__DOT__soc__DOT___cpu_io_dmem_req_bits_data 
                                  >> 0x10U) : 0U) : 
                             ((IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R1_en_d0)
                               ? (vlSelf->__VdfgTmp_h3ccf2380__0 
                                  >> 0x10U) : 0U)) 
                            << 0x10U)) | ((0xff00U 
                                           & ((((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit) 
                                                & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write) 
                                                   & ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                           >> 0xcU))) 
                                                      | ((IData)(vlSelf->__VdfgTmp_h90747646__0) 
                                                         >> 1U))))
                                                ? ((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit)
                                                    ? 
                                                   (vlSelf->SimTop__DOT__soc__DOT___cpu_io_dmem_req_bits_data 
                                                    >> 8U)
                                                    : 0U)
                                                : ((IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R1_en_d0)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_h3ccf2380__0 
                                                    >> 8U)
                                                    : 0U)) 
                                              << 8U)) 
                                          | (0xffU 
                                             & (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit) 
                                                 & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write) 
                                                    & ((2U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                            >> 0xcU))) 
                                                       | (IData)(vlSelf->__VdfgTmp_h90747646__0))))
                                                 ? 
                                                ((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit)
                                                  ? vlSelf->SimTop__DOT__soc__DOT___cpu_io_dmem_req_bits_data
                                                  : 0U)
                                                 : 
                                                ((IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R1_en_d0)
                                                  ? vlSelf->__VdfgTmp_h3ccf2380__0
                                                  : 0U))))));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_mem_req_valid_0 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT____Vcellinp__tagArray_ext__R0_en) 
           & ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit)) 
              | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_2 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h5b8071d1__0 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_he2fd0082__0) 
           | (0x63U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_6 
        = ((0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_5));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_6 
        = ((0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_5));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_a 
        = ((2U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___forward_io_forward_a))
            ? vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result
            : ((1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___forward_io_forward_a))
                ? vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result
                : vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs1_data));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_b_reg 
        = ((2U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___forward_io_forward_b))
            ? vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result
            : ((1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___forward_io_forward_b))
                ? vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result
                : vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs2_data));
    vlSelf->SimTop__DOT__soc__DOT__imem__DOT____Vcellinp__mem_ext__R0_en 
        = ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_valid)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_mem_req_valid_0));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___fetch_io_out_valid 
        = ((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state))
            ? (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_2)
            : (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_5));
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN 
        = ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_valid)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_mem_req_valid_0));
    if (vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_en_d0) {
        __Vtemp_156[0U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0U];
        __Vtemp_156[1U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][1U];
        __Vtemp_156[2U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][2U];
        __Vtemp_156[3U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][3U];
        __Vtemp_156[4U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][4U];
        __Vtemp_156[5U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][5U];
        __Vtemp_156[6U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][6U];
        __Vtemp_156[7U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][7U];
        __Vtemp_156[8U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][8U];
        __Vtemp_156[9U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][9U];
        __Vtemp_156[0xaU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xaU];
        __Vtemp_156[0xbU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xbU];
        __Vtemp_156[0xcU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xcU];
        __Vtemp_156[0xdU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xdU];
        __Vtemp_156[0xeU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xeU];
        __Vtemp_156[0xfU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xfU];
    } else {
        __Vtemp_156[0U] = VSimTop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_156[1U] = VSimTop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_156[2U] = VSimTop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_156[3U] = VSimTop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_156[4U] = VSimTop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_156[5U] = VSimTop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_156[6U] = VSimTop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_156[7U] = VSimTop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_156[8U] = VSimTop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_156[9U] = VSimTop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_156[0xaU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_156[0xbU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_156[0xcU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_156[0xdU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_156[0xeU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_156[0xfU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_157, __Vtemp_156, 
                  (0x1e0U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result 
                             << 3U)));
    vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits 
        = ((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state))
            ? ((1U & ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_2)) 
                      | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write)))
                ? 0U : __Vtemp_157[0U]) : ((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_5)
                                            ? vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_data
                                            : 0U));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_auipc)
            ? vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc
            : vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_a);
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__lt 
        = VL_LTS_III(32, vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_a, vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_b_reg);
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__ltu 
        = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_a 
           < vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_b_reg);
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_src)
            ? vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm
            : vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_b_reg);
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__eq 
        = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_a 
           == vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_b_reg);
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN_0 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_wen));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT___branch_taken_T_4 
        = (IData)(((0U == (0x7000U & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_inst)) 
                   & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__eq)));
}

VL_ATTR_COLD void VSimTop___024root___eval_stl(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VSimTop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VSimTop___024root___eval_triggers__stl(VSimTop___024root* vlSelf);

VL_ATTR_COLD bool VSimTop___024root___eval_phase__stl(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSimTop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VSimTop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__act(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__nba(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->io_success = 0;
    vlSelf->io_finished = 0;
    vlSelf->SimTop__DOT__cycle_counter = 0;
    vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits = 0;
    vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_addr = 0;
    vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_wen = 0;
    vlSelf->SimTop__DOT__soc__DOT___icache_io_mem_req_bits_addr = 0;
    vlSelf->SimTop__DOT__soc__DOT___cpu_io_dmem_req_bits_data = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___forward_io_forward_a = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___forward_io_forward_b = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___fetch_io_out_valid = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__inst_counter = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT___pc_plus4_T = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT__ctrl_sigs_mem_read = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_8 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_11 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_12 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_15 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h832d9e96__0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h198d7daa__0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_he2fd0082__0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h5b8071d1__0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_a = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_b_reg = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT___pc_target_T = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__eq = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__lt = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__ltu = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT___branch_taken_T_4 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_pc = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_pc_plus4 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_valid = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_inst = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs1_data = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs2_data = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rd = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs1 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs2 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_src = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_mem_read = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_mem_write = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_reg_write = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_mem_to_reg = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_branch = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_lui = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_auipc = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_valid = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rs2_data = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rd = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_read = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_reg_write = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_to_reg = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_branch = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_jump = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_branch_taken = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_valid = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_ctrl_reg_write = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_valid = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_1 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_2 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_3 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_4 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_5 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_6 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_7 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_8 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_9 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_10 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_11 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_12 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_13 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_14 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_15 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_16 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_17 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_18 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_19 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_20 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_21 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_22 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_23 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_24 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_25 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_26 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_27 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_28 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_29 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_30 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_31 = 0;
    VL_ZERO_RESET_W(1024, vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN);
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__load_use_hazard = 0;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard = 0;
    vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_valid = 0;
    vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_data = 0;
    vlSelf->SimTop__DOT__soc__DOT__imem__DOT____Vcellinp__mem_ext__R0_en = 0;
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R0_en_d0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R0_addr_d0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_en_d0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_addr_d0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_valid = 0;
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_data = 0;
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN = 0;
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN_0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT____Vcellinp__mem_ext__W0_data = 0;
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R0_en_d0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R0_addr_d0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R1_en_d0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R1_addr_d0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_mem_resp_ready_0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_1 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_2 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_3 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_4 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_5 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_6 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_7 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_8 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_9 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_10 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_11 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_12 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_13 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_14 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_15 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_16 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_17 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_18 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_19 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_20 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_21 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_22 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_23 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_24 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_25 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_26 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_27 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_28 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_29 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_30 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_31 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_32 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_33 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_34 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_35 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_36 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_37 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_38 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_39 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_40 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_41 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_42 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_43 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_44 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_45 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_46 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_47 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_48 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_49 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_50 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_51 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_52 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_53 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_54 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_55 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_56 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_57 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_58 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_59 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_60 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_61 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_62 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_63 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_64 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_65 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_66 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_67 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_68 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_69 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_70 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_71 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_72 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_73 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_74 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_75 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_76 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_77 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_78 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_79 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_80 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_81 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_82 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_83 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_84 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_85 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_86 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_87 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_88 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_89 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_90 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_91 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_92 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_93 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_94 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_95 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_96 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_97 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_98 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_99 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_100 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_101 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_102 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_103 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_104 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_105 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_106 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_107 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_108 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_109 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_110 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_111 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_112 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_113 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_114 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_115 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_116 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_117 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_118 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_119 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_120 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_121 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_122 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_123 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_124 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_125 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_126 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_127 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_cpu_req_ready = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__hit = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_2 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_mem_req_valid_0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_3 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_5 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_6 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_7 = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(512, vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vi0]);
    }
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_en_d0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0 = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT___R0_en_d0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT___R0_addr_d0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_mem_resp_ready_0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_1 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_2 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_3 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_4 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_5 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_6 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_7 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_8 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_9 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_10 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_11 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_12 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_13 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_14 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_15 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_16 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_17 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_18 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_19 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_20 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_21 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_22 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_23 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_24 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_25 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_26 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_27 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_28 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_29 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_30 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_31 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_32 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_33 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_34 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_35 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_36 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_37 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_38 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_39 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_40 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_41 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_42 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_43 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_44 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_45 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_46 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_47 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_48 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_49 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_50 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_51 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_52 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_53 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_54 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_55 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_56 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_57 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_58 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_59 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_60 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_61 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_62 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_63 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_64 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_65 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_66 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_67 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_68 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_69 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_70 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_71 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_72 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_73 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_74 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_75 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_76 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_77 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_78 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_79 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_80 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_81 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_82 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_83 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_84 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_85 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_86 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_87 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_88 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_89 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_90 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_91 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_92 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_93 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_94 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_95 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_96 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_97 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_98 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_99 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_100 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_101 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_102 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_103 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_104 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_105 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_106 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_107 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_108 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_109 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_110 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_111 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_112 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_113 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_114 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_115 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_116 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_117 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_118 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_119 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_120 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_121 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_122 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_123 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_124 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_125 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_126 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_127 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_cpu_req_ready = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_2 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_mem_req_valid_0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_3 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_5 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_6 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_7 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT____Vcellinp__tagArray_ext__R0_en = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_ZERO_RESET_W(512, vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vi0]);
    }
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_en_d0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0 = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT___R0_en_d0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT___R0_addr_d0 = 0;
    vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__cycle_counter = 0;
    vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__instruction_counter = 0;
    vlSelf->SimTop__DOT__soc__DOT__trace_gen__DOT__cycle_counter = 0;
    vlSelf->__VdfgTmp_h90747646__0 = 0;
    vlSelf->__VdfgTmp_h3ccf2380__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
