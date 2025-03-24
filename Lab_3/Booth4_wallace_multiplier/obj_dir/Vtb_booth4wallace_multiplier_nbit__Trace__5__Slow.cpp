// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_booth4wallace_multiplier_nbit__Syms.h"


VL_ATTR_COLD void Vtb_booth4wallace_multiplier_nbit___024root__trace_full_0_sub_5(Vtb_booth4wallace_multiplier_nbit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_booth4wallace_multiplier_nbit___024root__trace_full_0_sub_5\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+7322,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                             [8U] >> 0x23U)) 
                                    | ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                [8U] 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [8U] 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+7323,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                             [8U] >> 0x2bU)) 
                                    | ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                [8U] 
                                                >> 0x27U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [8U] 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+7324,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                             [8U] >> 0x33U)) 
                                    | ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                [8U] 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [8U] 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+7325,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                             [8U] >> 0x3bU)) 
                                    | ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                [8U] 
                                                >> 0x37U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [8U] 
                                                  >> 0x3bU)))))));
}
