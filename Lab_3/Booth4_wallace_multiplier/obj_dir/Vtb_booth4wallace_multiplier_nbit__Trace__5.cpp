// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_booth4wallace_multiplier_nbit__Syms.h"


void Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0_sub_5(Vtb_booth4wallace_multiplier_nbit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0_sub_5\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 7322);
    // Body
    bufp->chgBit(oldp+0,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                         [8U] >> 0x23U)) 
                                | ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0x1fU)) 
                                   & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0x23U)))))));
    bufp->chgBit(oldp+1,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                         [8U] >> 0x2bU)) 
                                | ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0x27U)) 
                                   & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0x2bU)))))));
    bufp->chgBit(oldp+2,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                         [8U] >> 0x33U)) 
                                | ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0x2fU)) 
                                   & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0x33U)))))));
    bufp->chgBit(oldp+3,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                         [8U] >> 0x3bU)) 
                                | ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0x37U)) 
                                   & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0x3bU)))))));
}

void Vtb_booth4wallace_multiplier_nbit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_booth4wallace_multiplier_nbit___024root__trace_cleanup\n"); );
    // Init
    Vtb_booth4wallace_multiplier_nbit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_booth4wallace_multiplier_nbit___024root*>(voidSelf);
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0xfbU)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}
