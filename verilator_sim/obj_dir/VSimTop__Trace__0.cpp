// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__trace_chg_0_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSimTop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_0\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSimTop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<16>/*511:0*/ VSimTop__ConstPool__CONST_h93e1b771_0;

void VSimTop___024root__trace_chg_0_sub_0(VSimTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->SimTop__DOT__cycle_counter),32);
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
        bufp->chgIData(oldp+1,(((0ULL == vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__cycle_counter)
                                 ? 0U : __Vtemp_8[0U])),32);
        bufp->chgIData(oldp+2,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc),32);
        bufp->chgBit(oldp+3,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___fetch_io_out_valid));
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
        bufp->chgIData(oldp+4,(((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state))
                                 ? ((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_2)
                                     ? __Vtemp_11[0U]
                                     : 0U) : ((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_5)
                                               ? vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_data
                                               : 0U))),32);
        bufp->chgBit(oldp+5,(((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_read) 
                              | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write))));
        bufp->chgIData(oldp+6,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result),32);
        bufp->chgIData(oldp+7,(vlSelf->SimTop__DOT__soc__DOT___cpu_io_dmem_req_bits_data),32);
        bufp->chgCData(oldp+8,(((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write)
                                 ? ((2U == (7U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                  >> 0xcU)))
                                     ? 0xfU : (IData)(vlSelf->__VdfgTmp_h90747646__0))
                                 : 0U)),4);
        bufp->chgBit(oldp+9,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write));
        bufp->chgIData(oldp+10,(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits),32);
        bufp->chgQData(oldp+11,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__inst_counter),64);
        bufp->chgIData(oldp+13,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_pc),32);
        bufp->chgIData(oldp+14,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_pc_plus4),32);
        bufp->chgIData(oldp+15,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst),32);
        bufp->chgBit(oldp+16,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_valid));
        bufp->chgCData(oldp+17,((0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+18,((0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+19,(((0U == (0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                  >> 0xfU)))
                                  ? 0U : (((0U == (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x1fU 
                                                                    & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                       >> 0xfU)), 5U)))
                                            ? 0U : 
                                           (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[
                                            (((IData)(0x1fU) 
                                              + (0x3ffU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                     >> 0xfU)), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x1fU 
                                                                    & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                       >> 0xfU)), 5U))))) 
                                          | (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[
                                             (0x1fU 
                                              & (VL_SHIFTL_III(10,10,32, 
                                                               (0x1fU 
                                                                & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                   >> 0xfU)), 5U) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                     >> 0xfU)), 5U)))))),32);
        bufp->chgIData(oldp+20,(((0U == (0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                  >> 0x14U)))
                                  ? 0U : (((0U == (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x1fU 
                                                                    & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                       >> 0x14U)), 5U)))
                                            ? 0U : 
                                           (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[
                                            (((IData)(0x1fU) 
                                              + (0x3ffU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                     >> 0x14U)), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, 
                                                                   (0x1fU 
                                                                    & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                       >> 0x14U)), 5U))))) 
                                          | (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[
                                             (0x1fU 
                                              & (VL_SHIFTL_III(10,10,32, 
                                                               (0x1fU 
                                                                & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                   >> 0x14U)), 5U) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                     >> 0x14U)), 5U)))))),32);
        __Vtemp_23[0U] = (IData)((((QData)((IData)(
                                                   (0xfffffU 
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
        __Vtemp_23[1U] = (IData)(((((QData)((IData)(
                                                    (0xfffffU 
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
                                       >> 0x1fU))) 
                           << 0xcU) | ((0x800U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                  << 4U)) 
                                       | ((0x7e0U & 
                                           (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                >> 7U)))));
        __Vtemp_23[3U] = (0xfffff000U & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst);
        __Vtemp_23[4U] = (((- (IData)((vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                       >> 0x1fU))) 
                           << 0x14U) | ((0xff000U & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst) 
                                        | ((0x800U 
                                            & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                               >> 9U)) 
                                           | (0x7feU 
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
        bufp->chgIData(oldp+21,((((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
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
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
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
                                                                        : 3U))))), 5U))))) 
                                 | (__Vtemp_23[(7U 
                                                & (VL_SHIFTL_III(8,8,32, 
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
        bufp->chgCData(oldp+22,((0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                          >> 7U))),5);
        bufp->chgBit(oldp+23,(((0x13U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
                               | ((0x33U != (0x7fU 
                                             & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
                                  & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_8) 
                                     | ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_12)) 
                                        & (0x67U == 
                                           (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))))))));
        bufp->chgCData(oldp+24,((0xfU & ((0x13U == 
                                          (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
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
                                          : ((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
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
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(5,5,32, 
                                                                  (7U 
                                                                   & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                      >> 0xcU)), 2U)))
                                              : ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_8)
                                                  ? 0U
                                                  : 
                                                 (0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))))))),4);
        bufp->chgBit(oldp+25,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT__ctrl_sigs_mem_read));
        bufp->chgBit(oldp+26,(((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6)) 
                               & (0x23U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))));
        bufp->chgBit(oldp+27,(((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6) 
                               | ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_11)) 
                                  & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_15) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))))));
        bufp->chgBit(oldp+28,(((~ ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h832d9e96__0) 
                                   | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_8))) 
                               & (0x63U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))));
        bufp->chgBit(oldp+29,(((~ ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6) 
                                   | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_11))) 
                               & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h198d7daa__0))));
        bufp->chgBit(oldp+30,(((~ ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_he2fd0082__0) 
                                   | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_12))) 
                               & (0x67U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))));
        bufp->chgBit(oldp+31,(((~ ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h5b8071d1__0) 
                                   | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h198d7daa__0))) 
                               & (0x37U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))));
        bufp->chgBit(oldp+32,(((~ ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h5b8071d1__0) 
                                   | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_15))) 
                               & (0x17U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))));
        bufp->chgCData(oldp+33,((0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)),7);
        bufp->chgCData(oldp+34,((7U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+35,((vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+36,(((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6)
                                  ? 0U : ((0x23U == 
                                           (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                           ? 1U : (
                                                   (0x63U 
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
        bufp->chgIData(oldp+37,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_inst),32);
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
                                                 + 
                                                 (0x1ffU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U))) 
                                                >> 5U)] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U))))) 
                          | (__Vtemp_34[(0xfU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U) 
                                                 >> 5U))] 
                             >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U))));
        __Vtemp_35[1U] = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4;
        __Vtemp_35[2U] = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm))));
        __Vtemp_35[3U] = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm))) 
                                  >> 0x20U));
        bufp->chgIData(oldp+38,((((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
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
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(7,7,32, 
                                                                  (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_lui) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr) 
                                                                      | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump))), 5U))))) 
                                 | (__Vtemp_35[(3U 
                                                & (VL_SHIFTL_III(7,7,32, 
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
        bufp->chgIData(oldp+39,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_b_reg),32);
        bufp->chgCData(oldp+40,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rd),5);
        bufp->chgBit(oldp+41,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_mem_read));
        bufp->chgBit(oldp+42,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_mem_write));
        bufp->chgBit(oldp+43,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_reg_write));
        bufp->chgBit(oldp+44,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_mem_to_reg));
        bufp->chgBit(oldp+45,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_branch));
        bufp->chgBit(oldp+46,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump));
        bufp->chgBit(oldp+47,((((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_branch) 
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
        bufp->chgBit(oldp+48,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_valid));
        bufp->chgIData(oldp+49,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst),32);
        bufp->chgIData(oldp+50,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rs2_data),32);
        bufp->chgCData(oldp+51,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rd),5);
        bufp->chgBit(oldp+52,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_read));
        bufp->chgBit(oldp+53,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_reg_write));
        bufp->chgBit(oldp+54,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_to_reg));
        bufp->chgBit(oldp+55,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_branch));
        bufp->chgBit(oldp+56,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_jump));
        bufp->chgBit(oldp+57,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_branch_taken));
        bufp->chgBit(oldp+58,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_valid));
        bufp->chgBit(oldp+59,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard));
        bufp->chgIData(oldp+60,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc),32);
        bufp->chgIData(oldp+61,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4),32);
        bufp->chgIData(oldp+62,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs1_data),32);
        bufp->chgIData(oldp+63,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs2_data),32);
        bufp->chgIData(oldp+64,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm),32);
        bufp->chgBit(oldp+65,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_src));
        bufp->chgCData(oldp+66,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op),4);
        bufp->chgBit(oldp+67,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr));
        bufp->chgBit(oldp+68,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_lui));
        bufp->chgBit(oldp+69,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_auipc));
        bufp->chgCData(oldp+70,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___forward_io_forward_a),2);
        bufp->chgCData(oldp+71,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___forward_io_forward_b),2);
        bufp->chgIData(oldp+72,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result),32);
        bufp->chgIData(oldp+73,((((6U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT___pc_target_T)) 
                                  | (4U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT___pc_target_T)))
                                  ? (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_a 
                                     + vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm)
                                  : (((2U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT___pc_target_T)) 
                                      | (1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT___pc_target_T)))
                                      ? (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm 
                                         + vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc)
                                      : vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4))),32);
        bufp->chgIData(oldp+74,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_a),32);
        bufp->chgIData(oldp+75,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a),32);
        bufp->chgIData(oldp+76,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b),32);
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
        bufp->chgIData(oldp+77,((((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U)))
                                   ? 0U : (__Vtemp_45[
                                           (((IData)(0x1fU) 
                                             + (0x1ffU 
                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U))))) 
                                 | (__Vtemp_45[(0xfU 
                                                & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U) 
                                                   >> 5U))] 
                                    >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U))))),32);
        bufp->chgCData(oldp+78,((7U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_inst 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+79,(((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_branch) 
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
                                            >> 0xcU))))));
        bufp->chgBit(oldp+80,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__eq));
        bufp->chgBit(oldp+81,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__lt));
        bufp->chgBit(oldp+82,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__ltu));
        bufp->chgCData(oldp+83,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard),2);
        bufp->chgIData(oldp+84,(((IData)(4U) + vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc)),32);
        VL_SHIFTR_WWI(512,512,9, __Vtemp_47, __Vtemp_46, 
                      (0x1e0U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                                 << 3U)));
        bufp->chgIData(oldp+85,(((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___fetch_io_out_valid)
                                  ? ((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state))
                                      ? ((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_2)
                                          ? __Vtemp_47[0U]
                                          : 0U) : ((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_5)
                                                    ? vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_data
                                                    : 0U))
                                  : 0U)),32);
        bufp->chgCData(oldp+86,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs1),5);
        bufp->chgCData(oldp+87,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs2),5);
        bufp->chgCData(oldp+88,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd),5);
        bufp->chgBit(oldp+89,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_ctrl_reg_write));
        bufp->chgBit(oldp+90,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_valid));
        bufp->chgBit(oldp+91,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__load_use_hazard));
        bufp->chgBit(oldp+92,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush));
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
        bufp->chgIData(oldp+93,(((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_to_reg)
                                  ? (((0U == (0x1fU 
                                              & VL_SHIFTL_III(8,8,32, 
                                                              (7U 
                                                               & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                                  >> 0xcU)), 5U)))
                                       ? 0U : (__Vtemp_52[
                                               (((IData)(0x1fU) 
                                                 + 
                                                 (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (7U 
                                                                   & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                                      >> 0xcU)), 5U))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,8,32, 
                                                                    (7U 
                                                                     & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                                        >> 0xcU)), 5U))))) 
                                     | (__Vtemp_52[
                                        (7U & (VL_SHIFTL_III(8,8,32, 
                                                             (7U 
                                                              & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                                 >> 0xcU)), 5U) 
                                               >> 5U))] 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(8,8,32, 
                                                          (7U 
                                                           & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                              >> 0xcU)), 5U))))
                                  : vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result)),32);
        bufp->chgBit(oldp+94,(((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_ctrl_reg_write) 
                               & ((0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)) 
                                  & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_valid)))));
        bufp->chgIData(oldp+95,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_0),32);
        bufp->chgIData(oldp+96,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_1),32);
        bufp->chgIData(oldp+97,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_2),32);
        bufp->chgIData(oldp+98,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_3),32);
        bufp->chgIData(oldp+99,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_4),32);
        bufp->chgIData(oldp+100,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_5),32);
        bufp->chgIData(oldp+101,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_6),32);
        bufp->chgIData(oldp+102,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_7),32);
        bufp->chgIData(oldp+103,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_8),32);
        bufp->chgIData(oldp+104,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_9),32);
        bufp->chgIData(oldp+105,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_10),32);
        bufp->chgIData(oldp+106,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_11),32);
        bufp->chgIData(oldp+107,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_12),32);
        bufp->chgIData(oldp+108,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_13),32);
        bufp->chgIData(oldp+109,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_14),32);
        bufp->chgIData(oldp+110,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_15),32);
        bufp->chgIData(oldp+111,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_16),32);
        bufp->chgIData(oldp+112,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_17),32);
        bufp->chgIData(oldp+113,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_18),32);
        bufp->chgIData(oldp+114,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_19),32);
        bufp->chgIData(oldp+115,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_20),32);
        bufp->chgIData(oldp+116,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_21),32);
        bufp->chgIData(oldp+117,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_22),32);
        bufp->chgIData(oldp+118,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_23),32);
        bufp->chgIData(oldp+119,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_24),32);
        bufp->chgIData(oldp+120,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_25),32);
        bufp->chgIData(oldp+121,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_26),32);
        bufp->chgIData(oldp+122,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_27),32);
        bufp->chgIData(oldp+123,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_28),32);
        bufp->chgIData(oldp+124,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_29),32);
        bufp->chgIData(oldp+125,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_30),32);
        bufp->chgIData(oldp+126,(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_31),32);
        bufp->chgBit(oldp+127,(((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state))
                                 ? ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write)) 
                                    & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_2))
                                 : (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_5))));
        bufp->chgBit(oldp+128,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_mem_req_valid_0));
        bufp->chgIData(oldp+129,(vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_addr),32);
        bufp->chgIData(oldp+130,(((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit)
                                   ? vlSelf->SimTop__DOT__soc__DOT___cpu_io_dmem_req_bits_data
                                   : 0U)),32);
        bufp->chgCData(oldp+131,(((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit)
                                   ? ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write)
                                       ? ((2U == (7U 
                                                  & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                     >> 0xcU)))
                                           ? 0xfU : (IData)(vlSelf->__VdfgTmp_h90747646__0))
                                       : 0U) : 0U)),4);
        bufp->chgBit(oldp+132,(vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_wen));
        bufp->chgBit(oldp+133,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_mem_resp_ready_0));
        bufp->chgBit(oldp+134,(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_valid));
        bufp->chgIData(oldp+135,(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_data),32);
        bufp->chgBit(oldp+136,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_0));
        bufp->chgBit(oldp+137,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_1));
        bufp->chgBit(oldp+138,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_2));
        bufp->chgBit(oldp+139,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_3));
        bufp->chgBit(oldp+140,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_4));
        bufp->chgBit(oldp+141,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_5));
        bufp->chgBit(oldp+142,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_6));
        bufp->chgBit(oldp+143,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_7));
        bufp->chgBit(oldp+144,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_8));
        bufp->chgBit(oldp+145,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_9));
        bufp->chgBit(oldp+146,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_10));
        bufp->chgBit(oldp+147,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_11));
        bufp->chgBit(oldp+148,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_12));
        bufp->chgBit(oldp+149,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_13));
        bufp->chgBit(oldp+150,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_14));
        bufp->chgBit(oldp+151,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_15));
        bufp->chgBit(oldp+152,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_16));
        bufp->chgBit(oldp+153,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_17));
        bufp->chgBit(oldp+154,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_18));
        bufp->chgBit(oldp+155,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_19));
        bufp->chgBit(oldp+156,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_20));
        bufp->chgBit(oldp+157,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_21));
        bufp->chgBit(oldp+158,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_22));
        bufp->chgBit(oldp+159,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_23));
        bufp->chgBit(oldp+160,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_24));
        bufp->chgBit(oldp+161,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_25));
        bufp->chgBit(oldp+162,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_26));
        bufp->chgBit(oldp+163,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_27));
        bufp->chgBit(oldp+164,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_28));
        bufp->chgBit(oldp+165,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_29));
        bufp->chgBit(oldp+166,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_30));
        bufp->chgBit(oldp+167,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_31));
        bufp->chgBit(oldp+168,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_32));
        bufp->chgBit(oldp+169,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_33));
        bufp->chgBit(oldp+170,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_34));
        bufp->chgBit(oldp+171,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_35));
        bufp->chgBit(oldp+172,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_36));
        bufp->chgBit(oldp+173,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_37));
        bufp->chgBit(oldp+174,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_38));
        bufp->chgBit(oldp+175,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_39));
        bufp->chgBit(oldp+176,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_40));
        bufp->chgBit(oldp+177,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_41));
        bufp->chgBit(oldp+178,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_42));
        bufp->chgBit(oldp+179,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_43));
        bufp->chgBit(oldp+180,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_44));
        bufp->chgBit(oldp+181,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_45));
        bufp->chgBit(oldp+182,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_46));
        bufp->chgBit(oldp+183,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_47));
        bufp->chgBit(oldp+184,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_48));
        bufp->chgBit(oldp+185,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_49));
        bufp->chgBit(oldp+186,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_50));
        bufp->chgBit(oldp+187,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_51));
        bufp->chgBit(oldp+188,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_52));
        bufp->chgBit(oldp+189,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_53));
        bufp->chgBit(oldp+190,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_54));
        bufp->chgBit(oldp+191,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_55));
        bufp->chgBit(oldp+192,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_56));
        bufp->chgBit(oldp+193,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_57));
        bufp->chgBit(oldp+194,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_58));
        bufp->chgBit(oldp+195,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_59));
        bufp->chgBit(oldp+196,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_60));
        bufp->chgBit(oldp+197,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_61));
        bufp->chgBit(oldp+198,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_62));
        bufp->chgBit(oldp+199,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_63));
        bufp->chgBit(oldp+200,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_64));
        bufp->chgBit(oldp+201,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_65));
        bufp->chgBit(oldp+202,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_66));
        bufp->chgBit(oldp+203,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_67));
        bufp->chgBit(oldp+204,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_68));
        bufp->chgBit(oldp+205,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_69));
        bufp->chgBit(oldp+206,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_70));
        bufp->chgBit(oldp+207,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_71));
        bufp->chgBit(oldp+208,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_72));
        bufp->chgBit(oldp+209,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_73));
        bufp->chgBit(oldp+210,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_74));
        bufp->chgBit(oldp+211,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_75));
        bufp->chgBit(oldp+212,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_76));
        bufp->chgBit(oldp+213,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_77));
        bufp->chgBit(oldp+214,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_78));
        bufp->chgBit(oldp+215,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_79));
        bufp->chgBit(oldp+216,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_80));
        bufp->chgBit(oldp+217,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_81));
        bufp->chgBit(oldp+218,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_82));
        bufp->chgBit(oldp+219,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_83));
        bufp->chgBit(oldp+220,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_84));
        bufp->chgBit(oldp+221,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_85));
        bufp->chgBit(oldp+222,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_86));
        bufp->chgBit(oldp+223,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_87));
        bufp->chgBit(oldp+224,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_88));
        bufp->chgBit(oldp+225,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_89));
        bufp->chgBit(oldp+226,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_90));
        bufp->chgBit(oldp+227,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_91));
        bufp->chgBit(oldp+228,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_92));
        bufp->chgBit(oldp+229,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_93));
        bufp->chgBit(oldp+230,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_94));
        bufp->chgBit(oldp+231,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_95));
        bufp->chgBit(oldp+232,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_96));
        bufp->chgBit(oldp+233,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_97));
        bufp->chgBit(oldp+234,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_98));
        bufp->chgBit(oldp+235,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_99));
        bufp->chgBit(oldp+236,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_100));
        bufp->chgBit(oldp+237,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_101));
        bufp->chgBit(oldp+238,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_102));
        bufp->chgBit(oldp+239,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_103));
        bufp->chgBit(oldp+240,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_104));
        bufp->chgBit(oldp+241,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_105));
        bufp->chgBit(oldp+242,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_106));
        bufp->chgBit(oldp+243,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_107));
        bufp->chgBit(oldp+244,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_108));
        bufp->chgBit(oldp+245,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_109));
        bufp->chgBit(oldp+246,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_110));
        bufp->chgBit(oldp+247,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_111));
        bufp->chgBit(oldp+248,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_112));
        bufp->chgBit(oldp+249,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_113));
        bufp->chgBit(oldp+250,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_114));
        bufp->chgBit(oldp+251,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_115));
        bufp->chgBit(oldp+252,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_116));
        bufp->chgBit(oldp+253,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_117));
        bufp->chgBit(oldp+254,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_118));
        bufp->chgBit(oldp+255,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_119));
        bufp->chgBit(oldp+256,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_120));
        bufp->chgBit(oldp+257,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_121));
        bufp->chgBit(oldp+258,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_122));
        bufp->chgBit(oldp+259,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_123));
        bufp->chgBit(oldp+260,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_124));
        bufp->chgBit(oldp+261,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_125));
        bufp->chgBit(oldp+262,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_126));
        bufp->chgBit(oldp+263,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_127));
        bufp->chgCData(oldp+264,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state),2);
        bufp->chgBit(oldp+265,((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state))));
        bufp->chgBit(oldp+266,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit));
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
        bufp->chgWData(oldp+267,(__Vtemp_54),512);
        bufp->chgCData(oldp+283,((0x7fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result 
                                           >> 6U))),7);
        bufp->chgBit(oldp+284,(((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT____Vcellinp__tagArray_ext__R0_en) 
                                & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit))));
        bufp->chgWData(oldp+285,(__Vtemp_55),512);
        bufp->chgBit(oldp+301,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_6));
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
        bufp->chgWData(oldp+302,(__Vtemp_56),512);
        bufp->chgWData(oldp+318,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[0]),512);
        bufp->chgWData(oldp+334,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[1]),512);
        bufp->chgWData(oldp+350,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[2]),512);
        bufp->chgWData(oldp+366,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[3]),512);
        bufp->chgWData(oldp+382,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[4]),512);
        bufp->chgWData(oldp+398,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[5]),512);
        bufp->chgWData(oldp+414,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[6]),512);
        bufp->chgWData(oldp+430,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[7]),512);
        bufp->chgWData(oldp+446,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[8]),512);
        bufp->chgWData(oldp+462,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[9]),512);
        bufp->chgWData(oldp+478,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[10]),512);
        bufp->chgWData(oldp+494,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[11]),512);
        bufp->chgWData(oldp+510,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[12]),512);
        bufp->chgWData(oldp+526,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[13]),512);
        bufp->chgWData(oldp+542,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[14]),512);
        bufp->chgWData(oldp+558,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[15]),512);
        bufp->chgWData(oldp+574,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[16]),512);
        bufp->chgWData(oldp+590,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[17]),512);
        bufp->chgWData(oldp+606,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[18]),512);
        bufp->chgWData(oldp+622,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[19]),512);
        bufp->chgWData(oldp+638,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[20]),512);
        bufp->chgWData(oldp+654,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[21]),512);
        bufp->chgWData(oldp+670,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[22]),512);
        bufp->chgWData(oldp+686,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[23]),512);
        bufp->chgWData(oldp+702,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[24]),512);
        bufp->chgWData(oldp+718,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[25]),512);
        bufp->chgWData(oldp+734,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[26]),512);
        bufp->chgWData(oldp+750,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[27]),512);
        bufp->chgWData(oldp+766,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[28]),512);
        bufp->chgWData(oldp+782,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[29]),512);
        bufp->chgWData(oldp+798,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[30]),512);
        bufp->chgWData(oldp+814,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[31]),512);
        bufp->chgWData(oldp+830,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[32]),512);
        bufp->chgWData(oldp+846,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[33]),512);
        bufp->chgWData(oldp+862,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[34]),512);
        bufp->chgWData(oldp+878,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[35]),512);
        bufp->chgWData(oldp+894,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[36]),512);
        bufp->chgWData(oldp+910,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[37]),512);
        bufp->chgWData(oldp+926,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[38]),512);
        bufp->chgWData(oldp+942,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[39]),512);
        bufp->chgWData(oldp+958,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[40]),512);
        bufp->chgWData(oldp+974,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[41]),512);
        bufp->chgWData(oldp+990,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[42]),512);
        bufp->chgWData(oldp+1006,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[43]),512);
        bufp->chgWData(oldp+1022,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[44]),512);
        bufp->chgWData(oldp+1038,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[45]),512);
        bufp->chgWData(oldp+1054,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[46]),512);
        bufp->chgWData(oldp+1070,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[47]),512);
        bufp->chgWData(oldp+1086,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[48]),512);
        bufp->chgWData(oldp+1102,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[49]),512);
        bufp->chgWData(oldp+1118,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[50]),512);
        bufp->chgWData(oldp+1134,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[51]),512);
        bufp->chgWData(oldp+1150,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[52]),512);
        bufp->chgWData(oldp+1166,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[53]),512);
        bufp->chgWData(oldp+1182,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[54]),512);
        bufp->chgWData(oldp+1198,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[55]),512);
        bufp->chgWData(oldp+1214,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[56]),512);
        bufp->chgWData(oldp+1230,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[57]),512);
        bufp->chgWData(oldp+1246,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[58]),512);
        bufp->chgWData(oldp+1262,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[59]),512);
        bufp->chgWData(oldp+1278,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[60]),512);
        bufp->chgWData(oldp+1294,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[61]),512);
        bufp->chgWData(oldp+1310,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[62]),512);
        bufp->chgWData(oldp+1326,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[63]),512);
        bufp->chgWData(oldp+1342,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[64]),512);
        bufp->chgWData(oldp+1358,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[65]),512);
        bufp->chgWData(oldp+1374,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[66]),512);
        bufp->chgWData(oldp+1390,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[67]),512);
        bufp->chgWData(oldp+1406,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[68]),512);
        bufp->chgWData(oldp+1422,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[69]),512);
        bufp->chgWData(oldp+1438,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[70]),512);
        bufp->chgWData(oldp+1454,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[71]),512);
        bufp->chgWData(oldp+1470,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[72]),512);
        bufp->chgWData(oldp+1486,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[73]),512);
        bufp->chgWData(oldp+1502,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[74]),512);
        bufp->chgWData(oldp+1518,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[75]),512);
        bufp->chgWData(oldp+1534,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[76]),512);
        bufp->chgWData(oldp+1550,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[77]),512);
        bufp->chgWData(oldp+1566,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[78]),512);
        bufp->chgWData(oldp+1582,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[79]),512);
        bufp->chgWData(oldp+1598,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[80]),512);
        bufp->chgWData(oldp+1614,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[81]),512);
        bufp->chgWData(oldp+1630,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[82]),512);
        bufp->chgWData(oldp+1646,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[83]),512);
        bufp->chgWData(oldp+1662,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[84]),512);
        bufp->chgWData(oldp+1678,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[85]),512);
        bufp->chgWData(oldp+1694,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[86]),512);
        bufp->chgWData(oldp+1710,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[87]),512);
        bufp->chgWData(oldp+1726,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[88]),512);
        bufp->chgWData(oldp+1742,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[89]),512);
        bufp->chgWData(oldp+1758,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[90]),512);
        bufp->chgWData(oldp+1774,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[91]),512);
        bufp->chgWData(oldp+1790,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[92]),512);
        bufp->chgWData(oldp+1806,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[93]),512);
        bufp->chgWData(oldp+1822,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[94]),512);
        bufp->chgWData(oldp+1838,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[95]),512);
        bufp->chgWData(oldp+1854,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[96]),512);
        bufp->chgWData(oldp+1870,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[97]),512);
        bufp->chgWData(oldp+1886,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[98]),512);
        bufp->chgWData(oldp+1902,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[99]),512);
        bufp->chgWData(oldp+1918,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[100]),512);
        bufp->chgWData(oldp+1934,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[101]),512);
        bufp->chgWData(oldp+1950,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[102]),512);
        bufp->chgWData(oldp+1966,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[103]),512);
        bufp->chgWData(oldp+1982,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[104]),512);
        bufp->chgWData(oldp+1998,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[105]),512);
        bufp->chgWData(oldp+2014,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[106]),512);
        bufp->chgWData(oldp+2030,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[107]),512);
        bufp->chgWData(oldp+2046,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[108]),512);
        bufp->chgWData(oldp+2062,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[109]),512);
        bufp->chgWData(oldp+2078,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[110]),512);
        bufp->chgWData(oldp+2094,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[111]),512);
        bufp->chgWData(oldp+2110,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[112]),512);
        bufp->chgWData(oldp+2126,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[113]),512);
        bufp->chgWData(oldp+2142,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[114]),512);
        bufp->chgWData(oldp+2158,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[115]),512);
        bufp->chgWData(oldp+2174,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[116]),512);
        bufp->chgWData(oldp+2190,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[117]),512);
        bufp->chgWData(oldp+2206,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[118]),512);
        bufp->chgWData(oldp+2222,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[119]),512);
        bufp->chgWData(oldp+2238,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[120]),512);
        bufp->chgWData(oldp+2254,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[121]),512);
        bufp->chgWData(oldp+2270,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[122]),512);
        bufp->chgWData(oldp+2286,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[123]),512);
        bufp->chgWData(oldp+2302,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[124]),512);
        bufp->chgWData(oldp+2318,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[125]),512);
        bufp->chgWData(oldp+2334,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[126]),512);
        bufp->chgWData(oldp+2350,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[127]),512);
        bufp->chgBit(oldp+2366,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT____Vcellinp__tagArray_ext__R0_en));
        bufp->chgIData(oldp+2367,(((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT___R0_en_d0)
                                    ? vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory
                                   [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT___R0_addr_d0]
                                    : 0U)),19);
        bufp->chgIData(oldp+2368,((vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result 
                                   >> 0xdU)),19);
        bufp->chgIData(oldp+2369,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[0]),19);
        bufp->chgIData(oldp+2370,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[1]),19);
        bufp->chgIData(oldp+2371,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[2]),19);
        bufp->chgIData(oldp+2372,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[3]),19);
        bufp->chgIData(oldp+2373,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[4]),19);
        bufp->chgIData(oldp+2374,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[5]),19);
        bufp->chgIData(oldp+2375,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[6]),19);
        bufp->chgIData(oldp+2376,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[7]),19);
        bufp->chgIData(oldp+2377,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[8]),19);
        bufp->chgIData(oldp+2378,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[9]),19);
        bufp->chgIData(oldp+2379,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[10]),19);
        bufp->chgIData(oldp+2380,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[11]),19);
        bufp->chgIData(oldp+2381,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[12]),19);
        bufp->chgIData(oldp+2382,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[13]),19);
        bufp->chgIData(oldp+2383,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[14]),19);
        bufp->chgIData(oldp+2384,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[15]),19);
        bufp->chgIData(oldp+2385,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[16]),19);
        bufp->chgIData(oldp+2386,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[17]),19);
        bufp->chgIData(oldp+2387,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[18]),19);
        bufp->chgIData(oldp+2388,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[19]),19);
        bufp->chgIData(oldp+2389,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[20]),19);
        bufp->chgIData(oldp+2390,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[21]),19);
        bufp->chgIData(oldp+2391,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[22]),19);
        bufp->chgIData(oldp+2392,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[23]),19);
        bufp->chgIData(oldp+2393,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[24]),19);
        bufp->chgIData(oldp+2394,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[25]),19);
        bufp->chgIData(oldp+2395,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[26]),19);
        bufp->chgIData(oldp+2396,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[27]),19);
        bufp->chgIData(oldp+2397,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[28]),19);
        bufp->chgIData(oldp+2398,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[29]),19);
        bufp->chgIData(oldp+2399,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[30]),19);
        bufp->chgIData(oldp+2400,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[31]),19);
        bufp->chgIData(oldp+2401,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[32]),19);
        bufp->chgIData(oldp+2402,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[33]),19);
        bufp->chgIData(oldp+2403,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[34]),19);
        bufp->chgIData(oldp+2404,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[35]),19);
        bufp->chgIData(oldp+2405,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[36]),19);
        bufp->chgIData(oldp+2406,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[37]),19);
        bufp->chgIData(oldp+2407,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[38]),19);
        bufp->chgIData(oldp+2408,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[39]),19);
        bufp->chgIData(oldp+2409,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[40]),19);
        bufp->chgIData(oldp+2410,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[41]),19);
        bufp->chgIData(oldp+2411,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[42]),19);
        bufp->chgIData(oldp+2412,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[43]),19);
        bufp->chgIData(oldp+2413,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[44]),19);
        bufp->chgIData(oldp+2414,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[45]),19);
        bufp->chgIData(oldp+2415,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[46]),19);
        bufp->chgIData(oldp+2416,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[47]),19);
        bufp->chgIData(oldp+2417,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[48]),19);
        bufp->chgIData(oldp+2418,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[49]),19);
        bufp->chgIData(oldp+2419,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[50]),19);
        bufp->chgIData(oldp+2420,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[51]),19);
        bufp->chgIData(oldp+2421,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[52]),19);
        bufp->chgIData(oldp+2422,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[53]),19);
        bufp->chgIData(oldp+2423,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[54]),19);
        bufp->chgIData(oldp+2424,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[55]),19);
        bufp->chgIData(oldp+2425,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[56]),19);
        bufp->chgIData(oldp+2426,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[57]),19);
        bufp->chgIData(oldp+2427,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[58]),19);
        bufp->chgIData(oldp+2428,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[59]),19);
        bufp->chgIData(oldp+2429,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[60]),19);
        bufp->chgIData(oldp+2430,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[61]),19);
        bufp->chgIData(oldp+2431,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[62]),19);
        bufp->chgIData(oldp+2432,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[63]),19);
        bufp->chgIData(oldp+2433,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[64]),19);
        bufp->chgIData(oldp+2434,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[65]),19);
        bufp->chgIData(oldp+2435,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[66]),19);
        bufp->chgIData(oldp+2436,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[67]),19);
        bufp->chgIData(oldp+2437,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[68]),19);
        bufp->chgIData(oldp+2438,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[69]),19);
        bufp->chgIData(oldp+2439,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[70]),19);
        bufp->chgIData(oldp+2440,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[71]),19);
        bufp->chgIData(oldp+2441,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[72]),19);
        bufp->chgIData(oldp+2442,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[73]),19);
        bufp->chgIData(oldp+2443,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[74]),19);
        bufp->chgIData(oldp+2444,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[75]),19);
        bufp->chgIData(oldp+2445,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[76]),19);
        bufp->chgIData(oldp+2446,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[77]),19);
        bufp->chgIData(oldp+2447,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[78]),19);
        bufp->chgIData(oldp+2448,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[79]),19);
        bufp->chgIData(oldp+2449,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[80]),19);
        bufp->chgIData(oldp+2450,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[81]),19);
        bufp->chgIData(oldp+2451,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[82]),19);
        bufp->chgIData(oldp+2452,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[83]),19);
        bufp->chgIData(oldp+2453,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[84]),19);
        bufp->chgIData(oldp+2454,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[85]),19);
        bufp->chgIData(oldp+2455,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[86]),19);
        bufp->chgIData(oldp+2456,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[87]),19);
        bufp->chgIData(oldp+2457,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[88]),19);
        bufp->chgIData(oldp+2458,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[89]),19);
        bufp->chgIData(oldp+2459,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[90]),19);
        bufp->chgIData(oldp+2460,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[91]),19);
        bufp->chgIData(oldp+2461,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[92]),19);
        bufp->chgIData(oldp+2462,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[93]),19);
        bufp->chgIData(oldp+2463,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[94]),19);
        bufp->chgIData(oldp+2464,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[95]),19);
        bufp->chgIData(oldp+2465,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[96]),19);
        bufp->chgIData(oldp+2466,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[97]),19);
        bufp->chgIData(oldp+2467,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[98]),19);
        bufp->chgIData(oldp+2468,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[99]),19);
        bufp->chgIData(oldp+2469,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[100]),19);
        bufp->chgIData(oldp+2470,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[101]),19);
        bufp->chgIData(oldp+2471,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[102]),19);
        bufp->chgIData(oldp+2472,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[103]),19);
        bufp->chgIData(oldp+2473,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[104]),19);
        bufp->chgIData(oldp+2474,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[105]),19);
        bufp->chgIData(oldp+2475,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[106]),19);
        bufp->chgIData(oldp+2476,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[107]),19);
        bufp->chgIData(oldp+2477,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[108]),19);
        bufp->chgIData(oldp+2478,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[109]),19);
        bufp->chgIData(oldp+2479,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[110]),19);
        bufp->chgIData(oldp+2480,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[111]),19);
        bufp->chgIData(oldp+2481,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[112]),19);
        bufp->chgIData(oldp+2482,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[113]),19);
        bufp->chgIData(oldp+2483,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[114]),19);
        bufp->chgIData(oldp+2484,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[115]),19);
        bufp->chgIData(oldp+2485,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[116]),19);
        bufp->chgIData(oldp+2486,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[117]),19);
        bufp->chgIData(oldp+2487,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[118]),19);
        bufp->chgIData(oldp+2488,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[119]),19);
        bufp->chgIData(oldp+2489,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[120]),19);
        bufp->chgIData(oldp+2490,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[121]),19);
        bufp->chgIData(oldp+2491,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[122]),19);
        bufp->chgIData(oldp+2492,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[123]),19);
        bufp->chgIData(oldp+2493,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[124]),19);
        bufp->chgIData(oldp+2494,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[125]),19);
        bufp->chgIData(oldp+2495,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[126]),19);
        bufp->chgIData(oldp+2496,(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[127]),19);
        bufp->chgSData(oldp+2497,((0x3fffU & (vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_addr 
                                              >> 2U))),14);
        bufp->chgBit(oldp+2498,(((~ (IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_wen)) 
                                 & (IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN))));
        bufp->chgIData(oldp+2499,(((IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R0_en_d0)
                                    ? vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory
                                   [vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R0_addr_d0]
                                    : 0U)),32);
        bufp->chgBit(oldp+2500,(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN_0));
        bufp->chgIData(oldp+2501,(((IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R1_en_d0)
                                    ? vlSelf->__VdfgTmp_h3ccf2380__0
                                    : 0U)),32);
        bufp->chgIData(oldp+2502,(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT____Vcellinp__mem_ext__W0_data),32);
        bufp->chgBit(oldp+2503,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_mem_req_valid_0));
        bufp->chgIData(oldp+2504,(vlSelf->SimTop__DOT__soc__DOT___icache_io_mem_req_bits_addr),32);
        bufp->chgBit(oldp+2505,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_mem_resp_ready_0));
        bufp->chgBit(oldp+2506,(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_valid));
        bufp->chgIData(oldp+2507,(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_data),32);
        bufp->chgBit(oldp+2508,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_0));
        bufp->chgBit(oldp+2509,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_1));
        bufp->chgBit(oldp+2510,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_2));
        bufp->chgBit(oldp+2511,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_3));
        bufp->chgBit(oldp+2512,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_4));
        bufp->chgBit(oldp+2513,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_5));
        bufp->chgBit(oldp+2514,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_6));
        bufp->chgBit(oldp+2515,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_7));
        bufp->chgBit(oldp+2516,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_8));
        bufp->chgBit(oldp+2517,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_9));
        bufp->chgBit(oldp+2518,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_10));
        bufp->chgBit(oldp+2519,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_11));
        bufp->chgBit(oldp+2520,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_12));
        bufp->chgBit(oldp+2521,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_13));
        bufp->chgBit(oldp+2522,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_14));
        bufp->chgBit(oldp+2523,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_15));
        bufp->chgBit(oldp+2524,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_16));
        bufp->chgBit(oldp+2525,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_17));
        bufp->chgBit(oldp+2526,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_18));
        bufp->chgBit(oldp+2527,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_19));
        bufp->chgBit(oldp+2528,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_20));
        bufp->chgBit(oldp+2529,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_21));
        bufp->chgBit(oldp+2530,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_22));
        bufp->chgBit(oldp+2531,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_23));
        bufp->chgBit(oldp+2532,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_24));
        bufp->chgBit(oldp+2533,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_25));
        bufp->chgBit(oldp+2534,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_26));
        bufp->chgBit(oldp+2535,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_27));
        bufp->chgBit(oldp+2536,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_28));
        bufp->chgBit(oldp+2537,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_29));
        bufp->chgBit(oldp+2538,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_30));
        bufp->chgBit(oldp+2539,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_31));
        bufp->chgBit(oldp+2540,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_32));
        bufp->chgBit(oldp+2541,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_33));
        bufp->chgBit(oldp+2542,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_34));
        bufp->chgBit(oldp+2543,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_35));
        bufp->chgBit(oldp+2544,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_36));
        bufp->chgBit(oldp+2545,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_37));
        bufp->chgBit(oldp+2546,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_38));
        bufp->chgBit(oldp+2547,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_39));
        bufp->chgBit(oldp+2548,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_40));
        bufp->chgBit(oldp+2549,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_41));
        bufp->chgBit(oldp+2550,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_42));
        bufp->chgBit(oldp+2551,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_43));
        bufp->chgBit(oldp+2552,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_44));
        bufp->chgBit(oldp+2553,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_45));
        bufp->chgBit(oldp+2554,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_46));
        bufp->chgBit(oldp+2555,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_47));
        bufp->chgBit(oldp+2556,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_48));
        bufp->chgBit(oldp+2557,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_49));
        bufp->chgBit(oldp+2558,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_50));
        bufp->chgBit(oldp+2559,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_51));
        bufp->chgBit(oldp+2560,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_52));
        bufp->chgBit(oldp+2561,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_53));
        bufp->chgBit(oldp+2562,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_54));
        bufp->chgBit(oldp+2563,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_55));
        bufp->chgBit(oldp+2564,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_56));
        bufp->chgBit(oldp+2565,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_57));
        bufp->chgBit(oldp+2566,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_58));
        bufp->chgBit(oldp+2567,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_59));
        bufp->chgBit(oldp+2568,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_60));
        bufp->chgBit(oldp+2569,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_61));
        bufp->chgBit(oldp+2570,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_62));
        bufp->chgBit(oldp+2571,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_63));
        bufp->chgBit(oldp+2572,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_64));
        bufp->chgBit(oldp+2573,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_65));
        bufp->chgBit(oldp+2574,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_66));
        bufp->chgBit(oldp+2575,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_67));
        bufp->chgBit(oldp+2576,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_68));
        bufp->chgBit(oldp+2577,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_69));
        bufp->chgBit(oldp+2578,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_70));
        bufp->chgBit(oldp+2579,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_71));
        bufp->chgBit(oldp+2580,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_72));
        bufp->chgBit(oldp+2581,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_73));
        bufp->chgBit(oldp+2582,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_74));
        bufp->chgBit(oldp+2583,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_75));
        bufp->chgBit(oldp+2584,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_76));
        bufp->chgBit(oldp+2585,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_77));
        bufp->chgBit(oldp+2586,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_78));
        bufp->chgBit(oldp+2587,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_79));
        bufp->chgBit(oldp+2588,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_80));
        bufp->chgBit(oldp+2589,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_81));
        bufp->chgBit(oldp+2590,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_82));
        bufp->chgBit(oldp+2591,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_83));
        bufp->chgBit(oldp+2592,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_84));
        bufp->chgBit(oldp+2593,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_85));
        bufp->chgBit(oldp+2594,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_86));
        bufp->chgBit(oldp+2595,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_87));
        bufp->chgBit(oldp+2596,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_88));
        bufp->chgBit(oldp+2597,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_89));
        bufp->chgBit(oldp+2598,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_90));
        bufp->chgBit(oldp+2599,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_91));
        bufp->chgBit(oldp+2600,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_92));
        bufp->chgBit(oldp+2601,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_93));
        bufp->chgBit(oldp+2602,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_94));
        bufp->chgBit(oldp+2603,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_95));
        bufp->chgBit(oldp+2604,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_96));
        bufp->chgBit(oldp+2605,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_97));
        bufp->chgBit(oldp+2606,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_98));
        bufp->chgBit(oldp+2607,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_99));
        bufp->chgBit(oldp+2608,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_100));
        bufp->chgBit(oldp+2609,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_101));
        bufp->chgBit(oldp+2610,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_102));
        bufp->chgBit(oldp+2611,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_103));
        bufp->chgBit(oldp+2612,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_104));
        bufp->chgBit(oldp+2613,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_105));
        bufp->chgBit(oldp+2614,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_106));
        bufp->chgBit(oldp+2615,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_107));
        bufp->chgBit(oldp+2616,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_108));
        bufp->chgBit(oldp+2617,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_109));
        bufp->chgBit(oldp+2618,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_110));
        bufp->chgBit(oldp+2619,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_111));
        bufp->chgBit(oldp+2620,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_112));
        bufp->chgBit(oldp+2621,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_113));
        bufp->chgBit(oldp+2622,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_114));
        bufp->chgBit(oldp+2623,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_115));
        bufp->chgBit(oldp+2624,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_116));
        bufp->chgBit(oldp+2625,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_117));
        bufp->chgBit(oldp+2626,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_118));
        bufp->chgBit(oldp+2627,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_119));
        bufp->chgBit(oldp+2628,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_120));
        bufp->chgBit(oldp+2629,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_121));
        bufp->chgBit(oldp+2630,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_122));
        bufp->chgBit(oldp+2631,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_123));
        bufp->chgBit(oldp+2632,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_124));
        bufp->chgBit(oldp+2633,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_125));
        bufp->chgBit(oldp+2634,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_126));
        bufp->chgBit(oldp+2635,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_127));
        bufp->chgCData(oldp+2636,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state),2);
        bufp->chgBit(oldp+2637,((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state))));
        bufp->chgBit(oldp+2638,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__hit));
        VL_SHIFTR_WWI(512,512,9, __Vtemp_58, __Vtemp_57, 
                      (0x1e0U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                                 << 3U)));
        bufp->chgWData(oldp+2639,(__Vtemp_58),512);
        bufp->chgCData(oldp+2655,((0x7fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                                            >> 6U))),7);
        bufp->chgBit(oldp+2656,(((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                 & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__hit))));
        bufp->chgWData(oldp+2657,(__Vtemp_59),512);
        bufp->chgBit(oldp+2673,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_6));
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
        bufp->chgWData(oldp+2674,(__Vtemp_60),512);
        bufp->chgWData(oldp+2690,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[0]),512);
        bufp->chgWData(oldp+2706,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[1]),512);
        bufp->chgWData(oldp+2722,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[2]),512);
        bufp->chgWData(oldp+2738,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[3]),512);
        bufp->chgWData(oldp+2754,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[4]),512);
        bufp->chgWData(oldp+2770,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[5]),512);
        bufp->chgWData(oldp+2786,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[6]),512);
        bufp->chgWData(oldp+2802,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[7]),512);
        bufp->chgWData(oldp+2818,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[8]),512);
        bufp->chgWData(oldp+2834,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[9]),512);
        bufp->chgWData(oldp+2850,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[10]),512);
        bufp->chgWData(oldp+2866,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[11]),512);
        bufp->chgWData(oldp+2882,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[12]),512);
        bufp->chgWData(oldp+2898,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[13]),512);
        bufp->chgWData(oldp+2914,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[14]),512);
        bufp->chgWData(oldp+2930,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[15]),512);
        bufp->chgWData(oldp+2946,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[16]),512);
        bufp->chgWData(oldp+2962,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[17]),512);
        bufp->chgWData(oldp+2978,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[18]),512);
        bufp->chgWData(oldp+2994,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[19]),512);
        bufp->chgWData(oldp+3010,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[20]),512);
        bufp->chgWData(oldp+3026,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[21]),512);
        bufp->chgWData(oldp+3042,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[22]),512);
        bufp->chgWData(oldp+3058,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[23]),512);
        bufp->chgWData(oldp+3074,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[24]),512);
        bufp->chgWData(oldp+3090,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[25]),512);
        bufp->chgWData(oldp+3106,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[26]),512);
        bufp->chgWData(oldp+3122,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[27]),512);
        bufp->chgWData(oldp+3138,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[28]),512);
        bufp->chgWData(oldp+3154,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[29]),512);
        bufp->chgWData(oldp+3170,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[30]),512);
        bufp->chgWData(oldp+3186,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[31]),512);
        bufp->chgWData(oldp+3202,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[32]),512);
        bufp->chgWData(oldp+3218,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[33]),512);
        bufp->chgWData(oldp+3234,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[34]),512);
        bufp->chgWData(oldp+3250,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[35]),512);
        bufp->chgWData(oldp+3266,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[36]),512);
        bufp->chgWData(oldp+3282,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[37]),512);
        bufp->chgWData(oldp+3298,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[38]),512);
        bufp->chgWData(oldp+3314,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[39]),512);
        bufp->chgWData(oldp+3330,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[40]),512);
        bufp->chgWData(oldp+3346,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[41]),512);
        bufp->chgWData(oldp+3362,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[42]),512);
        bufp->chgWData(oldp+3378,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[43]),512);
        bufp->chgWData(oldp+3394,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[44]),512);
        bufp->chgWData(oldp+3410,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[45]),512);
        bufp->chgWData(oldp+3426,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[46]),512);
        bufp->chgWData(oldp+3442,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[47]),512);
        bufp->chgWData(oldp+3458,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[48]),512);
        bufp->chgWData(oldp+3474,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[49]),512);
        bufp->chgWData(oldp+3490,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[50]),512);
        bufp->chgWData(oldp+3506,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[51]),512);
        bufp->chgWData(oldp+3522,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[52]),512);
        bufp->chgWData(oldp+3538,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[53]),512);
        bufp->chgWData(oldp+3554,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[54]),512);
        bufp->chgWData(oldp+3570,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[55]),512);
        bufp->chgWData(oldp+3586,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[56]),512);
        bufp->chgWData(oldp+3602,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[57]),512);
        bufp->chgWData(oldp+3618,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[58]),512);
        bufp->chgWData(oldp+3634,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[59]),512);
        bufp->chgWData(oldp+3650,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[60]),512);
        bufp->chgWData(oldp+3666,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[61]),512);
        bufp->chgWData(oldp+3682,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[62]),512);
        bufp->chgWData(oldp+3698,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[63]),512);
        bufp->chgWData(oldp+3714,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[64]),512);
        bufp->chgWData(oldp+3730,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[65]),512);
        bufp->chgWData(oldp+3746,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[66]),512);
        bufp->chgWData(oldp+3762,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[67]),512);
        bufp->chgWData(oldp+3778,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[68]),512);
        bufp->chgWData(oldp+3794,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[69]),512);
        bufp->chgWData(oldp+3810,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[70]),512);
        bufp->chgWData(oldp+3826,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[71]),512);
        bufp->chgWData(oldp+3842,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[72]),512);
        bufp->chgWData(oldp+3858,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[73]),512);
        bufp->chgWData(oldp+3874,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[74]),512);
        bufp->chgWData(oldp+3890,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[75]),512);
        bufp->chgWData(oldp+3906,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[76]),512);
        bufp->chgWData(oldp+3922,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[77]),512);
        bufp->chgWData(oldp+3938,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[78]),512);
        bufp->chgWData(oldp+3954,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[79]),512);
        bufp->chgWData(oldp+3970,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[80]),512);
        bufp->chgWData(oldp+3986,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[81]),512);
        bufp->chgWData(oldp+4002,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[82]),512);
        bufp->chgWData(oldp+4018,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[83]),512);
        bufp->chgWData(oldp+4034,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[84]),512);
        bufp->chgWData(oldp+4050,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[85]),512);
        bufp->chgWData(oldp+4066,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[86]),512);
        bufp->chgWData(oldp+4082,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[87]),512);
        bufp->chgWData(oldp+4098,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[88]),512);
        bufp->chgWData(oldp+4114,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[89]),512);
        bufp->chgWData(oldp+4130,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[90]),512);
        bufp->chgWData(oldp+4146,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[91]),512);
        bufp->chgWData(oldp+4162,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[92]),512);
        bufp->chgWData(oldp+4178,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[93]),512);
        bufp->chgWData(oldp+4194,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[94]),512);
        bufp->chgWData(oldp+4210,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[95]),512);
        bufp->chgWData(oldp+4226,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[96]),512);
        bufp->chgWData(oldp+4242,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[97]),512);
        bufp->chgWData(oldp+4258,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[98]),512);
        bufp->chgWData(oldp+4274,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[99]),512);
        bufp->chgWData(oldp+4290,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[100]),512);
        bufp->chgWData(oldp+4306,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[101]),512);
        bufp->chgWData(oldp+4322,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[102]),512);
        bufp->chgWData(oldp+4338,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[103]),512);
        bufp->chgWData(oldp+4354,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[104]),512);
        bufp->chgWData(oldp+4370,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[105]),512);
        bufp->chgWData(oldp+4386,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[106]),512);
        bufp->chgWData(oldp+4402,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[107]),512);
        bufp->chgWData(oldp+4418,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[108]),512);
        bufp->chgWData(oldp+4434,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[109]),512);
        bufp->chgWData(oldp+4450,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[110]),512);
        bufp->chgWData(oldp+4466,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[111]),512);
        bufp->chgWData(oldp+4482,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[112]),512);
        bufp->chgWData(oldp+4498,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[113]),512);
        bufp->chgWData(oldp+4514,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[114]),512);
        bufp->chgWData(oldp+4530,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[115]),512);
        bufp->chgWData(oldp+4546,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[116]),512);
        bufp->chgWData(oldp+4562,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[117]),512);
        bufp->chgWData(oldp+4578,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[118]),512);
        bufp->chgWData(oldp+4594,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[119]),512);
        bufp->chgWData(oldp+4610,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[120]),512);
        bufp->chgWData(oldp+4626,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[121]),512);
        bufp->chgWData(oldp+4642,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[122]),512);
        bufp->chgWData(oldp+4658,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[123]),512);
        bufp->chgWData(oldp+4674,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[124]),512);
        bufp->chgWData(oldp+4690,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[125]),512);
        bufp->chgWData(oldp+4706,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[126]),512);
        bufp->chgWData(oldp+4722,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[127]),512);
        bufp->chgIData(oldp+4738,(((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT___R0_en_d0)
                                    ? vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory
                                   [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT___R0_addr_d0]
                                    : 0U)),19);
        bufp->chgIData(oldp+4739,((vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                                   >> 0xdU)),19);
        bufp->chgIData(oldp+4740,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[0]),19);
        bufp->chgIData(oldp+4741,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[1]),19);
        bufp->chgIData(oldp+4742,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[2]),19);
        bufp->chgIData(oldp+4743,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[3]),19);
        bufp->chgIData(oldp+4744,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[4]),19);
        bufp->chgIData(oldp+4745,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[5]),19);
        bufp->chgIData(oldp+4746,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[6]),19);
        bufp->chgIData(oldp+4747,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[7]),19);
        bufp->chgIData(oldp+4748,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[8]),19);
        bufp->chgIData(oldp+4749,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[9]),19);
        bufp->chgIData(oldp+4750,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[10]),19);
        bufp->chgIData(oldp+4751,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[11]),19);
        bufp->chgIData(oldp+4752,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[12]),19);
        bufp->chgIData(oldp+4753,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[13]),19);
        bufp->chgIData(oldp+4754,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[14]),19);
        bufp->chgIData(oldp+4755,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[15]),19);
        bufp->chgIData(oldp+4756,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[16]),19);
        bufp->chgIData(oldp+4757,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[17]),19);
        bufp->chgIData(oldp+4758,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[18]),19);
        bufp->chgIData(oldp+4759,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[19]),19);
        bufp->chgIData(oldp+4760,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[20]),19);
        bufp->chgIData(oldp+4761,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[21]),19);
        bufp->chgIData(oldp+4762,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[22]),19);
        bufp->chgIData(oldp+4763,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[23]),19);
        bufp->chgIData(oldp+4764,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[24]),19);
        bufp->chgIData(oldp+4765,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[25]),19);
        bufp->chgIData(oldp+4766,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[26]),19);
        bufp->chgIData(oldp+4767,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[27]),19);
        bufp->chgIData(oldp+4768,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[28]),19);
        bufp->chgIData(oldp+4769,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[29]),19);
        bufp->chgIData(oldp+4770,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[30]),19);
        bufp->chgIData(oldp+4771,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[31]),19);
        bufp->chgIData(oldp+4772,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[32]),19);
        bufp->chgIData(oldp+4773,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[33]),19);
        bufp->chgIData(oldp+4774,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[34]),19);
        bufp->chgIData(oldp+4775,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[35]),19);
        bufp->chgIData(oldp+4776,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[36]),19);
        bufp->chgIData(oldp+4777,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[37]),19);
        bufp->chgIData(oldp+4778,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[38]),19);
        bufp->chgIData(oldp+4779,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[39]),19);
        bufp->chgIData(oldp+4780,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[40]),19);
        bufp->chgIData(oldp+4781,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[41]),19);
        bufp->chgIData(oldp+4782,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[42]),19);
        bufp->chgIData(oldp+4783,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[43]),19);
        bufp->chgIData(oldp+4784,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[44]),19);
        bufp->chgIData(oldp+4785,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[45]),19);
        bufp->chgIData(oldp+4786,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[46]),19);
        bufp->chgIData(oldp+4787,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[47]),19);
        bufp->chgIData(oldp+4788,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[48]),19);
        bufp->chgIData(oldp+4789,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[49]),19);
        bufp->chgIData(oldp+4790,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[50]),19);
        bufp->chgIData(oldp+4791,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[51]),19);
        bufp->chgIData(oldp+4792,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[52]),19);
        bufp->chgIData(oldp+4793,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[53]),19);
        bufp->chgIData(oldp+4794,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[54]),19);
        bufp->chgIData(oldp+4795,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[55]),19);
        bufp->chgIData(oldp+4796,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[56]),19);
        bufp->chgIData(oldp+4797,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[57]),19);
        bufp->chgIData(oldp+4798,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[58]),19);
        bufp->chgIData(oldp+4799,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[59]),19);
        bufp->chgIData(oldp+4800,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[60]),19);
        bufp->chgIData(oldp+4801,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[61]),19);
        bufp->chgIData(oldp+4802,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[62]),19);
        bufp->chgIData(oldp+4803,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[63]),19);
        bufp->chgIData(oldp+4804,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[64]),19);
        bufp->chgIData(oldp+4805,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[65]),19);
        bufp->chgIData(oldp+4806,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[66]),19);
        bufp->chgIData(oldp+4807,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[67]),19);
        bufp->chgIData(oldp+4808,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[68]),19);
        bufp->chgIData(oldp+4809,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[69]),19);
        bufp->chgIData(oldp+4810,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[70]),19);
        bufp->chgIData(oldp+4811,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[71]),19);
        bufp->chgIData(oldp+4812,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[72]),19);
        bufp->chgIData(oldp+4813,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[73]),19);
        bufp->chgIData(oldp+4814,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[74]),19);
        bufp->chgIData(oldp+4815,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[75]),19);
        bufp->chgIData(oldp+4816,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[76]),19);
        bufp->chgIData(oldp+4817,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[77]),19);
        bufp->chgIData(oldp+4818,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[78]),19);
        bufp->chgIData(oldp+4819,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[79]),19);
        bufp->chgIData(oldp+4820,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[80]),19);
        bufp->chgIData(oldp+4821,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[81]),19);
        bufp->chgIData(oldp+4822,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[82]),19);
        bufp->chgIData(oldp+4823,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[83]),19);
        bufp->chgIData(oldp+4824,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[84]),19);
        bufp->chgIData(oldp+4825,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[85]),19);
        bufp->chgIData(oldp+4826,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[86]),19);
        bufp->chgIData(oldp+4827,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[87]),19);
        bufp->chgIData(oldp+4828,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[88]),19);
        bufp->chgIData(oldp+4829,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[89]),19);
        bufp->chgIData(oldp+4830,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[90]),19);
        bufp->chgIData(oldp+4831,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[91]),19);
        bufp->chgIData(oldp+4832,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[92]),19);
        bufp->chgIData(oldp+4833,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[93]),19);
        bufp->chgIData(oldp+4834,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[94]),19);
        bufp->chgIData(oldp+4835,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[95]),19);
        bufp->chgIData(oldp+4836,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[96]),19);
        bufp->chgIData(oldp+4837,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[97]),19);
        bufp->chgIData(oldp+4838,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[98]),19);
        bufp->chgIData(oldp+4839,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[99]),19);
        bufp->chgIData(oldp+4840,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[100]),19);
        bufp->chgIData(oldp+4841,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[101]),19);
        bufp->chgIData(oldp+4842,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[102]),19);
        bufp->chgIData(oldp+4843,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[103]),19);
        bufp->chgIData(oldp+4844,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[104]),19);
        bufp->chgIData(oldp+4845,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[105]),19);
        bufp->chgIData(oldp+4846,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[106]),19);
        bufp->chgIData(oldp+4847,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[107]),19);
        bufp->chgIData(oldp+4848,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[108]),19);
        bufp->chgIData(oldp+4849,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[109]),19);
        bufp->chgIData(oldp+4850,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[110]),19);
        bufp->chgIData(oldp+4851,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[111]),19);
        bufp->chgIData(oldp+4852,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[112]),19);
        bufp->chgIData(oldp+4853,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[113]),19);
        bufp->chgIData(oldp+4854,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[114]),19);
        bufp->chgIData(oldp+4855,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[115]),19);
        bufp->chgIData(oldp+4856,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[116]),19);
        bufp->chgIData(oldp+4857,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[117]),19);
        bufp->chgIData(oldp+4858,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[118]),19);
        bufp->chgIData(oldp+4859,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[119]),19);
        bufp->chgIData(oldp+4860,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[120]),19);
        bufp->chgIData(oldp+4861,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[121]),19);
        bufp->chgIData(oldp+4862,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[122]),19);
        bufp->chgIData(oldp+4863,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[123]),19);
        bufp->chgIData(oldp+4864,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[124]),19);
        bufp->chgIData(oldp+4865,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[125]),19);
        bufp->chgIData(oldp+4866,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[126]),19);
        bufp->chgIData(oldp+4867,(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[127]),19);
        bufp->chgSData(oldp+4868,((0x3fffU & (vlSelf->SimTop__DOT__soc__DOT___icache_io_mem_req_bits_addr 
                                              >> 2U))),14);
        bufp->chgBit(oldp+4869,(vlSelf->SimTop__DOT__soc__DOT__imem__DOT____Vcellinp__mem_ext__R0_en));
        bufp->chgIData(oldp+4870,(((IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R0_en_d0)
                                    ? vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT__Memory
                                   [vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R0_addr_d0]
                                    : 0U)),32);
        bufp->chgIData(oldp+4871,(((IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_en_d0)
                                    ? vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT__Memory
                                   [vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_addr_d0]
                                    : 0U)),32);
        bufp->chgIData(oldp+4872,(((((IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_en_d0)
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
        bufp->chgQData(oldp+4873,(vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__cycle_counter),64);
        bufp->chgQData(oldp+4875,(vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__instruction_counter),64);
        bufp->chgQData(oldp+4877,(vlSelf->SimTop__DOT__soc__DOT__trace_gen__DOT__cycle_counter),64);
    }
    bufp->chgBit(oldp+4879,(vlSelf->clock));
    bufp->chgBit(oldp+4880,(vlSelf->reset));
    bufp->chgBit(oldp+4881,(vlSelf->io_success));
    bufp->chgBit(oldp+4882,(vlSelf->io_finished));
}

void VSimTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_cleanup\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
