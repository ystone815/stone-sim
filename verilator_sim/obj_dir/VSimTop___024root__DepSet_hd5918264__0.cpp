// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop__pch.h"
#include "VSimTop___024root.h"

void VSimTop___024root___eval_act(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_act\n"); );
}

extern const VlWide<16>/*511:0*/ VSimTop__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void VSimTop___024root___nba_sequent__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ SimTop__DOT__unnamedblk1__DOT___GEN;
    SimTop__DOT__unnamedblk1__DOT___GEN = 0;
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
    QData/*63:0*/ __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__inst_counter;
    __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__inst_counter = 0;
    IData/*31:0*/ __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc;
    __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_valid;
    __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_valid = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__soc__DOT__imem__DOT__resp_valid;
    __Vdly__SimTop__DOT__soc__DOT__imem__DOT__resp_valid = 0;
    CData/*0:0*/ __Vdly__SimTop__DOT__soc__DOT__dmem__DOT__resp_valid;
    __Vdly__SimTop__DOT__soc__DOT__dmem__DOT__resp_valid = 0;
    SData/*13:0*/ __Vdlyvdim0__SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvdim0__SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvval__SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory__v0;
    __Vdlyvset__SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0;
    __Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0 = 0;
    VlWide<16>/*511:0*/ __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0;
    VL_ZERO_W(512, __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0);
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0;
    __Vdlyvset__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory__v0;
    __Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory__v0 = 0;
    IData/*18:0*/ __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory__v0;
    __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory__v0;
    __Vdlyvset__SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0;
    __Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0 = 0;
    VlWide<16>/*511:0*/ __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0;
    VL_ZERO_W(512, __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0);
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0;
    __Vdlyvset__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory__v0;
    __Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory__v0 = 0;
    IData/*18:0*/ __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory__v0;
    __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory__v0;
    __Vdlyvset__SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory__v0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_269;
    VlWide<3>/*95:0*/ __Vtemp_285;
    VlWide<4>/*127:0*/ __Vtemp_317;
    VlWide<3>/*95:0*/ __Vtemp_332;
    VlWide<3>/*95:0*/ __Vtemp_348;
    VlWide<4>/*127:0*/ __Vtemp_380;
    VlWide<8>/*255:0*/ __Vtemp_428;
    VlWide<16>/*511:0*/ __Vtemp_439;
    VlWide<4>/*127:0*/ __Vtemp_440;
    VlWide<8>/*255:0*/ __Vtemp_452;
    VlWide<16>/*511:0*/ __Vtemp_453;
    VlWide<16>/*511:0*/ __Vtemp_454;
    VlWide<16>/*511:0*/ __Vtemp_455;
    VlWide<16>/*511:0*/ __Vtemp_456;
    // Body
    __Vdlyvset__SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory__v0 = 0U;
    __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_valid 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_valid;
    __Vdly__SimTop__DOT__soc__DOT__imem__DOT__resp_valid 
        = vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_valid;
    __Vdly__SimTop__DOT__soc__DOT__dmem__DOT__resp_valid 
        = vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_valid;
    __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__inst_counter 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__inst_counter;
    __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
        = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc;
    __Vdlyvset__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory__v0 = 0U;
    SimTop__DOT__unnamedblk1__DOT___GEN = VL_MODDIV_III(32, vlSelf->SimTop__DOT__cycle_counter, (IData)(0x3e8U));
    if (VL_UNLIKELY((1U & ((0U == (0x3ffU & SimTop__DOT__unnamedblk1__DOT___GEN)) 
                           & (~ (IData)(vlSelf->reset)))))) {
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
        VL_FWRITEF(0x80000002U,"Cycle %10#: IPC=%10#/1000\n",
                   32,vlSelf->SimTop__DOT__cycle_counter,
                   32,((0ULL == vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__cycle_counter)
                        ? 0U : __Vtemp_8[0U]));
    }
    if (vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN_0) {
        __Vdlyvval__SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory__v0 
            = vlSelf->SimTop__DOT__soc__DOT__dmem__DOT____Vcellinp__mem_ext__W0_data;
        __Vdlyvset__SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory__v0 
            = (0x3fffU & (vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_addr 
                          >> 2U));
    }
    if (vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_6) {
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[0U] 
            = vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_data;
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[1U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[2U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[3U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[4U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[5U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[6U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[7U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[8U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[9U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[0xaU] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[0xbU] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[0xcU] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[0xdU] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[0xeU] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[0xfU] = 0U;
        __Vdlyvset__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0 
            = (0x7fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                        >> 6U));
        __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory__v0 
            = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
               >> 0xdU);
        __Vdlyvset__SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory__v0 
            = (0x7fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                        >> 6U));
    }
    __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_valid 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard)) 
                                                 & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__load_use_hazard)
                                                     ? (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_valid)
                                                     : (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___fetch_io_out_valid))));
    __Vdly__SimTop__DOT__soc__DOT__imem__DOT__resp_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ ((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_mem_resp_ready_0) 
                                             & (IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_valid))) 
                                         & ((IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT____Vcellinp__mem_ext__R0_en) 
                                            || (IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_valid))));
    __Vdly__SimTop__DOT__soc__DOT__dmem__DOT__resp_valid 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((~ ((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_mem_resp_ready_0) 
                                                   & (IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_valid))) 
                                               & ((IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN)
                                                   ? 
                                                  (~ (IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_wen))
                                                   : (IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_valid)))));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_127 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1fc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_127)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_126 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1f80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_126)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_57 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xe40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_57)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_56 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xe00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_56)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_55 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xdc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_55)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_54 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xd80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_54)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_53 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xd40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_53)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_52 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xd00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_52)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_51 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xcc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_51)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_50 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xc80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_50)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_49 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xc40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_49)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_48 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xc00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_48)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_47 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xbc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_47)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_46 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xb80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_46)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_45 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xb40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_45)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_44 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xb00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_44)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_43 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xac0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_43)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_42 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xa80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_42)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_41 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xa40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_41)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_40 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xa00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_40)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_39 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x9c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_39)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_38 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x980U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_38)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_37 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x940U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_37)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_36 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x900U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_36)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_35 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x8c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_35)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_34 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x880U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_34)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_33 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x840U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_33)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_32 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x800U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_32)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_31 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x7c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_31)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_30 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x780U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_30)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_29 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x740U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_29)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_28 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x700U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_28)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_11 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x2c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_11)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_10 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x280U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_10)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_9 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x240U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_9)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_7 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_7)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_6 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x180U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_6)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_5 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x140U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_5)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_4 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x100U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_4)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_3 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_3)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_2)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_1)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_0)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_8 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x200U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_8)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_12 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x300U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_12)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_13 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x340U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_13)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_14 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x380U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_14)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_15 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x3c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_15)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_16 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x400U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_16)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_17 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x440U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_17)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_18 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x480U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_18)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_84 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1500U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_84)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_19 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x4c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_19)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_20 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x500U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_20)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_21 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x540U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_21)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_22 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x580U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_22)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_23 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x5c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_23)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_24 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x600U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_24)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_25 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x640U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_25)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_26 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x680U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_26)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_27 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x6c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_27)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_58 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xe80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_58)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_59 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xec0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_59)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_60 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xf00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_60)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_61 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xf40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_61)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_62 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xf80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_62)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_63 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0xfc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_63)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_64 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1000U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_64)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_65 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1040U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_65)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_66 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1080U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_66)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_67 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x10c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_67)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_68 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1100U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_68)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_69 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1140U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_69)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_70 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1180U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_70)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_71 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x11c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_71)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_72 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1200U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_72)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_73 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1240U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_73)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_74 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1280U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_74)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_75 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x12c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_75)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_76 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1300U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_76)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_77 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1340U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_77)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_78 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1380U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_78)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_79 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x13c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_79)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_80 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1400U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_80)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_81 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1440U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_81)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_82 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1480U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_82)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_83 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x14c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_83)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_85 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1540U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_85)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_86 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1580U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_86)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_87 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x15c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_87)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_88 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1600U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_88)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_89 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1640U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_89)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_90 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1680U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_90)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_91 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x16c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_91)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_92 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1700U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_92)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_93 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1740U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_93)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_94 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1780U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_94)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_95 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x17c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_95)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_96 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1800U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_96)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_97 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1840U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_97)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_98 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1880U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_98)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_99 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x18c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_99)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_100 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1900U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_100)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_101 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1940U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_101)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_102 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1980U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_102)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_103 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x19c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_103)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_104 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1a00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_104)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_105 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1a40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_105)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_106 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1a80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_106)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_107 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1ac0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_107)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_108 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1b00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_108)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_109 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1b40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_109)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_110 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1b80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_110)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_111 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1bc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_111)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_112 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1c00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_112)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_113 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1c40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_113)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_114 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1c80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_114)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_115 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1cc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_115)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_116 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1d00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_116)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_117 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1d40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_117)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_118 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1d80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_118)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_119 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1dc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_119)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_120 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1e00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_120)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_121 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1e40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_121)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_122 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1e80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_122)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_123 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1ec0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_123)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_124 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1f00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_124)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_125 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)) 
                                                           & (0x1f40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_125)));
    if (vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_6) {
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[0U] 
            = vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_data;
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[1U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[2U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[3U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[4U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[5U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[6U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[7U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[8U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[9U] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[0xaU] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[0xbU] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[0xcU] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[0xdU] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[0xeU] = 0U;
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[0xfU] = 0U;
        __Vdlyvset__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0 
            = (0x7fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result 
                        >> 6U));
        __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory__v0 
            = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result 
               >> 0xdU);
        __Vdlyvset__SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory__v0 
            = (0x7fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result 
                        >> 6U));
    }
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_127 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1fc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_127)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_126 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1f80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_126)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_57 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xe40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_57)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_56 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xe00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_56)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_55 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xdc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_55)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_54 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xd80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_54)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_53 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xd40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_53)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_52 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xd00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_52)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_51 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xcc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_51)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_50 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xc80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_50)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_49 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xc40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_49)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_48 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xc00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_48)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_47 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xbc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_47)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_46 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xb80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_46)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_45 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xb40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_45)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_44 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xb00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_44)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_43 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xac0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_43)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_42 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xa80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_42)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_41 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xa40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_41)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_40 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xa00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_40)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_39 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x9c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_39)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_38 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x980U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_38)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_37 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x940U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_37)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_36 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x900U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_36)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_35 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x8c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_35)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_34 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x880U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_34)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_33 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x840U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_33)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_32 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x800U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_32)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_31 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x7c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_31)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_30 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x780U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_30)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_29 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x740U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_29)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_28 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x700U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_28)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_11 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x2c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_11)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_10 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x280U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_10)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_9 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x240U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_9)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_7 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_7)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_6 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x180U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_6)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_5 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x140U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_5)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_4 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x100U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_4)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_3 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_3)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_2 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_2)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_1 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_1)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_0 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_0)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_8 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x200U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_8)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_12 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x300U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_12)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_13 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x340U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_13)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_14 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x380U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_14)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_15 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x3c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_15)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_16 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x400U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_16)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_17 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x440U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_17)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_18 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x480U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_18)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_84 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1500U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_84)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_19 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x4c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_19)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_20 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x500U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_20)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_21 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x540U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_21)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_22 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x580U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_22)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_23 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x5c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_23)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_24 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x600U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_24)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_25 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x640U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_25)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_26 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x680U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_26)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_27 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x6c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_27)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_58 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xe80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_58)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_59 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xec0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_59)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_60 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xf00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_60)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_61 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xf40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_61)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_62 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xf80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_62)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_63 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0xfc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_63)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_64 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1000U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_64)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_65 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1040U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_65)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_66 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1080U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_66)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_67 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x10c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_67)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_68 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1100U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_68)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_69 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1140U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_69)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_70 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1180U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_70)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_71 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x11c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_71)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_72 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1200U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_72)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_73 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1240U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_73)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_74 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1280U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_74)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_75 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x12c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_75)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_76 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1300U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_76)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_77 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1340U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_77)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_78 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1380U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_78)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_79 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x13c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_79)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_80 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1400U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_80)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_81 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1440U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_81)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_82 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1480U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_82)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_83 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x14c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_83)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_85 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1540U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_85)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_86 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1580U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_86)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_87 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x15c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_87)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_88 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1600U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_88)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_89 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1640U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_89)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_90 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1680U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_90)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_91 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x16c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_91)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_92 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1700U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_92)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_93 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1740U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_93)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_94 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1780U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_94)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_95 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x17c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_95)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_96 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1800U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_96)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_97 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1840U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_97)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_98 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1880U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_98)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_99 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x18c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_99)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_100 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1900U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_100)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_101 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1940U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_101)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_102 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1980U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_102)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_103 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x19c0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_103)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_104 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1a00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_104)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_105 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1a40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_105)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_106 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1a80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_106)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_107 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1ac0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_107)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_108 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1b00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_108)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_109 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1b40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_109)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_110 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1b80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_110)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_111 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1bc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_111)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_112 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1c00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_112)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_113 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1c40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_113)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_114 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1c80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_114)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_115 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1cc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_115)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_116 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1d00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_116)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_117 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1d40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_117)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_118 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1d80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_118)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_119 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1dc0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_119)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_120 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1e00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_120)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_121 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1e40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_121)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_122 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1e80U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_122)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_123 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1ec0U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_123)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_124 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1f00U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_124)));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_125 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(
                                                         ((((1U 
                                                             == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
                                                            & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)) 
                                                           & (0x1f40U 
                                                              == 
                                                              (0x1fc0U 
                                                               & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result))) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)))) 
                                                 | (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_125)));
    vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_en_d0 = 0U;
    vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R1_addr_d0 
        = (0x3fffU & (vlSelf->SimTop__DOT__soc__DOT___icache_io_mem_req_bits_addr 
                      >> 2U));
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R1_en_d0 
        = vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN_0;
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R1_addr_d0 
        = (0x3fffU & (vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_addr 
                      >> 2U));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_en_d0 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT____Vcellinp__tagArray_ext__R0_en) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT___R0_en_d0 
        = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT____Vcellinp__tagArray_ext__R0_en;
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT___R0_addr_d0 
        = (0x7fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                    >> 6U));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_jump 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard)) 
                                                 & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_read 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard)) 
                                                 & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_mem_read)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT___R0_en_d0 
        = (0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_auipc 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush)) 
                                                 & ((~ 
                                                     ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h5b8071d1__0) 
                                                      | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_15))) 
                                                    & (0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_src 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush)) 
                                                 & ((0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
                                                    | ((0x33U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
                                                       & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_8) 
                                                          | ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_12)) 
                                                             & (0x67U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))))))));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_branch 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard)) 
                                                 & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_branch)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_branch_taken 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard)) 
                                                 & (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_branch) 
                                                     & (((0x80U 
                                                          & ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__ltu)) 
                                                             << 7U)) 
                                                         | (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__ltu) 
                                                             << 6U) 
                                                            | ((0x20U 
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
                                                        >> 
                                                        (7U 
                                                         & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_inst 
                                                            >> 0xcU)))) 
                                                    | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump))));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0 
        = (0x7fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result 
                    >> 6U));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT___R0_addr_d0 
        = (0x7fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result 
                    >> 6U));
    if (__Vdlyvset__SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory__v0) {
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory__v0] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__tagArray_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0) {
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0][0U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[0U];
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0][1U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[1U];
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0][2U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[2U];
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0][3U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[3U];
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0][4U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[4U];
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0][5U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[5U];
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0][6U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[6U];
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0][7U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[7U];
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0][8U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[8U];
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0][9U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[9U];
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0][0xaU] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[0xaU];
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0][0xbU] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[0xbU];
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0][0xcU] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[0xcU];
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0][0xdU] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[0xdU];
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0][0xeU] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[0xeU];
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0][0xfU] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory__v0[0xfU];
    }
    if (__Vdlyvset__SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory__v0) {
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory__v0] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dcache__DOT__tagArray_ext__DOT__Memory__v0;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__soc__DOT__trace_gen__DOT__cycle_counter = 0ULL;
        vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__cycle_counter = 0ULL;
        vlSelf->SimTop__DOT__cycle_counter = 0U;
    } else {
        vlSelf->SimTop__DOT__soc__DOT__trace_gen__DOT__cycle_counter 
            = (1ULL + vlSelf->SimTop__DOT__soc__DOT__trace_gen__DOT__cycle_counter);
        vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__cycle_counter 
            = (1ULL + vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__cycle_counter);
        vlSelf->SimTop__DOT__cycle_counter = ((IData)(1U) 
                                              + vlSelf->SimTop__DOT__cycle_counter);
    }
    vlSelf->io_success = ((9U < vlSelf->SimTop__DOT__cycle_counter) 
                          & (0x65U > vlSelf->SimTop__DOT__cycle_counter));
    vlSelf->io_finished = (0x63U < vlSelf->SimTop__DOT__cycle_counter);
    __Vtemp_269[0U] = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_63)) 
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
    __Vtemp_269[1U] = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_63)) 
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
    __Vtemp_285[2U] = (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_80) 
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
    __Vtemp_317[3U] = (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__validArray_112) 
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
        = __Vtemp_269[0U];
    SimTop__DOT__soc__DOT__icache__DOT___GEN_0[1U] 
        = __Vtemp_269[1U];
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
                                                                         | __Vtemp_285[2U])))))))))))))));
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
                                                                         | __Vtemp_317[3U])))))))))))))));
    if ((1U & (~ ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN)) 
                  | (IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_wen))))) {
        vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_data 
            = ((IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R0_en_d0)
                ? vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory
               [vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R0_addr_d0]
                : 0U);
    }
    __Vtemp_332[0U] = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_63)) 
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
    __Vtemp_332[1U] = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_63)) 
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
    __Vtemp_348[2U] = (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_80) 
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
    __Vtemp_380[3U] = (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__validArray_112) 
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
        = __Vtemp_332[0U];
    SimTop__DOT__soc__DOT__dcache__DOT___GEN_0[1U] 
        = __Vtemp_332[1U];
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
                                                                         | __Vtemp_348[2U])))))))))))))));
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
                                                                         | __Vtemp_380[3U])))))))))))))));
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__inst_counter = 0ULL;
        __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rs2_data = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs1_data = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs2_data = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs2 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs1 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_0 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_1 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_2 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_3 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_4 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_5 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_6 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_7 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_8 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_9 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_10 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_11 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_12 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_13 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_14 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_15 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_16 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_17 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_18 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_19 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_20 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_21 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_22 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_23 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_24 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_25 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_26 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_27 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_28 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_29 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_30 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_31 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__instruction_counter = 0ULL;
    } else {
        if (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_valid) {
            __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__inst_counter 
                = (1ULL + vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__inst_counter);
        }
        if (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard) {
            __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                = (((6U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT___pc_target_T)) 
                    | (4U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT___pc_target_T)))
                    ? (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_a 
                       + vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm)
                    : (((2U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT___pc_target_T)) 
                        | (1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT___pc_target_T)))
                        ? (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm 
                           + vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc)
                        : vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4));
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rs2_data = 0U;
        } else {
            __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT___pc_plus4_T;
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rs2_data 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__alu_b_reg;
        }
        if (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs1_data = 0U;
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs2_data = 0U;
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs2 = 0U;
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs1 = 0U;
        } else {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs1_data 
                = ((0U == (0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                    >> 0xfU))) ? 0U
                    : (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                      (0x1fU 
                                                       & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                          >> 0xfU)), 5U)))
                         ? 0U : (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[
                                 (((IData)(0x1fU) + 
                                   (0x3ffU & VL_SHIFTL_III(10,10,32, 
                                                           (0x1fU 
                                                            & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                               >> 0xfU)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                     >> 0xfU)), 5U))))) 
                       | (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[
                          (0x1fU & (VL_SHIFTL_III(10,10,32, 
                                                  (0x1fU 
                                                   & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                      >> 0xfU)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                     >> 0xfU)), 5U)))));
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs2_data 
                = ((0U == (0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                    >> 0x14U))) ? 0U
                    : (((0U == (0x1fU & VL_SHIFTL_III(10,10,32, 
                                                      (0x1fU 
                                                       & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                          >> 0x14U)), 5U)))
                         ? 0U : (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[
                                 (((IData)(0x1fU) + 
                                   (0x3ffU & VL_SHIFTL_III(10,10,32, 
                                                           (0x1fU 
                                                            & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                               >> 0x14U)), 5U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                     >> 0x14U)), 5U))))) 
                       | (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT___GEN[
                          (0x1fU & (VL_SHIFTL_III(10,10,32, 
                                                  (0x1fU 
                                                   & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                      >> 0x14U)), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(10,10,32, 
                                                                 (0x1fU 
                                                                  & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                     >> 0x14U)), 5U)))));
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs2 
                = (0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                            >> 0x14U));
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs1 
                = (0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                            >> 0xfU));
        }
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0 
            = (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_ctrl_reg_write) 
                & ((0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)) 
                   & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_valid))) 
               & (0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)));
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (~ (IData)((0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_0 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_1 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (2U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_2 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (3U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_3 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (4U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_4 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (5U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_5 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (6U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_6 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (7U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_7 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (8U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_8 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (9U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_9 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0xaU == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_10 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0xbU == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_11 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0xcU == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_12 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0xdU == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_13 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0xeU == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_14 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0xfU == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_15 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0x10U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_16 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0x11U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_17 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0x12U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_18 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0x13U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_19 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0x14U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_20 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0x15U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_21 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0x16U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_22 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0x17U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_23 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0x18U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_24 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0x19U == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_25 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0x1aU == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_26 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0x1bU == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_27 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0x1cU == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_28 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0x1dU == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_29 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0x1eU == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_30 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        if (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT___GEN_0) 
             & (0x1fU == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__regfile__DOT__regfile_31 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result;
        }
        vlSelf->SimTop__DOT__soc__DOT__perf_monitor__DOT__perf_monitor__DOT__instruction_counter 
            = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__inst_counter;
    }
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__inst_counter 
        = __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__inst_counter;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_mem_read 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush)) 
                                                 & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT__ctrl_sigs_mem_read)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_branch 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush)) 
                                                 & ((~ 
                                                     ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h832d9e96__0) 
                                                      | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_8))) 
                                                    & (0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))));
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
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_valid 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_valid));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_ctrl_reg_write 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_reg_write));
    __Vtemp_428[0U] = (((- (IData)((1U & (vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits 
                                          >> 7U)))) 
                        << 8U) | (0xffU & vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits));
    __Vtemp_428[1U] = (((- (IData)((1U & (vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits));
    __Vtemp_428[2U] = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits)) 
                                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits))));
    __Vtemp_428[3U] = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits))) 
                               >> 0x20U));
    __Vtemp_428[4U] = (0xffU & vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits);
    __Vtemp_428[5U] = (0xffffU & vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits);
    __Vtemp_428[6U] = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits)) 
                                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits))));
    __Vtemp_428[7U] = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits))) 
                               >> 0x20U));
    if (__Vdlyvset__SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory__v0) {
        vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory__v0] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory__v0;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc = 0U;
        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state = 0U;
    } else {
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc 
            = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush)
                ? 0U : vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_pc);
        if (vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_cpu_req_ready) {
            if (vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN) {
                if (vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit) {
                    if (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write) {
                        vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state = 2U;
                    }
                } else {
                    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state = 1U;
                }
            }
        } else if (((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_3)
                     ? (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4)
                     : ((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_7) 
                        & ((IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_valid) 
                           | (~ (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_mem_req_valid_0)))))) {
            vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state = 0U;
        }
    }
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_valid 
        = __Vdly__SimTop__DOT__soc__DOT__dmem__DOT__resp_valid;
    vlSelf->__VdfgTmp_h3ccf2380__0 = vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT__Memory
        [vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R1_addr_d0];
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R0_addr_d0 
        = (0x3fffU & (vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_addr 
                      >> 2U));
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__mem_ext__DOT___R0_en_d0 
        = ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_wen)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_cpu_req_ready 
        = (0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_3 
        = (1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_7 
        = (2U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_mem_resp_ready_0 
        = ((0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
           & ((1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
              | (2U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state))));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard)) 
                                                 & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_mem_write)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_valid 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard)) 
                                                 & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_valid)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_reg_write 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard)) 
                                                 & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_reg_write)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rd));
    SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_2 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_ctrl_reg_write) 
           & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_valid) 
              & (0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_rd))));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__mem_wb__DOT__reg_result 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_to_reg)
                                           ? (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, 
                                                                 (7U 
                                                                  & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                                     >> 0xcU)), 5U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_428[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (7U 
                                                                       & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                                          >> 0xcU)), 5U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, 
                                                                     (7U 
                                                                      & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                                         >> 0xcU)), 5U))))) 
                                              | (__Vtemp_428[
                                                 (7U 
                                                  & (VL_SHIFTL_III(8,8,32, 
                                                                   (7U 
                                                                    & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                                       >> 0xcU)), 5U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (7U 
                                                                   & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
                                                                      >> 0xcU)), 5U))))
                                           : vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_to_reg 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard)) 
                                                 & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_mem_to_reg)));
    __Vtemp_439[0U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                       + vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_439[1U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                       - vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_439[2U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                       & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_439[3U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                       | vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_439[4U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                       ^ vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_439[5U] = VL_LTS_III(32, vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a, vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_439[6U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                       < vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b);
    __Vtemp_439[7U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                       << (0x1fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b));
    __Vtemp_439[8U] = (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a 
                       >> (0x1fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b));
    __Vtemp_439[9U] = VL_SHIFTRS_III(32,32,5, vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_a, 
                                     (0x1fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT____Vcellinp__alu__io_b));
    __Vtemp_439[0xaU] = 0U;
    __Vtemp_439[0xbU] = 0U;
    __Vtemp_439[0xcU] = 0U;
    __Vtemp_439[0xdU] = 0U;
    __Vtemp_439[0xeU] = 0U;
    __Vtemp_439[0xfU] = 0U;
    __Vtemp_440[0U] = (((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U)))
                         ? 0U : (__Vtemp_439[(((IData)(0x1fU) 
                                               + (0x1ffU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U))) 
                                              >> 5U)] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U))))) 
                       | (__Vtemp_439[(0xfU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U) 
                                               >> 5U))] 
                          >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op), 5U))));
    __Vtemp_440[1U] = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4;
    __Vtemp_440[2U] = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4)) 
                                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm))));
    __Vtemp_440[3U] = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm))) 
                               >> 0x20U));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_mem_resp_ready_0) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_valid));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_5 
        = ((1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_4));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN 
        = ((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
           & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_read) 
              | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_mem_write 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush)) 
                                                 & ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6)) 
                                                    & (0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_valid 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush)) 
                                                 & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_valid)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_reg_write 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush)) 
                                                 & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6) 
                                                    | ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_11)) 
                                                       & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_15) 
                                                          | (0x17U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))))));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_pc = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rd = 0U;
    } else if (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard) {
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_pc = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rd = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__load_use_hazard)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_pc 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc;
        }
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rd 
            = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rd;
    }
    SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_reg_write) 
           & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_valid) 
              & (0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rd))));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_mem_to_reg 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush)) 
                                                 & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT__ctrl_sigs_mem_read)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_inst 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard)
                                           ? 0U : vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_inst));
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
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard)
                                           ? 0U : (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(7,7,32, 
                                                                      (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_lui) 
                                                                        << 1U) 
                                                                       | ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr) 
                                                                          | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump))), 5U)))
                                                     ? 0U
                                                     : 
                                                    (__Vtemp_440[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7fU 
                                                        & VL_SHIFTL_III(7,7,32, 
                                                                        (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_lui) 
                                                                          << 1U) 
                                                                         | ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr) 
                                                                            | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump))), 5U))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(7,7,32, 
                                                                       (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_lui) 
                                                                         << 1U) 
                                                                        | ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr) 
                                                                           | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump))), 5U))))) 
                                                   | (__Vtemp_440[
                                                      (3U 
                                                       & (VL_SHIFTL_III(7,7,32, 
                                                                        (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_lui) 
                                                                          << 1U) 
                                                                         | ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr) 
                                                                            | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump))), 5U) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(7,7,32, 
                                                                       (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_lui) 
                                                                         << 1U) 
                                                                        | ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr) 
                                                                           | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump))), 5U))))));
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
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush)) 
                                                 & ((~ 
                                                     ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6) 
                                                      | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_11))) 
                                                    & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h198d7daa__0))));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_lui 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush)) 
                                                 & ((~ 
                                                     ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h5b8071d1__0) 
                                                      | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h198d7daa__0))) 
                                                    & (0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush)) 
                                                 & ((~ 
                                                     ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_he2fd0082__0) 
                                                      | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_12))) 
                                                    & (0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)))));
    __Vtemp_452[0U] = (IData)((((QData)((IData)((0xfffffU 
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
    __Vtemp_452[1U] = (IData)(((((QData)((IData)((0xfffffU 
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
    __Vtemp_452[2U] = (((- (IData)((vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                      >> 7U)))));
    __Vtemp_452[3U] = (0xfffff000U & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst);
    __Vtemp_452[4U] = (((- (IData)((vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                    >> 0x1fU))) << 0x14U) 
                       | ((0xff000U & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst) 
                          | ((0x800U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                        >> 9U)) | (0x7feU 
                                                   & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                      >> 0x14U)))));
    __Vtemp_452[5U] = 0U;
    __Vtemp_452[6U] = 0U;
    __Vtemp_452[7U] = 0U;
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_6 
        = ((0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_5));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT____Vcellinp__tagArray_ext__R0_en 
        = ((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_valid 
        = __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_valid;
    SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_0 
        = ((IData)(SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN) 
           & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rd) 
              == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs1)));
    SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN_1 
        = ((IData)(SimTop__DOT__soc__DOT__cpu__DOT__forward__DOT___GEN) 
           & ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_rd) 
              == (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rs2)));
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
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_2 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit));
    vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_mem_req_valid_0 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT____Vcellinp__tagArray_ext__R0_en) 
           & ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__hit)) 
              | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write)));
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
    if (vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_en_d0) {
        __Vtemp_453[0U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0U];
        __Vtemp_453[1U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][1U];
        __Vtemp_453[2U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][2U];
        __Vtemp_453[3U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][3U];
        __Vtemp_453[4U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][4U];
        __Vtemp_453[5U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][5U];
        __Vtemp_453[6U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][6U];
        __Vtemp_453[7U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][7U];
        __Vtemp_453[8U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][8U];
        __Vtemp_453[9U] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][9U];
        __Vtemp_453[0xaU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xaU];
        __Vtemp_453[0xbU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xbU];
        __Vtemp_453[0xcU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xcU];
        __Vtemp_453[0xdU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xdU];
        __Vtemp_453[0xeU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xeU];
        __Vtemp_453[0xfU] = vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT__Memory
            [vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__dataArray_ext__DOT___R0_addr_d0][0xfU];
    } else {
        __Vtemp_453[0U] = VSimTop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_453[1U] = VSimTop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_453[2U] = VSimTop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_453[3U] = VSimTop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_453[4U] = VSimTop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_453[5U] = VSimTop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_453[6U] = VSimTop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_453[7U] = VSimTop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_453[8U] = VSimTop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_453[9U] = VSimTop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_453[0xaU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_453[0xbU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_453[0xcU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_453[0xdU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_453[0xeU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_453[0xfU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_454, __Vtemp_453, 
                  (0x1e0U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_alu_result 
                             << 3U)));
    vlSelf->SimTop__DOT__soc__DOT___dcache_io_cpu_resp_bits 
        = ((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__state))
            ? ((1U & ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_2)) 
                      | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_mem_write)))
                ? 0U : __Vtemp_454[0U]) : ((IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT___GEN_5)
                                            ? vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_data
                                            : 0U));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT___pc_target_T 
        = (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jalr) 
            << 2U) | (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_jump) 
                       << 1U) | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_branch)));
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN 
        = ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT__resp_valid)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__dcache__DOT__io_mem_req_valid_0));
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
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rd = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_inst = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_pc_plus4 = 0U;
        vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst = 0U;
    } else {
        if (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___hazard_io_id_ex_flush) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rd = 0U;
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_inst = 0U;
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4 = 0U;
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op = 0U;
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm = 0U;
        } else {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_rd 
                = (0x1fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                            >> 7U));
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_inst 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst;
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_pc_plus4 
                = vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_pc_plus4;
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_ctrl_alu_op 
                = (0xfU & ((0x13U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                            ? ((0x846570U | ((0xff000000U 
                                              & (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_0) 
                                                  << 0x1cU) 
                                                 | ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_0) 
                                                    << 0x18U))) 
                                             | (0x100000U 
                                                & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                   >> 0xaU)))) 
                               >> (0x1fU & VL_SHIFTL_III(5,5,32, 
                                                         (7U 
                                                          & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                             >> 0xcU)), 2U)))
                            : ((0x33U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))
                                ? ((0x846570U | ((0xff000000U 
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
                                   >> (0x1fU & VL_SHIFTL_III(5,5,32, 
                                                             (7U 
                                                              & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                                                                 >> 0xcU)), 2U)))
                                : ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_8)
                                    ? 0U : (0x63U == 
                                            (0x7fU 
                                             & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst))))));
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_imm 
                = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, 
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
                     ? 0U : (__Vtemp_452[(((IData)(0x1fU) 
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
                             ((IData)(0x20U) - (0x1fU 
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
                   | (__Vtemp_452[(7U & (VL_SHIFTL_III(8,8,32, 
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
                                         >> 5U))] >> 
                      (0x1fU & VL_SHIFTL_III(8,8,32, 
                                             ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6)
                                               ? 0U
                                               : ((0x23U 
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
                                                      : 3U))))), 5U))));
        }
        if (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_pc_plus4 = 0U;
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst = 0U;
        } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__load_use_hazard)))) {
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_pc_plus4 
                = ((IData)(4U) + vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc);
            if (vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_en_d0) {
                __Vtemp_455[0U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
                    [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0U];
                __Vtemp_455[1U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
                    [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][1U];
                __Vtemp_455[2U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
                    [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][2U];
                __Vtemp_455[3U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
                    [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][3U];
                __Vtemp_455[4U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
                    [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][4U];
                __Vtemp_455[5U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
                    [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][5U];
                __Vtemp_455[6U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
                    [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][6U];
                __Vtemp_455[7U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
                    [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][7U];
                __Vtemp_455[8U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
                    [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][8U];
                __Vtemp_455[9U] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
                    [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][9U];
                __Vtemp_455[0xaU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
                    [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xaU];
                __Vtemp_455[0xbU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
                    [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xbU];
                __Vtemp_455[0xcU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
                    [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xcU];
                __Vtemp_455[0xdU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
                    [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xdU];
                __Vtemp_455[0xeU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
                    [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xeU];
                __Vtemp_455[0xfU] = vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory
                    [vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0][0xfU];
            } else {
                __Vtemp_455[0U] = VSimTop__ConstPool__CONST_h93e1b771_0[0U];
                __Vtemp_455[1U] = VSimTop__ConstPool__CONST_h93e1b771_0[1U];
                __Vtemp_455[2U] = VSimTop__ConstPool__CONST_h93e1b771_0[2U];
                __Vtemp_455[3U] = VSimTop__ConstPool__CONST_h93e1b771_0[3U];
                __Vtemp_455[4U] = VSimTop__ConstPool__CONST_h93e1b771_0[4U];
                __Vtemp_455[5U] = VSimTop__ConstPool__CONST_h93e1b771_0[5U];
                __Vtemp_455[6U] = VSimTop__ConstPool__CONST_h93e1b771_0[6U];
                __Vtemp_455[7U] = VSimTop__ConstPool__CONST_h93e1b771_0[7U];
                __Vtemp_455[8U] = VSimTop__ConstPool__CONST_h93e1b771_0[8U];
                __Vtemp_455[9U] = VSimTop__ConstPool__CONST_h93e1b771_0[9U];
                __Vtemp_455[0xaU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xaU];
                __Vtemp_455[0xbU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xbU];
                __Vtemp_455[0xcU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xcU];
                __Vtemp_455[0xdU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xdU];
                __Vtemp_455[0xeU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xeU];
                __Vtemp_455[0xfU] = VSimTop__ConstPool__CONST_h93e1b771_0[0xfU];
            }
            VL_SHIFTR_WWI(512,512,9, __Vtemp_456, __Vtemp_455, 
                          (0x1e0U & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                                     << 3U)));
            vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst 
                = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___fetch_io_out_valid)
                    ? ((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state))
                        ? ((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_2)
                            ? __Vtemp_456[0U] : 0U)
                        : ((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_5)
                            ? vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_data
                            : 0U)) : 0U);
        }
    }
    if (__Vdlyvset__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0) {
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0][0U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[0U];
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0][1U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[1U];
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0][2U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[2U];
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0][3U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[3U];
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0][4U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[4U];
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0][5U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[5U];
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0][6U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[6U];
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0][7U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[7U];
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0][8U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[8U];
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0][9U] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[9U];
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0][0xaU] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[0xaU];
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0][0xbU] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[0xbU];
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0][0xcU] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[0xcU];
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0][0xdU] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[0xdU];
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0][0xeU] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[0xeU];
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory[__Vdlyvdim0__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0][0xfU] 
            = __Vdlyvval__SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT__Memory__v0[0xfU];
    }
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__hazard__DOT__control_hazard 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_valid) 
           & (((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_branch) 
               | (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_ctrl_jump)) 
              & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__ex_mem__DOT__reg_branch_taken)));
    vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN_0 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__dmem__DOT___GEN) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT___dcache_io_mem_req_bits_wen));
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
    if (vlSelf->SimTop__DOT__soc__DOT__imem__DOT____Vcellinp__mem_ext__R0_en) {
        vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_data 
            = ((IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R0_en_d0)
                ? vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT__Memory
               [vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R0_addr_d0]
                : 0U);
    }
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
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h832d9e96__0 
        = ((0x13U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)) 
           | (0x33U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_addr_d0 
        = (0x7fU & (vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
                    >> 6U));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__dataArray_ext__DOT___R0_en_d0 
        = ((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__hit));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state = 0U;
    } else if (vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_cpu_req_ready) {
        if (vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_cpu_req_ready) {
            if ((1U & (~ (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__hit)))) {
                vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state = 1U;
            }
        }
    } else if (((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_3)
                 ? (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4)
                 : ((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_7) 
                    & ((IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_valid) 
                       | (~ (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_mem_req_valid_0)))))) {
        vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state = 0U;
    }
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT___branch_taken_T_4 
        = (IData)(((0U == (0x7000U & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__id_ex__DOT__reg_inst)) 
                   & (IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__execute__DOT__branch_unit__DOT__eq)));
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
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc 
        = __Vdly__SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc;
    vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R0_addr_d0 
        = (0x3fffU & (vlSelf->SimTop__DOT__soc__DOT___icache_io_mem_req_bits_addr 
                      >> 2U));
    vlSelf->SimTop__DOT__soc__DOT__imem__DOT__mem_ext__DOT___R0_en_d0 
        = vlSelf->SimTop__DOT__soc__DOT__imem__DOT____Vcellinp__mem_ext__R0_en;
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_he2fd0082__0 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT___GEN_6) 
           | (0x23U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT___pc_plus4_T 
        = ((IData)(4U) + vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc);
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_h5b8071d1__0 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__decode__DOT__ctrl__DOT____VdfgTmp_he2fd0082__0) 
           | (0x63U == (0x7fU & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__if_id__DOT__reg_inst)));
    vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_valid 
        = __Vdly__SimTop__DOT__soc__DOT__imem__DOT__resp_valid;
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
    vlSelf->SimTop__DOT__soc__DOT___icache_io_mem_req_bits_addr 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__hit)
            ? vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc
            : (0xffffffc0U & vlSelf->SimTop__DOT__soc__DOT__cpu__DOT__fetch__DOT__pc));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_cpu_req_ready 
        = (0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_3 
        = (1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_7 
        = (2U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_mem_req_valid_0 
        = ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__hit)) 
           & (0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__hit));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_mem_resp_ready_0 
        = ((0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
           & ((1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
              | (2U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state))));
    vlSelf->SimTop__DOT__soc__DOT__imem__DOT____Vcellinp__mem_ext__R0_en 
        = ((~ (IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_valid)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_mem_req_valid_0));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4 
        = ((IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__io_mem_resp_ready_0) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__imem__DOT__resp_valid));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_5 
        = ((1U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_4));
    vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_6 
        = ((0U != (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state)) 
           & (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_5));
    vlSelf->SimTop__DOT__soc__DOT__cpu__DOT___fetch_io_out_valid 
        = ((0U == (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT__state))
            ? (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_2)
            : (IData)(vlSelf->SimTop__DOT__soc__DOT__icache__DOT___GEN_5));
}

void VSimTop___024root___eval_nba(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VSimTop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VSimTop___024root___eval_triggers__act(VSimTop___024root* vlSelf);

bool VSimTop___024root___eval_phase__act(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VSimTop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VSimTop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VSimTop___024root___eval_phase__nba(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VSimTop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__nba(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSimTop___024root___dump_triggers__act(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VSimTop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("SimTop.sv", 3053, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VSimTop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("SimTop.sv", 3053, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VSimTop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VSimTop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
