// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_booth4wallace_multiplier_nbit__Syms.h"


void Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0_sub_0(Vtb_booth4wallace_multiplier_nbit___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0_sub_1(Vtb_booth4wallace_multiplier_nbit___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0_sub_2(Vtb_booth4wallace_multiplier_nbit___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0_sub_3(Vtb_booth4wallace_multiplier_nbit___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0_sub_4(Vtb_booth4wallace_multiplier_nbit___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0_sub_5(Vtb_booth4wallace_multiplier_nbit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0\n"); );
    // Init
    Vtb_booth4wallace_multiplier_nbit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_booth4wallace_multiplier_nbit___024root*>(voidSelf);
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
    Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0_sub_1((&vlSymsp->TOP), bufp);
    Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0_sub_2((&vlSymsp->TOP), bufp);
    Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0_sub_3((&vlSymsp->TOP), bufp);
    Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0_sub_4((&vlSymsp->TOP), bufp);
    Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0_sub_5((&vlSymsp->TOP), bufp);
}

void Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0_sub_0(Vtb_booth4wallace_multiplier_nbit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_booth4wallace_multiplier_nbit___024root__trace_chg_0_sub_0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    CData/*31:0*/ __Vdeeptemp_hf0fc4ce0__0;
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgQData(oldp+0,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_op1),64);
        bufp->chgQData(oldp+2,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_op2),64);
        bufp->chgQData(oldp+4,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res),64);
        bufp->chgBit(oldp+6,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_op1_signed));
        bufp->chgBit(oldp+7,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_op2_signed));
        bufp->chgBit(oldp+8,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_valid));
        bufp->chgBit(oldp+9,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_ready));
        bufp->chgQData(oldp+10,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[0]),64);
        bufp->chgQData(oldp+12,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[1]),64);
        bufp->chgQData(oldp+14,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[2]),64);
        bufp->chgQData(oldp+16,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[3]),64);
        bufp->chgQData(oldp+18,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[4]),64);
        bufp->chgQData(oldp+20,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[5]),64);
        bufp->chgQData(oldp+22,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[6]),64);
        bufp->chgQData(oldp+24,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[7]),64);
        bufp->chgQData(oldp+26,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[8]),64);
        bufp->chgQData(oldp+28,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[9]),64);
        bufp->chgQData(oldp+30,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[10]),64);
        bufp->chgQData(oldp+32,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[11]),64);
        bufp->chgQData(oldp+34,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[12]),64);
        bufp->chgQData(oldp+36,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[13]),64);
        bufp->chgQData(oldp+38,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[14]),64);
        bufp->chgQData(oldp+40,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[15]),64);
        bufp->chgQData(oldp+42,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[16]),64);
        bufp->chgQData(oldp+44,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[17]),64);
        bufp->chgQData(oldp+46,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[18]),64);
        bufp->chgQData(oldp+48,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__exp_res_list[19]),64);
        bufp->chgIData(oldp+50,((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_op1)),32);
        bufp->chgIData(oldp+51,((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_op2)),32);
        bufp->chgBit(oldp+52,((1U & (~ (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_ready)))));
        bufp->chgBit(oldp+53,(((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_op1_signed) 
                               & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_op1 
                                          >> 0x1fU)))));
        bufp->chgBit(oldp+54,(((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_op2_signed) 
                               & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_op2 
                                          >> 0x1fU)))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgQData(oldp+55,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[0]),64);
        bufp->chgQData(oldp+57,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[1]),64);
        bufp->chgQData(oldp+59,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[2]),64);
        bufp->chgQData(oldp+61,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[3]),64);
        bufp->chgQData(oldp+63,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[4]),64);
        bufp->chgQData(oldp+65,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[5]),64);
        bufp->chgQData(oldp+67,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[6]),64);
        bufp->chgQData(oldp+69,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[7]),64);
        bufp->chgQData(oldp+71,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[8]),64);
        bufp->chgQData(oldp+73,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[9]),64);
        bufp->chgQData(oldp+75,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[10]),64);
        bufp->chgQData(oldp+77,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[11]),64);
        bufp->chgQData(oldp+79,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[12]),64);
        bufp->chgQData(oldp+81,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[13]),64);
        bufp->chgQData(oldp+83,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[14]),64);
        bufp->chgQData(oldp+85,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[15]),64);
        bufp->chgQData(oldp+87,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[16]),64);
        bufp->chgQData(oldp+89,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[17]),64);
        bufp->chgQData(oldp+91,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[18]),64);
        bufp->chgQData(oldp+93,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__out_res_list[19]),64);
        bufp->chgIData(oldp+95,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__err_uu),32);
        bufp->chgIData(oldp+96,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__err_ss),32);
        bufp->chgIData(oldp+97,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__err_su),32);
        bufp->chgIData(oldp+98,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__err_us),32);
    }
    __Vdeeptemp_hf0fc4ce0__0 = ((((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((vlSelfRef.__Vm_traceActivity
                                                                                [1U] 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [4U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [8U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [9U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xaU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xbU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xcU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xdU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xeU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xfU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x10U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x11U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x12U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x13U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x14U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x15U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x16U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x17U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x18U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x19U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x1aU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x1bU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x1cU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x1dU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x1eU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x1fU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x20U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x21U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x22U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x23U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x24U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x25U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x26U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x27U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x28U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x29U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x2aU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x2bU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x2cU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x2dU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x2eU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x2fU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x30U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x31U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x32U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x33U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x34U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x35U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x36U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x37U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x38U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x39U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x3aU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x3bU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x3cU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x3dU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x3eU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x3fU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x40U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x41U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x42U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x43U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x44U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x45U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x46U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x47U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x48U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x49U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x4aU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x4bU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x4cU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x4dU]) 
                                                                               | vlSelfRef.__Vm_traceActivity
                                                                               [0x4eU]) 
                                                                              | vlSelfRef.__Vm_traceActivity
                                                                              [0x4fU]) 
                                                                             | vlSelfRef.__Vm_traceActivity
                                                                             [0x50U]) 
                                                                            | vlSelfRef.__Vm_traceActivity
                                                                            [0x51U]) 
                                                                           | vlSelfRef.__Vm_traceActivity
                                                                           [0x52U]) 
                                                                          | vlSelfRef.__Vm_traceActivity
                                                                          [0x53U]) 
                                                                         | vlSelfRef.__Vm_traceActivity
                                                                         [0x54U]) 
                                                                        | vlSelfRef.__Vm_traceActivity
                                                                        [0x55U]) 
                                                                       | vlSelfRef.__Vm_traceActivity
                                                                       [0x56U]) 
                                                                      | vlSelfRef.__Vm_traceActivity
                                                                      [0x57U]) 
                                                                     | vlSelfRef.__Vm_traceActivity
                                                                     [0x58U]) 
                                                                    | vlSelfRef.__Vm_traceActivity
                                                                    [0x59U]) 
                                                                   | vlSelfRef.__Vm_traceActivity
                                                                   [0x5aU]) 
                                                                  | vlSelfRef.__Vm_traceActivity
                                                                  [0x5bU]) 
                                                                 | vlSelfRef.__Vm_traceActivity
                                                                 [0x5cU]) 
                                                                | vlSelfRef.__Vm_traceActivity
                                                                [0x5dU]) 
                                                               | vlSelfRef.__Vm_traceActivity
                                                               [0x5eU]) 
                                                              | vlSelfRef.__Vm_traceActivity
                                                              [0x5fU]) 
                                                             | vlSelfRef.__Vm_traceActivity
                                                             [0x60U]) 
                                                            | vlSelfRef.__Vm_traceActivity
                                                            [0x61U]) 
                                                           | vlSelfRef.__Vm_traceActivity
                                                           [0x62U]) 
                                                          | vlSelfRef.__Vm_traceActivity
                                                          [0x63U]) 
                                                         | vlSelfRef.__Vm_traceActivity
                                                         [0x64U]) 
                                                        | vlSelfRef.__Vm_traceActivity
                                                        [0x65U]) 
                                                       | vlSelfRef.__Vm_traceActivity
                                                       [0x66U]) 
                                                      | vlSelfRef.__Vm_traceActivity
                                                      [0x67U]) 
                                                     | vlSelfRef.__Vm_traceActivity
                                                     [0x68U]) 
                                                    | vlSelfRef.__Vm_traceActivity
                                                    [0x69U]) 
                                                   | vlSelfRef.__Vm_traceActivity
                                                   [0x6aU]) 
                                                  | vlSelfRef.__Vm_traceActivity
                                                  [0x6bU]) 
                                                 | vlSelfRef.__Vm_traceActivity
                                                 [0x6cU]) 
                                                | vlSelfRef.__Vm_traceActivity
                                                [0x6dU]) 
                                               | vlSelfRef.__Vm_traceActivity
                                               [0x6eU]) 
                                              | vlSelfRef.__Vm_traceActivity
                                              [0x6fU]) 
                                             | vlSelfRef.__Vm_traceActivity
                                             [0x70U]) 
                                            | vlSelfRef.__Vm_traceActivity
                                            [0x71U]) 
                                           | vlSelfRef.__Vm_traceActivity
                                           [0x72U]) 
                                          | vlSelfRef.__Vm_traceActivity
                                          [0x73U]) 
                                         | vlSelfRef.__Vm_traceActivity
                                         [0x74U]) | 
                                        vlSelfRef.__Vm_traceActivity
                                        [0x75U]) | 
                                       vlSelfRef.__Vm_traceActivity
                                       [0x76U]) | vlSelfRef.__Vm_traceActivity
                                      [0x77U]) | vlSelfRef.__Vm_traceActivity
                                     [0x78U]) | vlSelfRef.__Vm_traceActivity
                                    [0x79U]) | vlSelfRef.__Vm_traceActivity
                                   [0x7aU]) | vlSelfRef.__Vm_traceActivity
                                  [0x7bU]) | vlSelfRef.__Vm_traceActivity
                                 [0x7cU]) | vlSelfRef.__Vm_traceActivity
                                [0x7dU]);
    if (VL_UNLIKELY(((((__Vdeeptemp_hf0fc4ce0__0 | 
                        vlSelfRef.__Vm_traceActivity
                        [0x7eU]) | vlSelfRef.__Vm_traceActivity
                       [0x7fU]) | vlSelfRef.__Vm_traceActivity
                      [0xfaU])))) {
        bufp->chgQData(oldp+99,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0]),64);
        bufp->chgQData(oldp+101,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1]),64);
        bufp->chgQData(oldp+103,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2]),64);
        bufp->chgQData(oldp+105,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3]),64);
        bufp->chgQData(oldp+107,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4]),64);
        bufp->chgQData(oldp+109,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5]),64);
        bufp->chgQData(oldp+111,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6]),64);
        bufp->chgQData(oldp+113,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7]),64);
        bufp->chgQData(oldp+115,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8]),64);
        bufp->chgQData(oldp+117,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9]),64);
        bufp->chgQData(oldp+119,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[10]),64);
        bufp->chgQData(oldp+121,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[11]),64);
        bufp->chgBit(oldp+123,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+124,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+125,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0xaU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+126,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+127,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+128,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0xcU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+129,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+130,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+131,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0xeU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+132,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+133,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+134,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x10U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+135,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+136,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+137,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x12U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+138,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                             [0U]))));
        bufp->chgBit(oldp+139,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+140,((1U & ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U]) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 1U))))));
        bufp->chgBit(oldp+141,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+142,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+143,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x14U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+144,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+145,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+146,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x16U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+147,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+148,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+149,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x18U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+150,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+151,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+152,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x1aU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+153,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+154,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+155,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x1cU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+156,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+157,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+158,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x1eU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+159,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+160,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+161,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x20U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+162,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+163,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+164,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x22U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+165,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+166,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+167,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x24U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+168,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+169,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+170,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x26U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+171,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+172,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+173,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 2U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 3U))))));
        bufp->chgBit(oldp+174,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+175,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+176,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x28U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+177,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+178,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+179,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x2aU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+180,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+181,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+182,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x2cU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+183,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+184,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+185,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x2eU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+186,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+187,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+188,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x30U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+189,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+190,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+191,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x32U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+192,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+193,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+194,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x34U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+195,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+196,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+197,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x36U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+198,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+199,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+200,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x38U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+201,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+202,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+203,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x3aU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+204,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+205,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+206,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 4U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 5U))))));
        bufp->chgBit(oldp+207,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+208,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+209,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x3cU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+210,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+211,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+212,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 0x3eU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 0x3fU))))));
        bufp->chgBit(oldp+213,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+214,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+215,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 6U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 7U))))));
        bufp->chgBit(oldp+216,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+217,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+218,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0U] 
                                               >> 8U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 9U))))));
        bufp->chgBit(oldp+219,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+220,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+221,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [1U] 
                                               >> 9U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+222,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+223,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+224,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [1U] 
                                               >> 0xdU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+225,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+226,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+227,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [1U] 
                                               >> 0x11U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+228,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+229,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+230,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [1U] 
                                               >> 0x15U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+231,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+232,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+233,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [1U] 
                                               >> 0x19U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+234,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+235,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+236,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [1U] 
                                               >> 0x1dU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+237,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+238,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+239,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [1U] 
                                               >> 0x21U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+240,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+241,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+242,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [1U] 
                                               >> 0x25U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+243,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+244,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+245,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [1U] 
                                               >> 1U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 3U))))));
        bufp->chgBit(oldp+246,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+247,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+248,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [1U] 
                                               >> 0x29U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+249,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+250,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+251,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [1U] 
                                               >> 0x2dU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+252,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+253,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+254,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [1U] 
                                               >> 0x31U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+255,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+256,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+257,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [1U] 
                                               >> 0x35U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+258,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+259,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+260,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [1U] 
                                               >> 0x39U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+261,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+262,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+263,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [1U] 
                                               >> 0x3dU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 0x3fU))))));
        bufp->chgBit(oldp+264,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+265,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [1U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+266,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [1U] 
                                               >> 5U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 7U))))));
        bufp->chgBit(oldp+267,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [2U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+268,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [2U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+269,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [2U] 
                                               >> 0xbU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [2U] 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+270,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [2U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+271,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [2U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+272,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [2U] 
                                               >> 0x13U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [2U] 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+273,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [2U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+274,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [2U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+275,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [2U] 
                                               >> 0x1bU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [2U] 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+276,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [2U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+277,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [2U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+278,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [2U] 
                                               >> 0x23U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [2U] 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+279,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [2U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+280,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [2U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+281,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [2U] 
                                               >> 0x2bU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [2U] 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+282,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [2U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+283,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [2U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+284,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [2U] 
                                               >> 0x33U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [2U] 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+285,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [2U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+286,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [2U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+287,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [2U] 
                                               >> 0x3bU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [2U] 
                                                 >> 0x3fU))))));
        bufp->chgBit(oldp+288,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [2U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+289,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [2U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+290,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [2U] 
                                               >> 3U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [2U] 
                                                 >> 7U))))));
        bufp->chgBit(oldp+291,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [3U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+292,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [3U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+293,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [3U] 
                                               >> 7U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [3U] 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+294,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [3U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+295,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [3U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+296,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [3U] 
                                               >> 0x17U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [3U] 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+297,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [3U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+298,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [3U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+299,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [3U] 
                                               >> 0x27U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [3U] 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+300,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [3U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+301,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [3U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+302,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [3U] 
                                               >> 0x37U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [3U] 
                                                 >> 0x3fU))))));
        bufp->chgBit(oldp+303,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [4U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+304,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [4U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+305,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [4U] 
                                               >> 0xfU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [4U] 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+306,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [4U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+307,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [4U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+308,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [4U] 
                                               >> 0x2fU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [4U] 
                                                 >> 0x3fU))))));
        bufp->chgBit(oldp+309,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [5U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+310,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [5U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+311,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [5U] 
                                               >> 0x1fU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [5U] 
                                                 >> 0x3fU))))));
        bufp->chgBit(oldp+312,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+313,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+314,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [9U] 
                                               >> 0xbU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [9U] 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+315,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+316,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+317,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [9U] 
                                               >> 0xfU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [9U] 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+318,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+319,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+320,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [9U] 
                                               >> 0x13U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [9U] 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+321,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+322,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+323,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [9U] 
                                               >> 0x17U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [9U] 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+324,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+325,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+326,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [9U] 
                                               >> 0x1bU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [9U] 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+327,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+328,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+329,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [9U] 
                                               >> 0x1fU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [9U] 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+330,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+331,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+332,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [9U] 
                                               >> 0x23U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [9U] 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+333,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+334,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+335,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [9U] 
                                               >> 0x27U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [9U] 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+336,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+337,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+338,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [9U] 
                                               >> 0x2bU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [9U] 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+339,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+340,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+341,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [9U] 
                                               >> 0x2fU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [9U] 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+342,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+343,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+344,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [9U] 
                                               >> 0x33U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [9U] 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+345,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+346,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+347,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [9U] 
                                               >> 0x37U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [9U] 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+348,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+349,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+350,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [9U] 
                                               >> 3U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [9U] 
                                                 >> 5U))))));
        bufp->chgBit(oldp+351,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+352,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+353,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [9U] 
                                               >> 0x3bU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [9U] 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+354,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+355,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [9U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+356,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [9U] 
                                               >> 7U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [9U] 
                                                 >> 9U))))));
        bufp->chgBit(oldp+357,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 9U)))));
        bufp->chgBit(oldp+358,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+359,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 9U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+360,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+361,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+362,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0xbU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+363,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+364,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+365,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0xdU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+366,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+367,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+368,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0xfU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+369,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+370,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+371,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x11U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+372,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+373,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+374,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x13U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+375,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+376,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+377,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x15U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+378,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+379,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+380,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x17U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+381,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+382,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+383,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x19U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+384,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+385,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+386,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x1bU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+387,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 1U)))));
        bufp->chgBit(oldp+388,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 2U)))));
        bufp->chgBit(oldp+389,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 1U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 2U))))));
        bufp->chgBit(oldp+390,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+391,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+392,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x1dU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+393,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+394,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+395,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x1fU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+396,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+397,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+398,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x21U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+399,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+400,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+401,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x23U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+402,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+403,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+404,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x25U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+405,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+406,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+407,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x27U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+408,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+409,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+410,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x29U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+411,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+412,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+413,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x2bU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+414,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+415,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+416,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x2dU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+417,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+418,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+419,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x2fU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+420,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 3U)))));
        bufp->chgBit(oldp+421,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 4U)))));
        bufp->chgBit(oldp+422,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 3U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 4U))))));
        bufp->chgBit(oldp+423,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+424,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+425,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x31U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+426,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+427,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+428,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x33U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+429,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+430,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+431,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x35U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+432,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+433,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+434,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x37U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+435,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+436,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+437,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x39U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+438,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+439,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+440,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x3bU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+441,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+442,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+443,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 0x3dU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+444,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 5U)))));
        bufp->chgBit(oldp+445,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 6U)))));
        bufp->chgBit(oldp+446,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 5U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 6U))))));
        bufp->chgBit(oldp+447,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 7U)))));
        bufp->chgBit(oldp+448,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [0xaU] 
                                              >> 8U)))));
        bufp->chgBit(oldp+449,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [0xaU] 
                                               >> 7U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [0xaU] 
                                                 >> 8U))))));
        bufp->chgBit(oldp+450,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [6U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+451,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [6U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+452,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [6U] 
                                               >> 0x1fU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [6U] 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+453,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [7U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+454,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [7U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+455,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [7U] 
                                               >> 0xfU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [7U] 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+456,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [7U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+457,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [7U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+458,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [7U] 
                                               >> 0x1fU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [7U] 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+459,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [7U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+460,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [7U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+461,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [7U] 
                                               >> 0x2fU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [7U] 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+462,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+463,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+464,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [8U] 
                                               >> 7U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [8U] 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+465,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+466,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+467,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [8U] 
                                               >> 0xfU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [8U] 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+468,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+469,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+470,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [8U] 
                                               >> 0x17U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [8U] 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+471,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+472,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+473,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [8U] 
                                               >> 0x1fU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [8U] 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+474,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+475,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+476,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [8U] 
                                               >> 0x27U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [8U] 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+477,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+478,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+479,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [8U] 
                                               >> 0x2fU)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [8U] 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+480,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+481,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                              [8U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+482,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                               [8U] 
                                               >> 0x37U)) 
                                      & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                 [8U] 
                                                 >> 0x3bU))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgQData(oldp+483,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0]),64);
        bufp->chgQData(oldp+485,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1]),64);
        bufp->chgQData(oldp+487,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2]),64);
        bufp->chgQData(oldp+489,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3]),64);
        bufp->chgQData(oldp+491,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4]),64);
        bufp->chgQData(oldp+493,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5]),64);
        bufp->chgQData(oldp+495,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[6]),64);
        bufp->chgQData(oldp+497,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[7]),64);
        bufp->chgQData(oldp+499,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[8]),64);
        bufp->chgQData(oldp+501,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[9]),64);
        bufp->chgQData(oldp+503,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[10]),64);
        bufp->chgQData(oldp+505,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[11]),64);
        bufp->chgQData(oldp+507,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[12]),64);
        bufp->chgQData(oldp+509,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),64);
        bufp->chgQData(oldp+511,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),64);
        bufp->chgQData(oldp+513,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2]),64);
        bufp->chgQData(oldp+515,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3]),64);
        bufp->chgQData(oldp+517,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[4]),64);
        bufp->chgQData(oldp+519,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[5]),64);
        bufp->chgQData(oldp+521,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[6]),64);
        bufp->chgQData(oldp+523,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[7]),64);
        bufp->chgQData(oldp+525,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[8]),64);
        bufp->chgQData(oldp+527,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0]),64);
        bufp->chgQData(oldp+529,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1]),64);
        bufp->chgQData(oldp+531,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2]),64);
        bufp->chgQData(oldp+533,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3]),64);
        bufp->chgQData(oldp+535,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4]),64);
        bufp->chgQData(oldp+537,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5]),64);
        bufp->chgQData(oldp+539,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[6]),64);
        bufp->chgQData(oldp+541,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[7]),64);
        bufp->chgQData(oldp+543,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[8]),64);
        bufp->chgQData(oldp+545,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),64);
        bufp->chgQData(oldp+547,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),64);
        bufp->chgQData(oldp+549,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2]),64);
        bufp->chgQData(oldp+551,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3]),64);
        bufp->chgQData(oldp+553,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[4]),64);
        bufp->chgQData(oldp+555,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[5]),64);
        bufp->chgQData(oldp+557,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0]),64);
        bufp->chgQData(oldp+559,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1]),64);
        bufp->chgQData(oldp+561,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2]),64);
        bufp->chgQData(oldp+563,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3]),64);
        bufp->chgQData(oldp+565,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4]),64);
        bufp->chgQData(oldp+567,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5]),64);
        bufp->chgQData(oldp+569,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),64);
        bufp->chgQData(oldp+571,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),64);
        bufp->chgQData(oldp+573,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2]),64);
        bufp->chgQData(oldp+575,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3]),64);
        bufp->chgQData(oldp+577,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0]),64);
        bufp->chgQData(oldp+579,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1]),64);
        bufp->chgQData(oldp+581,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2]),64);
        bufp->chgQData(oldp+583,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3]),64);
        bufp->chgQData(oldp+585,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),64);
        bufp->chgQData(oldp+587,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),64);
        bufp->chgQData(oldp+589,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2]),64);
        bufp->chgQData(oldp+591,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0]),64);
        bufp->chgQData(oldp+593,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1]),64);
        bufp->chgQData(oldp+595,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2]),64);
        bufp->chgQData(oldp+597,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),64);
        bufp->chgQData(oldp+599,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),64);
        bufp->chgQData(oldp+601,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0]),64);
        bufp->chgQData(oldp+603,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1]),64);
        bufp->chgQData(oldp+605,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),64);
        bufp->chgQData(oldp+607,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),64);
        bufp->chgQData(oldp+609,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [1U]),64);
        bufp->chgQData(oldp+611,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [2U]),64);
        bufp->chgQData(oldp+613,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [3U]),64);
        bufp->chgQData(oldp+615,(vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit.out_op1),64);
        bufp->chgQData(oldp+617,(VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U)),64);
        bufp->chgQData(oldp+619,(vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit.__PVT__cout),64);
        bufp->chgBit(oldp+621,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U]))));
        bufp->chgBit(oldp+622,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U]))));
        bufp->chgBit(oldp+623,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [3U]))));
        bufp->chgBit(oldp+624,((1U & (((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U]) 
                                       & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U])) 
                                      | (((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U]) 
                                          | (IData)(
                                                    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [1U])) 
                                         & (IData)(
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [3U]))))));
        bufp->chgBit(oldp+625,((1U & ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U]) 
                                      ^ ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U]) 
                                         ^ (IData)(
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [3U]))))));
        bufp->chgBit(oldp+626,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+627,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+628,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+629,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0xaU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0xaU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xaU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0xaU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+630,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0xaU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0xaU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+631,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+632,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+633,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+634,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0xbU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0xbU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xbU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0xbU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+635,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0xbU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0xbU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+636,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+637,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+638,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+639,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0xcU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0xcU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xcU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0xcU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+640,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0xcU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0xcU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+641,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+642,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+643,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+644,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0xdU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0xdU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xdU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0xdU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+645,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0xdU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0xdU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+646,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+647,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+648,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+649,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0xeU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0xeU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xeU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0xeU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+650,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0xeU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0xeU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+651,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+652,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+653,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+654,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0xfU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0xfU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xfU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0xfU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+655,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0xfU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0xfU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+656,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+657,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+658,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+659,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x10U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x10U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x10U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x10U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+660,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x10U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x10U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+661,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+662,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+663,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+664,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x11U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x11U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x11U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x11U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+665,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x11U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x11U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+666,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+667,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+668,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+669,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x12U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x12U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x12U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x12U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+670,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x12U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x12U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+671,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+672,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+673,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+674,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x13U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x13U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x13U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x13U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+675,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x13U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x13U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+676,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+677,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+678,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+679,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 1U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 1U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 1U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 1U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+680,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 1U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 1U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+681,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+682,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+683,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+684,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x14U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x14U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x14U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x14U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+685,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x14U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x14U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+686,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+687,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+688,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+689,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x15U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x15U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x15U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x15U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+690,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x15U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x15U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+691,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+692,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+693,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+694,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x16U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x16U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x16U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x16U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+695,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x16U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x16U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+696,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+697,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+698,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+699,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x17U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x17U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x17U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x17U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+700,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x17U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x17U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+701,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+702,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+703,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+704,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x18U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x18U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x18U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x18U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+705,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x18U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x18U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+706,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+707,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+708,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+709,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x19U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x19U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x19U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x19U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+710,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x19U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x19U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+711,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+712,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+713,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+714,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x1aU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x1aU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x1aU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+715,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x1aU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x1aU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+716,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+717,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+718,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+719,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x1bU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x1bU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x1bU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+720,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x1bU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x1bU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+721,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+722,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+723,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+724,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x1cU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x1cU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x1cU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+725,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x1cU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x1cU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+726,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+727,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+728,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+729,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x1dU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x1dU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x1dU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+730,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x1dU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x1dU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+731,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+732,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+733,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+734,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 2U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 2U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 2U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 2U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+735,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 2U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 2U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+736,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+737,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+738,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+739,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x1eU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x1eU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x1eU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+740,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x1eU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x1eU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+741,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+742,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+743,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+744,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x1fU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x1fU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x1fU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+745,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x1fU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x1fU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+746,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+747,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+748,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+749,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x20U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x20U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x20U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x20U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+750,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x20U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x20U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+751,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+752,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+753,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+754,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x21U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x21U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x21U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x21U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+755,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x21U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x21U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+756,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+757,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+758,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+759,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x22U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x22U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x22U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x22U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+760,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x22U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x22U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+761,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+762,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+763,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+764,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x23U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x23U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x23U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x23U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+765,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x23U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x23U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+766,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+767,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+768,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+769,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x24U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x24U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x24U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x24U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+770,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x24U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x24U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+771,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+772,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+773,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+774,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x25U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x25U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x25U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x25U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+775,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x25U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x25U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+776,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+777,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+778,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+779,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x26U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x26U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x26U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x26U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+780,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x26U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x26U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+781,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+782,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+783,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+784,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x27U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x27U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x27U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x27U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+785,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x27U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x27U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+786,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+787,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+788,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+789,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 3U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 3U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 3U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 3U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+790,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 3U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 3U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+791,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+792,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+793,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+794,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x28U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x28U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x28U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x28U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+795,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x28U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x28U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+796,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+797,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+798,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+799,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x29U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x29U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x29U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x29U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+800,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x29U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x29U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+801,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+802,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+803,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+804,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x2aU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x2aU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x2aU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+805,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x2aU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x2aU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+806,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+807,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+808,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+809,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x2bU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x2bU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x2bU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+810,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x2bU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x2bU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+811,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+812,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+813,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+814,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x2cU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x2cU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x2cU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+815,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x2cU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x2cU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+816,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+817,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+818,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+819,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x2dU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x2dU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x2dU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+820,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x2dU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x2dU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+821,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+822,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+823,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+824,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x2eU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x2eU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x2eU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+825,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x2eU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x2eU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+826,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+827,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+828,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+829,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x2fU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x2fU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x2fU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+830,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x2fU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x2fU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+831,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+832,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+833,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+834,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x30U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x30U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x30U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x30U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+835,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x30U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x30U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+836,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+837,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+838,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+839,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x31U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x31U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x31U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x31U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+840,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x31U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x31U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+841,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+842,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+843,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+844,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 4U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 4U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 4U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 4U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+845,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 4U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 4U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+846,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+847,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+848,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+849,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x32U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x32U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x32U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x32U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+850,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x32U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x32U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+851,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+852,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+853,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+854,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x33U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x33U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x33U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x33U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+855,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x33U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x33U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+856,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+857,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+858,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+859,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x34U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x34U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x34U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x34U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+860,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x34U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x34U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+861,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+862,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+863,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+864,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x35U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x35U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x35U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x35U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+865,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x35U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x35U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+866,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+867,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+868,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+869,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x36U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x36U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x36U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x36U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+870,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x36U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x36U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+871,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+872,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+873,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+874,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x37U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x37U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x37U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x37U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+875,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x37U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x37U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+876,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+877,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+878,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+879,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x38U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x38U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x38U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x38U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+880,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x38U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x38U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+881,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+882,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+883,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+884,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x39U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x39U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x39U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x39U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+885,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x39U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x39U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+886,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+887,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+888,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+889,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x3aU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x3aU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x3aU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+890,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x3aU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x3aU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+891,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+892,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+893,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+894,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x3bU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x3bU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x3bU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+895,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x3bU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x3bU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+896,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+897,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+898,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+899,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 5U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 5U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 5U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 5U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+900,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 5U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 5U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+901,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+902,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+903,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+904,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x3cU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x3cU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x3cU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+905,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x3cU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x3cU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+906,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+907,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+908,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+909,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x3dU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x3dU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x3dU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x3dU)))))));
        bufp->chgBit(oldp+910,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x3dU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x3dU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x3dU)))))));
        bufp->chgBit(oldp+911,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+912,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+913,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+914,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x3eU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x3eU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x3eU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x3eU)))))));
        bufp->chgBit(oldp+915,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x3eU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x3eU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x3eU)))))));
        bufp->chgBit(oldp+916,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+917,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+918,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+919,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 0x3fU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x3fU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x3fU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 0x3fU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x3fU)))))));
        bufp->chgBit(oldp+920,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 0x3fU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 0x3fU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 0x3fU)))))));
        bufp->chgBit(oldp+921,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+922,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+923,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+924,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 6U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 6U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 6U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 6U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+925,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 6U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 6U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+926,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+927,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+928,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+929,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 7U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 7U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 7U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 7U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+930,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 7U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 7U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+931,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+932,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+933,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+934,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 8U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 8U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 8U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 8U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+935,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 8U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 8U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+936,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+937,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+938,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+939,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                >> 9U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 9U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 9U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [1U] 
                                                     >> 9U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+940,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 9U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 9U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [3U] 
                                                    >> 9U)))))));
        bufp->chgQData(oldp+941,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [4U]),64);
        bufp->chgQData(oldp+943,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [5U]),64);
        bufp->chgQData(oldp+945,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [6U]),64);
        bufp->chgQData(oldp+947,(vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit.out_op1),64);
        bufp->chgQData(oldp+949,(VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U)),64);
        bufp->chgQData(oldp+951,(vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit.__PVT__cout),64);
        bufp->chgBit(oldp+953,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [4U]))));
        bufp->chgBit(oldp+954,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [5U]))));
        bufp->chgBit(oldp+955,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [6U]))));
        bufp->chgBit(oldp+956,((1U & (((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U]) 
                                       & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [5U])) 
                                      | (((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U]) 
                                          | (IData)(
                                                    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [4U])) 
                                         & (IData)(
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [6U]))))));
        bufp->chgBit(oldp+957,((1U & ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [4U]) 
                                      ^ ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [5U]) 
                                         ^ (IData)(
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [6U]))))));
        bufp->chgBit(oldp+958,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [4U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+959,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [5U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+960,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [6U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+961,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0xaU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U] 
                                                  >> 0xaU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0xaU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [4U] 
                                                     >> 0xaU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [6U] 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+962,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0xaU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U] 
                                                  >> 0xaU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [6U] 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+963,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [4U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+964,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [5U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+965,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [6U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+966,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0xbU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U] 
                                                  >> 0xbU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0xbU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [4U] 
                                                     >> 0xbU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [6U] 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+967,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0xbU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U] 
                                                  >> 0xbU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [6U] 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+968,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [4U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+969,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [5U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+970,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [6U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+971,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0xcU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U] 
                                                  >> 0xcU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0xcU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [4U] 
                                                     >> 0xcU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [6U] 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+972,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0xcU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U] 
                                                  >> 0xcU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [6U] 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+973,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [4U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+974,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [5U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+975,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [6U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+976,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0xdU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U] 
                                                  >> 0xdU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0xdU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [4U] 
                                                     >> 0xdU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [6U] 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+977,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0xdU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U] 
                                                  >> 0xdU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [6U] 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+978,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [4U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+979,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [5U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+980,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [6U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+981,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0xeU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U] 
                                                  >> 0xeU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0xeU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [4U] 
                                                     >> 0xeU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [6U] 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+982,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0xeU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U] 
                                                  >> 0xeU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [6U] 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+983,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [4U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+984,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [5U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+985,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [6U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+986,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0xfU)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U] 
                                                  >> 0xfU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0xfU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [4U] 
                                                     >> 0xfU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [6U] 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+987,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0xfU)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U] 
                                                  >> 0xfU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [6U] 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+988,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [4U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+989,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [5U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+990,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [6U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+991,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x10U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U] 
                                                  >> 0x10U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x10U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [4U] 
                                                     >> 0x10U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [6U] 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+992,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x10U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U] 
                                                  >> 0x10U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [6U] 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+993,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [4U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+994,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [5U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+995,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [6U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+996,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x11U)) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U] 
                                                  >> 0x11U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x11U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [4U] 
                                                     >> 0x11U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [6U] 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+997,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x11U)) 
                                      ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U] 
                                                  >> 0x11U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [6U] 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+998,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [4U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+999,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [5U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+1000,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1001,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x12U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x12U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x12U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x12U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1002,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x12U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1003,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1004,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1005,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1006,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x13U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x13U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x13U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x13U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1007,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x13U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x13U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1008,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1009,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1010,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1011,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 1U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 1U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 1U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 1U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1012,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 1U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 1U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1013,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1014,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1015,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1016,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x14U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x14U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x14U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x14U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1017,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x14U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x14U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1018,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1019,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1020,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1021,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x15U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x15U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x15U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x15U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1022,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x15U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1023,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1024,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1025,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1026,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x16U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x16U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x16U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x16U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1027,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x16U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x16U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1028,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1029,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1030,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1031,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x17U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x17U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x17U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x17U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1032,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x17U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x17U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1033,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1034,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1035,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1036,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x18U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x18U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x18U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x18U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1037,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x18U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x18U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1038,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1039,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1040,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1041,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x19U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x19U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x19U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x19U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1042,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x19U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x19U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1043,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1044,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1045,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1046,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x1aU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x1aU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x1aU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x1aU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1047,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x1aU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x1aU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1048,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1049,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1050,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1051,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x1bU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x1bU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x1bU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x1bU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1052,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x1bU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x1bU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1053,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1054,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1055,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1056,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x1cU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x1cU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x1cU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x1cU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1057,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x1cU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x1cU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1058,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1059,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1060,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1061,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x1dU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x1dU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x1dU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x1dU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1062,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x1dU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x1dU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1063,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1064,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1065,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1066,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 2U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 2U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 2U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 2U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1067,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 2U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 2U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1068,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1069,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1070,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1071,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x1eU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x1eU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x1eU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x1eU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1072,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x1eU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1073,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1074,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1075,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1076,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x1fU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x1fU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x1fU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x1fU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1077,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x1fU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x1fU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1078,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1079,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1080,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1081,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x20U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x20U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x20U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x20U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1082,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x20U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x20U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1083,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1084,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1085,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1086,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x21U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x21U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x21U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x21U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1087,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x21U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x21U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1088,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1089,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1090,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1091,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x22U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x22U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x22U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x22U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1092,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x22U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x22U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1093,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1094,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1095,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1096,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x23U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x23U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x23U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x23U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1097,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x23U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x23U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1098,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1099,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1100,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1101,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x24U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x24U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x24U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x24U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1102,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x24U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x24U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1103,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1104,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1105,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1106,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x25U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x25U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x25U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x25U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1107,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x25U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x25U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1108,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1109,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1110,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1111,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x26U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x26U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x26U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x26U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1112,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x26U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x26U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1113,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1114,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1115,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1116,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x27U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x27U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x27U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x27U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1117,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x27U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x27U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1118,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1119,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1120,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1121,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 3U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 3U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 3U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 3U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1122,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 3U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 3U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1123,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1124,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1125,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1126,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x28U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x28U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x28U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x28U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1127,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x28U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x28U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1128,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1129,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1130,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1131,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x29U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x29U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x29U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x29U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1132,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x29U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x29U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1133,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1134,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1135,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1136,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x2aU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x2aU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x2aU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x2aU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1137,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x2aU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x2aU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1138,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1139,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1140,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1141,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x2bU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x2bU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x2bU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x2bU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1142,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x2bU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x2bU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1143,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1144,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1145,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1146,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x2cU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x2cU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x2cU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x2cU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1147,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x2cU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x2cU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1148,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1149,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1150,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1151,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x2dU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x2dU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x2dU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x2dU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1152,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x2dU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x2dU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1153,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1154,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1155,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1156,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x2eU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x2eU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x2eU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x2eU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1157,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x2eU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x2eU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1158,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1159,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1160,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1161,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x2fU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x2fU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x2fU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x2fU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1162,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x2fU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x2fU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1163,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1164,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1165,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1166,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x30U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x30U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x30U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x30U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1167,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x30U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x30U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1168,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1169,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1170,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1171,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x31U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x31U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x31U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x31U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1172,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x31U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x31U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1173,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1174,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1175,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1176,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 4U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 4U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 4U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 4U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1177,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 4U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 4U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1178,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1179,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1180,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1181,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x32U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x32U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x32U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x32U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1182,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x32U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x32U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1183,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1184,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1185,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1186,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x33U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x33U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x33U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x33U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1187,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x33U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x33U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1188,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1189,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1190,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1191,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x34U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x34U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x34U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x34U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1192,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x34U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x34U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1193,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1194,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1195,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1196,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x35U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x35U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x35U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x35U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1197,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x35U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x35U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1198,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1199,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1200,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1201,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x36U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x36U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x36U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x36U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1202,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x36U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x36U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1203,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1204,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1205,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1206,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x37U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x37U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x37U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x37U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1207,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x37U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x37U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1208,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1209,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1210,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1211,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x38U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x38U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x38U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x38U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1212,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x38U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x38U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1213,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1214,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1215,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1216,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x39U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x39U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x39U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x39U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1217,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x39U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x39U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1218,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1219,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1220,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1221,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x3aU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x3aU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x3aU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x3aU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1222,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x3aU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x3aU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1223,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1224,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1225,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1226,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x3bU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x3bU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x3bU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x3bU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1227,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x3bU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x3bU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1228,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1229,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1230,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1231,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 5U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 5U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 5U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 5U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1232,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 5U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 5U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1233,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1234,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1235,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1236,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x3cU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x3cU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x3cU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x3cU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1237,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x3cU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x3cU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1238,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1239,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1240,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1241,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x3dU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x3dU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x3dU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x3dU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1242,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x3dU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x3dU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1243,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1244,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1245,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1246,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x3eU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x3eU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x3eU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x3eU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1247,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x3eU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1248,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1249,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1250,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1251,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 0x3fU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x3fU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 0x3fU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 0x3fU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+1252,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 0x3fU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 0x3fU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+1253,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1254,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1255,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1256,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 6U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 6U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 6U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 6U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1257,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 6U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 6U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1258,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1259,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1260,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1261,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 7U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 7U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 7U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 7U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1262,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 7U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 7U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1263,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1264,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1265,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1266,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 8U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 8U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 8U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 8U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1267,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 8U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 8U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1268,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1269,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1270,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1271,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 >> 9U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 9U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [5U] 
                                                    >> 9U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [4U] 
                                                      >> 9U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1272,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                >> 9U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [5U] 
                                                   >> 9U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [6U] 
                                                     >> 9U)))))));
        bufp->chgQData(oldp+1273,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                  [7U]),64);
        bufp->chgQData(oldp+1275,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                  [8U]),64);
        bufp->chgQData(oldp+1277,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                  [9U]),64);
        bufp->chgQData(oldp+1279,(vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit.out_op1),64);
        bufp->chgQData(oldp+1281,(VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U)),64);
        bufp->chgQData(oldp+1283,(vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit.__PVT__cout),64);
        bufp->chgBit(oldp+1285,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [7U]))));
        bufp->chgBit(oldp+1286,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [8U]))));
        bufp->chgBit(oldp+1287,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [9U]))));
        bufp->chgBit(oldp+1288,((1U & (((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U]) 
                                        & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [8U])) 
                                       | (((IData)(
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U]) 
                                           | (IData)(
                                                     vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [7U])) 
                                          & (IData)(
                                                    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [9U]))))));
        bufp->chgBit(oldp+1289,((1U & ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U]) 
                                       ^ ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [8U]) 
                                          ^ (IData)(
                                                    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [9U]))))));
        bufp->chgBit(oldp+1290,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1291,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1292,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1293,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0xaU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0xaU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0xaU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0xaU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1294,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0xaU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0xaU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1295,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1296,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1297,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1298,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0xbU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0xbU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0xbU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0xbU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1299,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0xbU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0xbU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1300,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1301,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1302,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1303,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0xcU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0xcU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0xcU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0xcU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1304,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0xcU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1305,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1306,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1307,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1308,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0xdU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0xdU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0xdU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0xdU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1309,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0xdU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0xdU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1310,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1311,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1312,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1313,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0xeU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0xeU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0xeU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0xeU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1314,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0xeU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0xeU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1315,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1316,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1317,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1318,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0xfU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0xfU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0xfU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0xfU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1319,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0xfU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1320,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1321,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1322,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1323,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x10U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x10U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x10U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x10U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1324,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x10U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x10U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1325,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1326,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1327,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1328,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x11U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x11U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x11U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x11U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1329,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x11U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x11U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1330,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1331,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1332,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1333,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x12U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x12U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x12U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x12U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1334,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x12U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1335,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1336,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1337,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1338,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x13U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x13U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x13U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x13U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1339,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x13U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x13U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1340,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1341,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1342,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1343,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 1U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 1U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 1U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 1U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1344,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 1U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 1U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1345,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1346,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1347,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1348,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x14U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x14U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x14U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x14U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1349,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x14U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x14U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1350,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1351,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1352,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1353,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x15U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x15U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x15U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x15U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1354,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x15U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1355,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1356,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1357,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1358,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x16U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x16U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x16U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x16U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1359,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x16U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x16U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1360,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1361,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1362,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1363,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x17U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x17U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x17U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x17U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1364,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x17U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x17U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1365,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1366,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1367,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1368,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x18U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x18U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x18U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x18U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1369,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x18U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x18U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1370,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1371,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1372,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1373,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x19U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x19U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x19U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x19U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1374,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x19U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x19U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1375,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1376,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1377,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1378,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x1aU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x1aU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x1aU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x1aU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1379,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x1aU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x1aU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1380,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1381,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1382,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1383,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x1bU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x1bU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x1bU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x1bU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1384,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x1bU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x1bU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1385,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1386,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1387,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1388,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x1cU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x1cU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x1cU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x1cU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1389,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x1cU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x1cU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1390,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1391,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1392,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1393,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x1dU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x1dU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x1dU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x1dU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1394,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x1dU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x1dU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1395,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1396,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1397,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1398,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 2U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 2U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 2U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 2U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1399,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 2U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 2U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1400,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1401,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1402,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1403,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x1eU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x1eU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x1eU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x1eU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1404,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x1eU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1405,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1406,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1407,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1408,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x1fU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x1fU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x1fU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x1fU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1409,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x1fU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x1fU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1410,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1411,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1412,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1413,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x20U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x20U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x20U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x20U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1414,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x20U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x20U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1415,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1416,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1417,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1418,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x21U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x21U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x21U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x21U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1419,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x21U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x21U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1420,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1421,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1422,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1423,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x22U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x22U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x22U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x22U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1424,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x22U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x22U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1425,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1426,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1427,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1428,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x23U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x23U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x23U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x23U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1429,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x23U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x23U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1430,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1431,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1432,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1433,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x24U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x24U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x24U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x24U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1434,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x24U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x24U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1435,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1436,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1437,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1438,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x25U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x25U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x25U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x25U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1439,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x25U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x25U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1440,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1441,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1442,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1443,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x26U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x26U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x26U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x26U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1444,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x26U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x26U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1445,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1446,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1447,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1448,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x27U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x27U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x27U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x27U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1449,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x27U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x27U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1450,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1451,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1452,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1453,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 3U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 3U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 3U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 3U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1454,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 3U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 3U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1455,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1456,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1457,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1458,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x28U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x28U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x28U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x28U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1459,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x28U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x28U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1460,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1461,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1462,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1463,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x29U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x29U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x29U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x29U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1464,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x29U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x29U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1465,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1466,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1467,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1468,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x2aU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x2aU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x2aU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x2aU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1469,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x2aU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x2aU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1470,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1471,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1472,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1473,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x2bU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x2bU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x2bU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x2bU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1474,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x2bU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x2bU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1475,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1476,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1477,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1478,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x2cU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x2cU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x2cU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x2cU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1479,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x2cU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x2cU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1480,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1481,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1482,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1483,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x2dU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x2dU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x2dU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x2dU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1484,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x2dU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x2dU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1485,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1486,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1487,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1488,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x2eU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x2eU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x2eU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x2eU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1489,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x2eU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x2eU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1490,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1491,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1492,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1493,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x2fU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x2fU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x2fU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x2fU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1494,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x2fU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x2fU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1495,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1496,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1497,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1498,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x30U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x30U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x30U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x30U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1499,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x30U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x30U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1500,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1501,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1502,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1503,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x31U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x31U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x31U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x31U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1504,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x31U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x31U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1505,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1506,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1507,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1508,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 4U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 4U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 4U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 4U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1509,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 4U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 4U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1510,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1511,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1512,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1513,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x32U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x32U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x32U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x32U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1514,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x32U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x32U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1515,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1516,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1517,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1518,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x33U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x33U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x33U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x33U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1519,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x33U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x33U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1520,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1521,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1522,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1523,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x34U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x34U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x34U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x34U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1524,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x34U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x34U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1525,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1526,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1527,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1528,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x35U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x35U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x35U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x35U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1529,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x35U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x35U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1530,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1531,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1532,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1533,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x36U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x36U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x36U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x36U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1534,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x36U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x36U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1535,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1536,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1537,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1538,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x37U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x37U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x37U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x37U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1539,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x37U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x37U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1540,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1541,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1542,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1543,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x38U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x38U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x38U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x38U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1544,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x38U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x38U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1545,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1546,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1547,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1548,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x39U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x39U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x39U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x39U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1549,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x39U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x39U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1550,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1551,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1552,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1553,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x3aU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x3aU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x3aU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x3aU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1554,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x3aU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x3aU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1555,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1556,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1557,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1558,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x3bU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x3bU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x3bU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x3bU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1559,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x3bU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x3bU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1560,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1561,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1562,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1563,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 5U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 5U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 5U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 5U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1564,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 5U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 5U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1565,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1566,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1567,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1568,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x3cU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x3cU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x3cU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x3cU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1569,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x3cU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x3cU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1570,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1571,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1572,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1573,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x3dU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x3dU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x3dU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x3dU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1574,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x3dU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x3dU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1575,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1576,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1577,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1578,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x3eU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x3eU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x3eU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x3eU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1579,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x3eU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1580,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1581,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1582,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1583,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 0x3fU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x3fU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 0x3fU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 0x3fU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+1584,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 0x3fU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 0x3fU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+1585,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1586,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1587,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1588,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 6U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 6U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 6U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 6U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1589,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 6U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 6U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1590,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1591,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1592,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1593,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 7U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 7U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 7U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 7U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1594,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 7U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 7U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1595,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1596,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1597,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1598,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 8U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 8U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 8U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 8U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1599,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 8U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 8U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1600,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1601,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1602,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1603,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 >> 9U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 9U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [8U] 
                                                    >> 9U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [7U] 
                                                      >> 9U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1604,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                >> 9U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [8U] 
                                                   >> 9U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [9U] 
                                                     >> 9U)))))));
        bufp->chgQData(oldp+1605,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                  [0xaU]),64);
        bufp->chgQData(oldp+1607,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                  [0xbU]),64);
        bufp->chgQData(oldp+1609,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                  [0xcU]),64);
        bufp->chgQData(oldp+1611,(vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__10__KET____DOT__u_op_3_to_2_nbit.out_op1),64);
        bufp->chgQData(oldp+1613,(VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__10__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U)),64);
        bufp->chgQData(oldp+1615,(vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__10__KET____DOT__u_op_3_to_2_nbit.__PVT__cout),64);
        bufp->chgBit(oldp+1617,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0xaU]))));
        bufp->chgBit(oldp+1618,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0xbU]))));
        bufp->chgBit(oldp+1619,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0xcU]))));
        bufp->chgBit(oldp+1620,((1U & (((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0xaU]) 
                                        & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0xbU])) 
                                       | (((IData)(
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU]) 
                                           | (IData)(
                                                     vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xaU])) 
                                          & (IData)(
                                                    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xcU]))))));
        bufp->chgBit(oldp+1621,((1U & ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU]) 
                                       ^ ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0xbU]) 
                                          ^ (IData)(
                                                    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xcU]))))));
        bufp->chgBit(oldp+1622,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1623,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xbU] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1624,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xcU] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1625,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xaU] 
                                                 >> 0xaU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0xaU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xbU] 
                                                    >> 0xaU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [0xaU] 
                                                      >> 0xaU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1626,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0xaU] 
                                                >> 0xaU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0xaU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1627,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1628,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xbU] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1629,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xcU] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1630,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xaU] 
                                                 >> 0xbU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0xbU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xbU] 
                                                    >> 0xbU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [0xaU] 
                                                      >> 0xbU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1631,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0xaU] 
                                                >> 0xbU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0xbU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1632,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1633,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xbU] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1634,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xcU] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1635,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xaU] 
                                                 >> 0xcU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0xcU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xbU] 
                                                    >> 0xcU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [0xaU] 
                                                      >> 0xcU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1636,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0xaU] 
                                                >> 0xcU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1637,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1638,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xbU] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1639,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xcU] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1640,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xaU] 
                                                 >> 0xdU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0xdU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xbU] 
                                                    >> 0xdU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [0xaU] 
                                                      >> 0xdU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1641,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0xaU] 
                                                >> 0xdU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0xdU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1642,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1643,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xbU] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1644,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xcU] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1645,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xaU] 
                                                 >> 0xeU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0xeU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xbU] 
                                                    >> 0xeU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [0xaU] 
                                                      >> 0xeU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1646,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0xaU] 
                                                >> 0xeU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0xeU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1647,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1648,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xbU] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1649,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xcU] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1650,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xaU] 
                                                 >> 0xfU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0xfU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xbU] 
                                                    >> 0xfU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [0xaU] 
                                                      >> 0xfU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1651,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0xaU] 
                                                >> 0xfU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1652,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1653,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xbU] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1654,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xcU] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1655,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xaU] 
                                                 >> 0x10U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0x10U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xbU] 
                                                    >> 0x10U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [0xaU] 
                                                      >> 0x10U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1656,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0xaU] 
                                                >> 0x10U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0x10U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1657,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1658,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xbU] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1659,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xcU] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1660,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xaU] 
                                                 >> 0x11U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0x11U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xbU] 
                                                    >> 0x11U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [0xaU] 
                                                      >> 0x11U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1661,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0xaU] 
                                                >> 0x11U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0x11U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1662,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1663,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xbU] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1664,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xcU] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1665,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xaU] 
                                                 >> 0x12U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0x12U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xbU] 
                                                    >> 0x12U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [0xaU] 
                                                      >> 0x12U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1666,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0xaU] 
                                                >> 0x12U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1667,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1668,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xbU] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1669,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xcU] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1670,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xaU] 
                                                 >> 0x13U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0x13U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xbU] 
                                                    >> 0x13U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [0xaU] 
                                                      >> 0x13U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1671,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0xaU] 
                                                >> 0x13U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0x13U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1672,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1673,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xbU] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1674,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xcU] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1675,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xaU] 
                                                 >> 1U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 1U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xbU] 
                                                    >> 1U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [0xaU] 
                                                      >> 1U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1676,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0xaU] 
                                                >> 1U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 1U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1677,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1678,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xbU] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1679,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xcU] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1680,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xaU] 
                                                 >> 0x14U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0x14U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xbU] 
                                                    >> 0x14U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                      [0xaU] 
                                                      >> 0x14U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1681,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0xaU] 
                                                >> 0x14U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU] 
                                                   >> 0x14U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0xcU] 
                                                     >> 0x14U)))))));
    }
}
