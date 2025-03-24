// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_fir__Syms.h"


void Vtb_fir___024root__trace_chg_0_sub_5(Vtb_fir___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root__trace_chg_0_sub_5\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 7620);
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x202U]))) {
        bufp->chgBit(oldp+0,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x10U)) 
                                    ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x11U] 
                                                >> 0x10U)) 
                                       ^ (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x12U] 
                                                  >> 0x10U)))))));
        bufp->chgBit(oldp+1,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                            [0x10U] 
                                            >> 0x11U)))));
        bufp->chgBit(oldp+2,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                            [0x11U] 
                                            >> 0x11U)))));
        bufp->chgBit(oldp+3,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                            [0x12U] 
                                            >> 0x11U)))));
        bufp->chgBit(oldp+4,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x11U)) 
                                     & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x11U] 
                                                >> 0x11U))) 
                                    | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x11U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x10U] 
                                                   >> 0x11U))) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x12U] 
                                                  >> 0x11U)))))));
        bufp->chgBit(oldp+5,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x11U)) 
                                    ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x11U] 
                                                >> 0x11U)) 
                                       ^ (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x12U] 
                                                  >> 0x11U)))))));
        bufp->chgBit(oldp+6,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                            [0x10U] 
                                            >> 0x12U)))));
        bufp->chgBit(oldp+7,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                            [0x11U] 
                                            >> 0x12U)))));
        bufp->chgBit(oldp+8,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                            [0x12U] 
                                            >> 0x12U)))));
        bufp->chgBit(oldp+9,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x12U)) 
                                     & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x11U] 
                                                >> 0x12U))) 
                                    | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x12U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x10U] 
                                                   >> 0x12U))) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x12U] 
                                                  >> 0x12U)))))));
        bufp->chgBit(oldp+10,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x12U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x12U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x12U)))))));
        bufp->chgBit(oldp+11,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x13U)))));
        bufp->chgBit(oldp+12,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 0x13U)))));
        bufp->chgBit(oldp+13,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 0x13U)))));
        bufp->chgBit(oldp+14,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x13U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x13U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x13U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 0x13U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x13U)))))));
        bufp->chgBit(oldp+15,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x13U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x13U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x13U)))))));
        bufp->chgBit(oldp+16,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 1U)))));
        bufp->chgBit(oldp+17,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 1U)))));
        bufp->chgBit(oldp+18,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 1U)))));
        bufp->chgBit(oldp+19,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 1U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 1U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 1U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 1U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 1U)))))));
        bufp->chgBit(oldp+20,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 1U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 1U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 1U)))))));
        bufp->chgBit(oldp+21,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x14U)))));
        bufp->chgBit(oldp+22,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 0x14U)))));
        bufp->chgBit(oldp+23,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 0x14U)))));
        bufp->chgBit(oldp+24,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x14U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x14U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x14U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 0x14U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x14U)))))));
        bufp->chgBit(oldp+25,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x14U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x14U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x14U)))))));
        bufp->chgBit(oldp+26,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x15U)))));
        bufp->chgBit(oldp+27,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 0x15U)))));
        bufp->chgBit(oldp+28,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 0x15U)))));
        bufp->chgBit(oldp+29,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x15U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x15U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x15U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 0x15U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x15U)))))));
        bufp->chgBit(oldp+30,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x15U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x15U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x15U)))))));
        bufp->chgBit(oldp+31,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x16U)))));
        bufp->chgBit(oldp+32,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 0x16U)))));
        bufp->chgBit(oldp+33,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 0x16U)))));
        bufp->chgBit(oldp+34,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x16U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x16U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x16U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 0x16U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x16U)))))));
        bufp->chgBit(oldp+35,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x16U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x16U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x16U)))))));
        bufp->chgBit(oldp+36,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x17U)))));
        bufp->chgBit(oldp+37,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 0x17U)))));
        bufp->chgBit(oldp+38,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 0x17U)))));
        bufp->chgBit(oldp+39,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x17U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x17U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x17U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 0x17U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x17U)))))));
        bufp->chgBit(oldp+40,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x17U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x17U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x17U)))))));
        bufp->chgBit(oldp+41,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x18U)))));
        bufp->chgBit(oldp+42,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 0x18U)))));
        bufp->chgBit(oldp+43,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 0x18U)))));
        bufp->chgBit(oldp+44,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x18U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x18U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x18U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 0x18U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x18U)))))));
        bufp->chgBit(oldp+45,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x18U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x18U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x18U)))))));
        bufp->chgBit(oldp+46,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+47,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+48,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+49,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x19U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x19U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x19U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 0x19U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x19U)))))));
        bufp->chgBit(oldp+50,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x19U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x19U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x19U)))))));
        bufp->chgBit(oldp+51,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x1aU)))));
        bufp->chgBit(oldp+52,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 0x1aU)))));
        bufp->chgBit(oldp+53,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 0x1aU)))));
        bufp->chgBit(oldp+54,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x1aU)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x1aU))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x1aU)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 0x1aU))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x1aU)))))));
        bufp->chgBit(oldp+55,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x1aU)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x1aU)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x1aU)))))));
        bufp->chgBit(oldp+56,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x1bU)))));
        bufp->chgBit(oldp+57,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 0x1bU)))));
        bufp->chgBit(oldp+58,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 0x1bU)))));
        bufp->chgBit(oldp+59,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x1bU)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x1bU))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x1bU)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 0x1bU))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x1bU)))))));
        bufp->chgBit(oldp+60,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x1bU)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x1bU)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x1bU)))))));
        bufp->chgBit(oldp+61,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x1cU)))));
        bufp->chgBit(oldp+62,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 0x1cU)))));
        bufp->chgBit(oldp+63,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 0x1cU)))));
        bufp->chgBit(oldp+64,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x1cU)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x1cU))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x1cU)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 0x1cU))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x1cU)))))));
        bufp->chgBit(oldp+65,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x1cU)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x1cU)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x1cU)))))));
        bufp->chgBit(oldp+66,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x1dU)))));
        bufp->chgBit(oldp+67,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 0x1dU)))));
        bufp->chgBit(oldp+68,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 0x1dU)))));
        bufp->chgBit(oldp+69,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x1dU)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x1dU))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x1dU)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 0x1dU))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x1dU)))))));
        bufp->chgBit(oldp+70,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x1dU)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x1dU)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x1dU)))))));
        bufp->chgBit(oldp+71,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 2U)))));
        bufp->chgBit(oldp+72,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 2U)))));
        bufp->chgBit(oldp+73,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 2U)))));
        bufp->chgBit(oldp+74,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 2U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 2U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 2U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 2U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 2U)))))));
        bufp->chgBit(oldp+75,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 2U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 2U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 2U)))))));
        bufp->chgBit(oldp+76,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x1eU)))));
        bufp->chgBit(oldp+77,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 0x1eU)))));
        bufp->chgBit(oldp+78,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 0x1eU)))));
        bufp->chgBit(oldp+79,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x1eU)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x1eU))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x1eU)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 0x1eU))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x1eU)))))));
        bufp->chgBit(oldp+80,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x1eU)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x1eU)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x1eU)))))));
        bufp->chgBit(oldp+81,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x1fU)))));
        bufp->chgBit(oldp+82,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 0x1fU)))));
        bufp->chgBit(oldp+83,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 0x1fU)))));
        bufp->chgBit(oldp+84,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x1fU)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x1fU))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x1fU)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 0x1fU))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x1fU)))))));
        bufp->chgBit(oldp+85,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x1fU)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x1fU)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x1fU)))))));
        bufp->chgBit(oldp+86,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+87,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+88,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+89,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x20U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x20U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x20U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 0x20U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x20U)))))));
        bufp->chgBit(oldp+90,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x20U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x20U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x20U)))))));
        bufp->chgBit(oldp+91,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x21U)))));
        bufp->chgBit(oldp+92,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 0x21U)))));
        bufp->chgBit(oldp+93,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 0x21U)))));
        bufp->chgBit(oldp+94,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x21U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x21U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x21U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 0x21U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x21U)))))));
        bufp->chgBit(oldp+95,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x21U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x21U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x21U)))))));
        bufp->chgBit(oldp+96,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x10U] 
                                             >> 0x22U)))));
        bufp->chgBit(oldp+97,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x11U] 
                                             >> 0x22U)))));
        bufp->chgBit(oldp+98,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                             [0x12U] 
                                             >> 0x22U)))));
        bufp->chgBit(oldp+99,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x22U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [0x11U] 
                                                 >> 0x22U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x22U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x10U] 
                                                    >> 0x22U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x12U] 
                                                   >> 0x22U)))))));
        bufp->chgBit(oldp+100,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x22U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x22U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+101,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+102,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+103,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+104,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x23U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x23U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x23U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x23U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+105,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x23U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x23U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+106,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+107,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+108,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+109,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x24U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x24U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x24U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x24U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+110,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x24U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x24U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+111,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+112,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+113,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+114,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x25U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x25U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x25U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x25U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+115,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x25U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x25U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+116,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+117,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+118,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+119,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x26U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x26U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x26U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x26U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+120,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x26U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x26U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+121,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+122,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+123,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+124,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x27U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x27U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x27U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x27U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+125,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x27U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x27U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+126,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+127,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+128,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+129,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 3U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 3U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 3U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 3U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+130,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 3U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 3U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+131,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+132,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+133,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+134,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x28U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x28U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x28U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x28U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+135,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x28U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x28U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+136,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+137,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+138,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+139,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x29U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x29U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x29U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x29U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+140,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x29U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x29U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+141,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+142,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+143,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+144,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x2aU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x2aU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x2aU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+145,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x2aU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x2aU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+146,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+147,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+148,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+149,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x2bU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x2bU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x2bU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+150,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x2bU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x2bU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+151,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+152,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+153,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+154,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x2cU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x2cU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x2cU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+155,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x2cU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x2cU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+156,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+157,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+158,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+159,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x2dU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x2dU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x2dU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+160,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x2dU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x2dU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+161,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+162,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+163,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+164,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x2eU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x2eU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x2eU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+165,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x2eU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x2eU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+166,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+167,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+168,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+169,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x2fU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x2fU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x2fU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+170,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x2fU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x2fU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+171,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+172,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+173,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+174,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x30U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x30U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x30U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x30U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+175,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x30U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x30U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+176,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+177,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+178,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+179,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x31U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x31U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x31U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x31U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+180,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x31U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x31U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+181,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+182,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+183,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+184,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 4U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 4U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 4U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 4U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+185,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 4U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 4U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+186,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+187,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+188,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+189,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x32U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x32U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x32U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x32U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+190,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x32U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x32U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+191,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+192,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+193,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+194,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x33U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x33U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x33U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x33U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+195,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x33U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x33U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+196,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+197,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+198,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+199,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x34U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x34U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x34U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x34U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+200,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x34U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x34U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+201,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+202,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+203,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+204,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x35U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x35U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x35U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x35U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+205,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x35U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x35U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+206,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+207,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+208,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+209,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x36U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x36U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x36U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x36U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+210,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x36U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x36U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+211,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+212,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+213,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+214,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x37U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x37U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x37U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x37U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+215,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x37U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x37U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+216,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+217,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+218,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+219,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x38U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x38U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x38U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x38U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+220,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x38U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x38U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+221,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+222,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+223,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+224,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x39U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x39U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x39U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x39U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+225,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x39U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x39U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+226,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+227,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+228,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+229,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x3aU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x3aU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x3aU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+230,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x3aU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x3aU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+231,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+232,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+233,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+234,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x3bU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x3bU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x3bU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+235,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x3bU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x3bU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+236,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+237,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+238,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+239,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 5U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 5U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 5U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 5U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+240,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 5U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 5U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+241,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+242,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+243,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+244,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x3cU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x3cU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x3cU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+245,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x3cU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x3cU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+246,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+247,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+248,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+249,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x3dU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x3dU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x3dU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x3dU)))))));
        bufp->chgBit(oldp+250,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x3dU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x3dU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x3dU)))))));
        bufp->chgBit(oldp+251,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+252,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+253,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+254,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x3eU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x3eU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x3eU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x3eU)))))));
        bufp->chgBit(oldp+255,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x3eU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x3eU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x3eU)))))));
        bufp->chgBit(oldp+256,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+257,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+258,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+259,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 0x3fU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x3fU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 0x3fU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 0x3fU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x3fU)))))));
        bufp->chgBit(oldp+260,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 0x3fU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 0x3fU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 0x3fU)))))));
        bufp->chgBit(oldp+261,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+262,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+263,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+264,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 6U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 6U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 6U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 6U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+265,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 6U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 6U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+266,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+267,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+268,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+269,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 7U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 7U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 7U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 7U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+270,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 7U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 7U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+271,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+272,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+273,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+274,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 8U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 8U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 8U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 8U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+275,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 8U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 8U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+276,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x10U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+277,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x11U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+278,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [0x12U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+279,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [0x10U] 
                                                >> 9U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 9U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [0x11U] 
                                                   >> 9U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [0x10U] 
                                                     >> 9U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+280,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [0x10U] 
                                               >> 9U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [0x11U] 
                                                  >> 9U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [0x12U] 
                                                    >> 9U)))))));
    }
    bufp->chgBit(oldp+281,((((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready) 
                             & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
                                | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid))) 
                            | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))) 
                               & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)))));
    bufp->chgBit(oldp+282,(vlSelfRef.tb_fir__DOT__awvalid));
    bufp->chgIData(oldp+283,(vlSelfRef.tb_fir__DOT__awaddr),32);
    bufp->chgBit(oldp+284,(vlSelfRef.tb_fir__DOT__wvalid));
    bufp->chgIData(oldp+285,(vlSelfRef.tb_fir__DOT__wdata),32);
    bufp->chgBit(oldp+286,(vlSelfRef.tb_fir__DOT__rready));
    bufp->chgBit(oldp+287,(vlSelfRef.tb_fir__DOT__arvalid));
    bufp->chgIData(oldp+288,(vlSelfRef.tb_fir__DOT__araddr),32);
    bufp->chgIData(oldp+289,((((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                           & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                               & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                                  & vlSelfRef.tb_fir__DOT__tap_Do)) 
                              | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                                 & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                                    | (((- (IData)(
                                                   ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                       | ((- (IData)(
                                                     ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                      & (1U 
                                                         == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                          & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data))))))),32);
    bufp->chgBit(oldp+290,(vlSelfRef.tb_fir__DOT__ss_tvalid));
    bufp->chgIData(oldp+291,(vlSelfRef.tb_fir__DOT__ss_tdata),32);
    bufp->chgBit(oldp+292,(vlSelfRef.tb_fir__DOT__ss_tlast));
    bufp->chgBit(oldp+293,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__one_round_finish) 
                            | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_clr_exit_en))));
    bufp->chgBit(oldp+294,(vlSelfRef.tb_fir__DOT__sm_tready));
    bufp->chgIData(oldp+295,(((((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                         [0U] >> 1U)) 
                                ^ (IData)(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                          [0xbU])) 
                               << 1U) | (1U & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg) 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[0U])))),32);
    bufp->chgBit(oldp+296,(vlSelfRef.tb_fir__DOT__axis_clk));
    bufp->chgBit(oldp+297,(vlSelfRef.tb_fir__DOT__axis_rst_n));
    bufp->chgIData(oldp+298,(((- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena))) 
                              & vlSelfRef.tb_fir__DOT__wdata)),32);
    bufp->chgBit(oldp+299,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__core_clr_wait) 
                            | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__stream_data_EN))));
    bufp->chgIData(oldp+300,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__core_clr_wait)
                               ? 0U : ((- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__stream_data_EN))) 
                                       & vlSelfRef.tb_fir__DOT__ss_tdata))),32);
    bufp->chgIData(oldp+301,(vlSelfRef.tb_fir__DOT__u_data_ram_behave__DOT__ram
                             [vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap]),32);
    bufp->chgIData(oldp+302,(vlSelfRef.tb_fir__DOT__i),32);
    bufp->chgIData(oldp+303,(vlSelfRef.tb_fir__DOT__k),32);
    bufp->chgBit(oldp+304,(vlSelfRef.tb_fir__DOT__error));
    bufp->chgBit(oldp+305,(vlSelfRef.tb_fir__DOT__error_coef));
    bufp->chgBit(oldp+306,(vlSelfRef.tb_fir__DOT__status_error));
    bufp->chgIData(oldp+307,(vlSelfRef.tb_fir__DOT__timeout),32);
    bufp->chgBit(oldp+308,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2rdata_ena) 
                            | ((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                               | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena)))));
    bufp->chgSData(oldp+309,((0x3ffU & (((vlSelfRef.tb_fir__DOT__araddr 
                                          >> 2U) & 
                                         (- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2rdata_ena)))) 
                                        | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__addr_wr) 
                                           & (- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena))))))),10);
    bufp->chgBit(oldp+310,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__stream_data_EN));
    bufp->chgIData(oldp+311,(((- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__stream_data_EN))) 
                              & vlSelfRef.tb_fir__DOT__ss_tdata)),32);
    bufp->chgBit(oldp+312,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__core_clr_wait));
    __Vtemp_1[0U] = (IData)(((0xfffffffffffffffeULL 
                              & ((0xfffffffffffffffeULL 
                                  & vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                  [0U]) ^ (vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xbU] << 1U))) 
                             | (QData)((IData)((1U 
                                                & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg) 
                                                   ^ 
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[0U]))))));
    __Vtemp_1[1U] = (IData)((((0xfffffffffffffffeULL 
                               & ((0xfffffffffffffffeULL 
                                   & vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                   [0U]) ^ (vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                            [0xbU] 
                                            << 1U))) 
                              | (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg) 
                                                    ^ 
                                                    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[0U]))))) 
                             >> 0x20U));
    __Vtemp_1[2U] = ((0x3feU & ((0xfffffffeU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                 [0U]) ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                          [7U] << 1U))) 
                     | (1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg 
                                       >> 0x3fU)) ^ 
                              (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[2U] 
                               ^ (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                          [0xbU] >> 0x3fU))))));
    bufp->chgWData(oldp+313,(__Vtemp_1),74);
    bufp->chgIData(oldp+316,(((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                              & vlSelfRef.tb_fir__DOT__tap_Do)),32);
    bufp->chgBit(oldp+317,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req) 
                            & (IData)(vlSelfRef.tb_fir__DOT__arvalid))));
    bufp->chgBit(oldp+318,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req) 
                            & (IData)(vlSelfRef.tb_fir__DOT__awvalid))));
    bufp->chgBit(oldp+319,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
                            & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready))));
    bufp->chgBit(oldp+320,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid) 
                            & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready))));
    bufp->chgBit(oldp+321,((((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                             & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))) 
                            & (IData)(vlSelfRef.tb_fir__DOT__rready))));
    bufp->chgBit(oldp+322,(((IData)(vlSelfRef.tb_fir__DOT__wvalid) 
                            & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                               & (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))));
    bufp->chgBit(oldp+323,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2rdata_ena) 
                            | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2wdata_ena) 
                               | ((IData)((((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                                            & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready)) 
                                           & (IData)(vlSelfRef.tb_fir__DOT__rready))) 
                                  | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena))))));
    bufp->chgBit(oldp+324,((IData)((((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready)) 
                                    & (IData)(vlSelfRef.tb_fir__DOT__rready)))));
    bufp->chgIData(oldp+325,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_fir__DOT__araddr, 2U)),32);
    bufp->chgIData(oldp+326,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_fir__DOT__awaddr, 2U)),32);
    bufp->chgBit(oldp+327,((((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req) 
                             & (IData)(vlSelfRef.tb_fir__DOT__arvalid)) 
                            & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))));
    bufp->chgBit(oldp+328,((((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req) 
                             & (IData)(vlSelfRef.tb_fir__DOT__awvalid)) 
                            & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                               & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))));
    bufp->chgBit(oldp+329,(((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)) 
                            & (IData)(vlSelfRef.tb_fir__DOT__rready))));
    bufp->chgBit(oldp+330,(((IData)(vlSelfRef.tb_fir__DOT__wvalid) 
                            & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                               & (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))));
    bufp->chgBit(oldp+331,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__one_round_finish));
    bufp->chgBit(oldp+332,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_idle_exit_en) 
                            | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_clr_exit_en) 
                               | ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now)) 
                                  & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__delay_finish))))));
    bufp->chgBit(oldp+333,(((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now)) 
                            & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__delay_finish))));
    bufp->chgIData(oldp+334,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__one_round_finish)
                               ? 0U : vlSelfRef.tb_fir__DOT__tap_Do)),32);
    bufp->chgQData(oldp+335,(((0xfffffffffffffffeULL 
                               & ((0xfffffffffffffffeULL 
                                   & vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                   [0U]) ^ (vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                            [0xbU] 
                                            << 1U))) 
                              | (QData)((IData)((1U 
                                                 & ((IData)(
                                                            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg
                                                            [0U]) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg
                                                              [1U]))))))),64);
    bufp->chgQData(oldp+337,(((0xfffffffffffffffeULL 
                               & ((0xfffffffffffffffeULL 
                                   & vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                   [0U]) ^ (vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                            [0xbU] 
                                            << 1U))) 
                              | (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg) 
                                                    ^ 
                                                    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[0U])))))),64);
    bufp->chgSData(oldp+339,(((0x3feU & ((0xfffffffeU 
                                          & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                          [0U]) ^ (
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                                   [7U] 
                                                   << 1U))) 
                              | (1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg 
                                                >> 0x3fU)) 
                                       ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[2U] 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                                     [0xbU] 
                                                     >> 0x3fU))))))),10);
    bufp->chgBit(oldp+340,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [7U] >> 9U))));
    bufp->chgSData(oldp+341,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[0]),10);
    bufp->chgSData(oldp+342,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[1]),10);
    bufp->chgSData(oldp+343,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[2]),10);
    bufp->chgSData(oldp+344,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[3]),10);
    bufp->chgSData(oldp+345,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[4]),10);
    bufp->chgSData(oldp+346,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[5]),10);
    bufp->chgSData(oldp+347,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[6]),10);
    bufp->chgSData(oldp+348,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[7]),10);
    bufp->chgSData(oldp+349,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                             [7U]),10);
    bufp->chgSData(oldp+350,(((0x3feU & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                         [7U] << 1U)) 
                              | (1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                               [0xbU] 
                                               >> 0x3fU))))),10);
    bufp->chgBit(oldp+351,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                            [0U])));
    bufp->chgBit(oldp+352,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [0U] >> 1U))));
    bufp->chgBit(oldp+353,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [0U] >> 1U) | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                                  [0U] 
                                                  & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 1U))))));
    bufp->chgBit(oldp+354,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [0U] >> 2U))));
    bufp->chgBit(oldp+355,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [0U] >> 3U))));
    bufp->chgBit(oldp+356,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [0U] >> 3U) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                                   [0U] 
                                                   >> 2U) 
                                                  & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 3U))))));
    bufp->chgBit(oldp+357,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [0U] >> 4U))));
    bufp->chgBit(oldp+358,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [0U] >> 5U))));
    bufp->chgBit(oldp+359,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [0U] >> 5U) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                                   [0U] 
                                                   >> 4U) 
                                                  & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 5U))))));
    bufp->chgBit(oldp+360,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [0U] >> 6U))));
    bufp->chgBit(oldp+361,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [0U] >> 7U))));
    bufp->chgBit(oldp+362,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [0U] >> 7U) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                                   [0U] 
                                                   >> 6U) 
                                                  & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 7U))))));
    bufp->chgBit(oldp+363,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [0U] >> 8U))));
    bufp->chgBit(oldp+364,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [0U] >> 9U))));
    bufp->chgBit(oldp+365,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [0U] >> 9U) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                                   [0U] 
                                                   >> 8U) 
                                                  & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 9U))))));
    bufp->chgBit(oldp+366,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [1U] >> 1U))));
    bufp->chgBit(oldp+367,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [1U] >> 3U))));
    bufp->chgBit(oldp+368,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [1U] >> 3U) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                                   [1U] 
                                                   >> 1U) 
                                                  & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                     [1U] 
                                                     >> 3U))))));
    bufp->chgBit(oldp+369,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [1U] >> 5U))));
    bufp->chgBit(oldp+370,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [1U] >> 7U))));
    bufp->chgBit(oldp+371,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [1U] >> 7U) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                                   [1U] 
                                                   >> 5U) 
                                                  & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                     [1U] 
                                                     >> 7U))))));
    bufp->chgBit(oldp+372,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [2U] >> 3U))));
    bufp->chgBit(oldp+373,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [2U] >> 7U))));
    bufp->chgBit(oldp+374,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [2U] >> 7U) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                                   [2U] 
                                                   >> 3U) 
                                                  & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                     [2U] 
                                                     >> 7U))))));
    bufp->chgBit(oldp+375,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [4U] >> 3U))));
    bufp->chgBit(oldp+376,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [4U] >> 5U))));
    bufp->chgBit(oldp+377,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [4U] >> 5U) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                                   [4U] 
                                                   >> 3U) 
                                                  & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                     [4U] 
                                                     >> 5U))))));
    bufp->chgBit(oldp+378,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [5U] >> 1U))));
    bufp->chgBit(oldp+379,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [5U] >> 2U))));
    bufp->chgBit(oldp+380,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [5U] >> 2U) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                                   [5U] 
                                                   >> 1U) 
                                                  & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                     [5U] 
                                                     >> 2U))))));
    bufp->chgBit(oldp+381,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [5U] >> 3U))));
    bufp->chgBit(oldp+382,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [5U] >> 4U))));
    bufp->chgBit(oldp+383,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [5U] >> 4U) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                                   [5U] 
                                                   >> 3U) 
                                                  & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                     [5U] 
                                                     >> 4U))))));
    bufp->chgBit(oldp+384,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [5U] >> 5U))));
    bufp->chgBit(oldp+385,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [5U] >> 6U))));
    bufp->chgBit(oldp+386,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [5U] >> 6U) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                                   [5U] 
                                                   >> 5U) 
                                                  & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                     [5U] 
                                                     >> 6U))))));
    bufp->chgBit(oldp+387,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [5U] >> 7U))));
    bufp->chgBit(oldp+388,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [5U] >> 8U))));
    bufp->chgBit(oldp+389,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [5U] >> 8U) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                                   [5U] 
                                                   >> 7U) 
                                                  & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                     [5U] 
                                                     >> 8U))))));
    bufp->chgBit(oldp+390,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                            [6U])));
    bufp->chgBit(oldp+391,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                          [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                          [6U])))));
    bufp->chgBit(oldp+392,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [6U] >> 1U))));
    bufp->chgBit(oldp+393,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                           [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                           [6U])) >> 1U))));
    bufp->chgBit(oldp+394,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [6U] >> 2U))));
    bufp->chgBit(oldp+395,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                           [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                           [6U])) >> 2U))));
    bufp->chgBit(oldp+396,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [6U] >> 3U))));
    bufp->chgBit(oldp+397,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                           [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                           [6U])) >> 3U))));
    bufp->chgBit(oldp+398,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [6U] >> 4U))));
    bufp->chgBit(oldp+399,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                           [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                           [6U])) >> 4U))));
    bufp->chgBit(oldp+400,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [6U] >> 5U))));
    bufp->chgBit(oldp+401,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                           [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                           [6U])) >> 5U))));
    bufp->chgBit(oldp+402,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [6U] >> 6U))));
    bufp->chgBit(oldp+403,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                           [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                           [6U])) >> 6U))));
    bufp->chgBit(oldp+404,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [6U] >> 7U))));
    bufp->chgBit(oldp+405,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                           [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                           [6U])) >> 7U))));
    bufp->chgBit(oldp+406,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [6U] >> 8U))));
    bufp->chgBit(oldp+407,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                           [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                           [6U])) >> 8U))));
    bufp->chgBit(oldp+408,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [6U] >> 9U))));
    bufp->chgBit(oldp+409,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                   [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                           [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                           [6U])) >> 9U))));
    bufp->chgBit(oldp+410,((1U & (~ (IData)(vlSelfRef.tb_fir__DOT__sm_tready)))));
    bufp->chgQData(oldp+411,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder[0]),64);
    bufp->chgQData(oldp+413,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder[1]),64);
    bufp->chgBit(oldp+415,(((~ (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__one_round_finish)) 
                            & (vlSelfRef.tb_fir__DOT__tap_Do 
                               >> 0x1fU))));
    bufp->chgQData(oldp+416,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base),64);
    bufp->chgCData(oldp+418,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_sum[0]),5);
    bufp->chgCData(oldp+419,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_sum[1]),5);
    bufp->chgQData(oldp+420,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg[0]),64);
    bufp->chgQData(oldp+422,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg[1]),64);
    bufp->chgIData(oldp+424,(vlSelfRef.tb_fir__DOT__u_data_ram_behave__DOT__unnamedblk1__DOT__i),32);
    bufp->chgSData(oldp+425,(vlSelfRef.tb_fir__DOT__u_tap_ram_behave__DOT__r_A),10);
    bufp->chgBit(oldp+426,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0xbU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0xaU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0xbU)))))));
    bufp->chgBit(oldp+427,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0xdU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0xcU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0xdU)))))));
    bufp->chgBit(oldp+428,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0xfU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0xeU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0xfU)))))));
    bufp->chgBit(oldp+429,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x11U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x10U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x11U)))))));
    bufp->chgBit(oldp+430,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x13U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x12U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x13U)))))));
    bufp->chgBit(oldp+431,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 1U)) 
                                  | ((IData)(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                             [0U]) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 1U)))))));
    bufp->chgBit(oldp+432,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x15U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x14U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x15U)))))));
    bufp->chgBit(oldp+433,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x17U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x16U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x17U)))))));
    bufp->chgBit(oldp+434,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x19U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x18U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x19U)))))));
    bufp->chgBit(oldp+435,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x1bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x1aU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x1bU)))))));
    bufp->chgBit(oldp+436,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x1dU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x1cU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x1dU)))))));
    bufp->chgBit(oldp+437,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x1fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x1eU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x1fU)))))));
    bufp->chgBit(oldp+438,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x21U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x20U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x21U)))))));
    bufp->chgBit(oldp+439,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x23U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x22U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x23U)))))));
    bufp->chgBit(oldp+440,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x25U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x24U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x25U)))))));
    bufp->chgBit(oldp+441,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x27U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x26U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x27U)))))));
    bufp->chgBit(oldp+442,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 3U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 2U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 3U)))))));
    bufp->chgBit(oldp+443,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x29U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x28U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x29U)))))));
    bufp->chgBit(oldp+444,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x2bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x2aU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x2bU)))))));
    bufp->chgBit(oldp+445,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x2dU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x2cU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x2dU)))))));
    bufp->chgBit(oldp+446,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x2fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x2eU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x2fU)))))));
    bufp->chgBit(oldp+447,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x31U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x30U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x31U)))))));
    bufp->chgBit(oldp+448,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x33U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x32U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x33U)))))));
    bufp->chgBit(oldp+449,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x35U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x34U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x35U)))))));
    bufp->chgBit(oldp+450,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x37U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x36U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x37U)))))));
    bufp->chgBit(oldp+451,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x39U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x38U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x39U)))))));
    bufp->chgBit(oldp+452,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x3bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x3aU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x3bU)))))));
    bufp->chgBit(oldp+453,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 5U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 4U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 5U)))))));
    bufp->chgBit(oldp+454,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x3dU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x3cU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x3dU)))))));
    bufp->chgBit(oldp+455,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x3fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x3eU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x3fU)))))));
    bufp->chgBit(oldp+456,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 7U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 6U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 7U)))))));
    bufp->chgBit(oldp+457,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 9U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 8U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 9U)))))));
    bufp->chgBit(oldp+458,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0xbU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 9U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0xbU)))))));
    bufp->chgBit(oldp+459,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0xfU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0xdU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0xfU)))))));
    bufp->chgBit(oldp+460,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x13U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x11U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x13U)))))));
    bufp->chgBit(oldp+461,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x17U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x15U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x17U)))))));
    bufp->chgBit(oldp+462,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x1bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x19U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x1bU)))))));
    bufp->chgBit(oldp+463,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x1fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x1dU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x1fU)))))));
    bufp->chgBit(oldp+464,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x23U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x21U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x23U)))))));
    bufp->chgBit(oldp+465,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x27U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x25U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x27U)))))));
    bufp->chgBit(oldp+466,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 3U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 1U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 3U)))))));
    bufp->chgBit(oldp+467,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x2bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x29U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x2bU)))))));
    bufp->chgBit(oldp+468,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x2fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x2dU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x2fU)))))));
    bufp->chgBit(oldp+469,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x33U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x31U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x33U)))))));
    bufp->chgBit(oldp+470,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x37U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x35U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x37U)))))));
    bufp->chgBit(oldp+471,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x3bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x39U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x3bU)))))));
    bufp->chgBit(oldp+472,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x3fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x3dU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x3fU)))))));
    bufp->chgBit(oldp+473,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 7U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 5U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 7U)))))));
    bufp->chgBit(oldp+474,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [2U] >> 0xfU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0xbU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [2U] 
                                                >> 0xfU)))))));
    bufp->chgBit(oldp+475,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [2U] >> 0x17U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x13U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [2U] 
                                                >> 0x17U)))))));
    bufp->chgBit(oldp+476,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [2U] >> 0x1fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x1bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [2U] 
                                                >> 0x1fU)))))));
    bufp->chgBit(oldp+477,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [2U] >> 0x27U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x23U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [2U] 
                                                >> 0x27U)))))));
    bufp->chgBit(oldp+478,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [2U] >> 0x2fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x2bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [2U] 
                                                >> 0x2fU)))))));
    bufp->chgBit(oldp+479,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [2U] >> 0x37U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x33U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [2U] 
                                                >> 0x37U)))))));
    bufp->chgBit(oldp+480,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [2U] >> 0x3fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x3bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [2U] 
                                                >> 0x3fU)))))));
    bufp->chgBit(oldp+481,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [2U] >> 7U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 3U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [2U] 
                                                >> 7U)))))));
    bufp->chgBit(oldp+482,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [3U] >> 0xfU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [3U] 
                                              >> 7U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [3U] 
                                                >> 0xfU)))))));
    bufp->chgBit(oldp+483,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [3U] >> 0x1fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [3U] 
                                              >> 0x17U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [3U] 
                                                >> 0x1fU)))))));
    bufp->chgBit(oldp+484,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [3U] >> 0x2fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [3U] 
                                              >> 0x27U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [3U] 
                                                >> 0x2fU)))))));
    bufp->chgBit(oldp+485,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [3U] >> 0x3fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [3U] 
                                              >> 0x37U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [3U] 
                                                >> 0x3fU)))))));
    bufp->chgBit(oldp+486,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [4U] >> 0x1fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [4U] 
                                              >> 0xfU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [4U] 
                                                >> 0x1fU)))))));
    bufp->chgBit(oldp+487,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [4U] >> 0x3fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [4U] 
                                              >> 0x2fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [4U] 
                                                >> 0x3fU)))))));
    bufp->chgBit(oldp+488,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [5U] >> 0x3fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [5U] 
                                              >> 0x1fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [5U] 
                                                >> 0x3fU)))))));
    bufp->chgBit(oldp+489,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0xdU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0xbU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0xdU)))))));
    bufp->chgBit(oldp+490,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x11U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0xfU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x11U)))))));
    bufp->chgBit(oldp+491,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x15U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x13U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x15U)))))));
    bufp->chgBit(oldp+492,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x19U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x17U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x19U)))))));
    bufp->chgBit(oldp+493,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x1dU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x1bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x1dU)))))));
    bufp->chgBit(oldp+494,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x21U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x1fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x21U)))))));
    bufp->chgBit(oldp+495,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x25U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x23U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x25U)))))));
    bufp->chgBit(oldp+496,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x29U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x27U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x29U)))))));
    bufp->chgBit(oldp+497,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x2dU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x2bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x2dU)))))));
    bufp->chgBit(oldp+498,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x31U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x2fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x31U)))))));
    bufp->chgBit(oldp+499,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x35U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x33U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x35U)))))));
    bufp->chgBit(oldp+500,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x39U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x37U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x39U)))))));
    bufp->chgBit(oldp+501,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 5U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 3U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 5U)))))));
    bufp->chgBit(oldp+502,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x3dU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x3bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x3dU)))))));
    bufp->chgBit(oldp+503,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 9U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 7U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 9U)))))));
    bufp->chgBit(oldp+504,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0xaU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 9U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0xaU)))))));
    bufp->chgBit(oldp+505,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0xcU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0xbU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0xcU)))))));
    bufp->chgBit(oldp+506,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0xeU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0xdU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0xeU)))))));
    bufp->chgBit(oldp+507,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x10U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0xfU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x10U)))))));
    bufp->chgBit(oldp+508,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x12U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x11U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x12U)))))));
    bufp->chgBit(oldp+509,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x14U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x13U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x14U)))))));
    bufp->chgBit(oldp+510,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x16U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x15U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x16U)))))));
    bufp->chgBit(oldp+511,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x18U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x17U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x18U)))))));
    bufp->chgBit(oldp+512,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x1aU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x19U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x1aU)))))));
    bufp->chgBit(oldp+513,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x1cU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x1bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x1cU)))))));
    bufp->chgBit(oldp+514,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 2U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 1U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 2U)))))));
    bufp->chgBit(oldp+515,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x1eU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x1dU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x1eU)))))));
    bufp->chgBit(oldp+516,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x20U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x1fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x20U)))))));
    bufp->chgBit(oldp+517,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x22U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x21U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x22U)))))));
    bufp->chgBit(oldp+518,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x24U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x23U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x24U)))))));
    bufp->chgBit(oldp+519,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x26U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x25U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x26U)))))));
    bufp->chgBit(oldp+520,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x28U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x27U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x28U)))))));
    bufp->chgBit(oldp+521,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x2aU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x29U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x2aU)))))));
    bufp->chgBit(oldp+522,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x2cU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x2bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x2cU)))))));
    bufp->chgBit(oldp+523,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x2eU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x2dU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x2eU)))))));
    bufp->chgBit(oldp+524,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x30U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x2fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x30U)))))));
    bufp->chgBit(oldp+525,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 4U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 3U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 4U)))))));
    bufp->chgBit(oldp+526,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x32U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x31U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x32U)))))));
    bufp->chgBit(oldp+527,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x34U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x33U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x34U)))))));
    bufp->chgBit(oldp+528,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x36U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x35U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x36U)))))));
    bufp->chgBit(oldp+529,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x38U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x37U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x38U)))))));
    bufp->chgBit(oldp+530,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x3aU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x39U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x3aU)))))));
    bufp->chgBit(oldp+531,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x3cU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x3bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x3cU)))))));
    bufp->chgBit(oldp+532,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x3eU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x3dU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x3eU)))))));
    bufp->chgBit(oldp+533,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 6U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 5U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 6U)))))));
    bufp->chgBit(oldp+534,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 8U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 7U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 8U)))))));
    bufp->chgBit(oldp+535,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [6U] >> 0x2fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [6U] 
                                              >> 0x1fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [6U] 
                                                >> 0x2fU)))))));
    bufp->chgBit(oldp+536,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [7U] >> 0x17U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [7U] 
                                              >> 0xfU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [7U] 
                                                >> 0x17U)))))));
    bufp->chgBit(oldp+537,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [7U] >> 0x27U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [7U] 
                                              >> 0x1fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [7U] 
                                                >> 0x27U)))))));
    bufp->chgBit(oldp+538,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [7U] >> 0x37U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [7U] 
                                              >> 0x2fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [7U] 
                                                >> 0x37U)))))));
    bufp->chgBit(oldp+539,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [8U] >> 0xbU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 7U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [8U] 
                                                >> 0xbU)))))));
    bufp->chgBit(oldp+540,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [8U] >> 0x13U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0xfU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [8U] 
                                                >> 0x13U)))))));
    bufp->chgBit(oldp+541,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [8U] >> 0x1bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x17U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [8U] 
                                                >> 0x1bU)))))));
    bufp->chgBit(oldp+542,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [8U] >> 0x23U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x1fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [8U] 
                                                >> 0x23U)))))));
    bufp->chgBit(oldp+543,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [8U] >> 0x2bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x27U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [8U] 
                                                >> 0x2bU)))))));
    bufp->chgBit(oldp+544,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [8U] >> 0x33U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x2fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [8U] 
                                                >> 0x33U)))))));
    bufp->chgBit(oldp+545,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                           [8U] >> 0x3bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x37U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                [8U] 
                                                >> 0x3bU)))))));
    bufp->chgBit(oldp+546,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0xbU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0xaU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0xbU)))))));
    bufp->chgBit(oldp+547,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0xdU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0xcU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0xdU)))))));
    bufp->chgBit(oldp+548,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0xfU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0xeU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0xfU)))))));
    bufp->chgBit(oldp+549,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x11U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x10U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x11U)))))));
    bufp->chgBit(oldp+550,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x13U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x12U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x13U)))))));
    bufp->chgBit(oldp+551,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 1U)) 
                                  | ((IData)(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                             [0U]) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 1U)))))));
    bufp->chgBit(oldp+552,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x15U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x14U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x15U)))))));
    bufp->chgBit(oldp+553,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x17U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x16U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x17U)))))));
    bufp->chgBit(oldp+554,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x19U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x18U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x19U)))))));
    bufp->chgBit(oldp+555,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x1bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x1aU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x1bU)))))));
    bufp->chgBit(oldp+556,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x1dU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x1cU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x1dU)))))));
    bufp->chgBit(oldp+557,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x1fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x1eU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x1fU)))))));
    bufp->chgBit(oldp+558,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x21U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x20U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x21U)))))));
    bufp->chgBit(oldp+559,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x23U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x22U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x23U)))))));
    bufp->chgBit(oldp+560,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x25U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x24U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x25U)))))));
    bufp->chgBit(oldp+561,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x27U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x26U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x27U)))))));
    bufp->chgBit(oldp+562,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 3U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 2U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 3U)))))));
    bufp->chgBit(oldp+563,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x29U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x28U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x29U)))))));
    bufp->chgBit(oldp+564,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x2bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x2aU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x2bU)))))));
    bufp->chgBit(oldp+565,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x2dU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x2cU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x2dU)))))));
    bufp->chgBit(oldp+566,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x2fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x2eU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x2fU)))))));
    bufp->chgBit(oldp+567,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x31U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x30U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x31U)))))));
    bufp->chgBit(oldp+568,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x33U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x32U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x33U)))))));
    bufp->chgBit(oldp+569,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x35U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x34U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x35U)))))));
    bufp->chgBit(oldp+570,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x37U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x36U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x37U)))))));
    bufp->chgBit(oldp+571,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x39U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x38U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x39U)))))));
    bufp->chgBit(oldp+572,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x3bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x3aU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x3bU)))))));
    bufp->chgBit(oldp+573,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 5U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 4U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 5U)))))));
    bufp->chgBit(oldp+574,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x3dU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x3cU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x3dU)))))));
    bufp->chgBit(oldp+575,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 0x3fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x3eU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 0x3fU)))))));
    bufp->chgBit(oldp+576,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 7U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 6U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 7U)))))));
    bufp->chgBit(oldp+577,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0U] >> 9U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 8U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0U] 
                                                >> 9U)))))));
    bufp->chgBit(oldp+578,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0xbU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 9U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0xbU)))))));
    bufp->chgBit(oldp+579,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0xfU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0xdU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0xfU)))))));
    bufp->chgBit(oldp+580,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x13U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x11U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x13U)))))));
    bufp->chgBit(oldp+581,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x17U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x15U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x17U)))))));
    bufp->chgBit(oldp+582,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x1bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x19U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x1bU)))))));
    bufp->chgBit(oldp+583,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x1fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x1dU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x1fU)))))));
    bufp->chgBit(oldp+584,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x23U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x21U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x23U)))))));
    bufp->chgBit(oldp+585,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x27U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x25U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x27U)))))));
    bufp->chgBit(oldp+586,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 3U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 1U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 3U)))))));
    bufp->chgBit(oldp+587,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x2bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x29U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x2bU)))))));
    bufp->chgBit(oldp+588,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x2fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x2dU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x2fU)))))));
    bufp->chgBit(oldp+589,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x33U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x31U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x33U)))))));
    bufp->chgBit(oldp+590,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x37U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x35U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x37U)))))));
    bufp->chgBit(oldp+591,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x3bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x39U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x3bU)))))));
    bufp->chgBit(oldp+592,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 0x3fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x3dU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 0x3fU)))))));
    bufp->chgBit(oldp+593,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [1U] >> 7U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 5U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [1U] 
                                                >> 7U)))))));
    bufp->chgBit(oldp+594,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [2U] >> 0xfU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0xbU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [2U] 
                                                >> 0xfU)))))));
    bufp->chgBit(oldp+595,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [2U] >> 0x17U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x13U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [2U] 
                                                >> 0x17U)))))));
    bufp->chgBit(oldp+596,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [2U] >> 0x1fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x1bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [2U] 
                                                >> 0x1fU)))))));
    bufp->chgBit(oldp+597,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [2U] >> 0x27U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x23U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [2U] 
                                                >> 0x27U)))))));
    bufp->chgBit(oldp+598,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [2U] >> 0x2fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x2bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [2U] 
                                                >> 0x2fU)))))));
    bufp->chgBit(oldp+599,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [2U] >> 0x37U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x33U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [2U] 
                                                >> 0x37U)))))));
    bufp->chgBit(oldp+600,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [2U] >> 0x3fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x3bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [2U] 
                                                >> 0x3fU)))))));
    bufp->chgBit(oldp+601,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [2U] >> 7U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 3U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [2U] 
                                                >> 7U)))))));
    bufp->chgBit(oldp+602,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [3U] >> 0xfU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [3U] 
                                              >> 7U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [3U] 
                                                >> 0xfU)))))));
    bufp->chgBit(oldp+603,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [3U] >> 0x1fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [3U] 
                                              >> 0x17U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [3U] 
                                                >> 0x1fU)))))));
    bufp->chgBit(oldp+604,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [3U] >> 0x2fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [3U] 
                                              >> 0x27U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [3U] 
                                                >> 0x2fU)))))));
    bufp->chgBit(oldp+605,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [3U] >> 0x3fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [3U] 
                                              >> 0x37U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [3U] 
                                                >> 0x3fU)))))));
    bufp->chgBit(oldp+606,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [4U] >> 0x1fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [4U] 
                                              >> 0xfU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [4U] 
                                                >> 0x1fU)))))));
    bufp->chgBit(oldp+607,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [4U] >> 0x3fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [4U] 
                                              >> 0x2fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [4U] 
                                                >> 0x3fU)))))));
    bufp->chgBit(oldp+608,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [5U] >> 0x3fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [5U] 
                                              >> 0x1fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [5U] 
                                                >> 0x3fU)))))));
    bufp->chgBit(oldp+609,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0xdU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0xbU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0xdU)))))));
    bufp->chgBit(oldp+610,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x11U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0xfU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x11U)))))));
    bufp->chgBit(oldp+611,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x15U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x13U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x15U)))))));
    bufp->chgBit(oldp+612,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x19U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x17U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x19U)))))));
    bufp->chgBit(oldp+613,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x1dU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x1bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x1dU)))))));
    bufp->chgBit(oldp+614,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x21U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x1fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x21U)))))));
    bufp->chgBit(oldp+615,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x25U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x23U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x25U)))))));
    bufp->chgBit(oldp+616,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x29U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x27U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x29U)))))));
    bufp->chgBit(oldp+617,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x2dU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x2bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x2dU)))))));
    bufp->chgBit(oldp+618,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x31U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x2fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x31U)))))));
    bufp->chgBit(oldp+619,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x35U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x33U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x35U)))))));
    bufp->chgBit(oldp+620,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x39U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x37U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x39U)))))));
    bufp->chgBit(oldp+621,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 5U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 3U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 5U)))))));
    bufp->chgBit(oldp+622,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 0x3dU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x3bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 0x3dU)))))));
    bufp->chgBit(oldp+623,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [9U] >> 9U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 7U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [9U] 
                                                >> 9U)))))));
    bufp->chgBit(oldp+624,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0xaU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 9U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0xaU)))))));
    bufp->chgBit(oldp+625,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0xcU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0xbU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0xcU)))))));
    bufp->chgBit(oldp+626,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0xeU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0xdU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0xeU)))))));
    bufp->chgBit(oldp+627,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x10U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0xfU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x10U)))))));
    bufp->chgBit(oldp+628,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x12U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x11U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x12U)))))));
    bufp->chgBit(oldp+629,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x14U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x13U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x14U)))))));
    bufp->chgBit(oldp+630,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x16U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x15U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x16U)))))));
    bufp->chgBit(oldp+631,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x18U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x17U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x18U)))))));
    bufp->chgBit(oldp+632,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x1aU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x19U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x1aU)))))));
    bufp->chgBit(oldp+633,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x1cU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x1bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x1cU)))))));
    bufp->chgBit(oldp+634,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 2U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 1U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 2U)))))));
    bufp->chgBit(oldp+635,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x1eU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x1dU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x1eU)))))));
    bufp->chgBit(oldp+636,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x20U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x1fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x20U)))))));
    bufp->chgBit(oldp+637,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x22U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x21U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x22U)))))));
    bufp->chgBit(oldp+638,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x24U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x23U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x24U)))))));
    bufp->chgBit(oldp+639,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x26U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x25U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x26U)))))));
    bufp->chgBit(oldp+640,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x28U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x27U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x28U)))))));
    bufp->chgBit(oldp+641,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x2aU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x29U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x2aU)))))));
    bufp->chgBit(oldp+642,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x2cU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x2bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x2cU)))))));
    bufp->chgBit(oldp+643,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x2eU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x2dU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x2eU)))))));
    bufp->chgBit(oldp+644,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x30U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x2fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x30U)))))));
    bufp->chgBit(oldp+645,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 4U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 3U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 4U)))))));
    bufp->chgBit(oldp+646,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x32U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x31U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x32U)))))));
    bufp->chgBit(oldp+647,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x34U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x33U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x34U)))))));
    bufp->chgBit(oldp+648,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x36U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x35U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x36U)))))));
    bufp->chgBit(oldp+649,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x38U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x37U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x38U)))))));
    bufp->chgBit(oldp+650,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x3aU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x39U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x3aU)))))));
    bufp->chgBit(oldp+651,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x3cU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x3bU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x3cU)))))));
    bufp->chgBit(oldp+652,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 0x3eU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x3dU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 0x3eU)))))));
    bufp->chgBit(oldp+653,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 6U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 5U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 6U)))))));
    bufp->chgBit(oldp+654,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [0xaU] >> 8U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 7U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [0xaU] 
                                                >> 8U)))))));
    bufp->chgBit(oldp+655,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [6U] >> 0x2fU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [6U] 
                                              >> 0x1fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [6U] 
                                                >> 0x2fU)))))));
    bufp->chgBit(oldp+656,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [7U] >> 0x17U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [7U] 
                                              >> 0xfU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [7U] 
                                                >> 0x17U)))))));
    bufp->chgBit(oldp+657,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [7U] >> 0x27U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [7U] 
                                              >> 0x1fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [7U] 
                                                >> 0x27U)))))));
    bufp->chgBit(oldp+658,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [7U] >> 0x37U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [7U] 
                                              >> 0x2fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [7U] 
                                                >> 0x37U)))))));
    bufp->chgBit(oldp+659,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [8U] >> 0xbU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 7U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [8U] 
                                                >> 0xbU)))))));
    bufp->chgBit(oldp+660,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [8U] >> 0x13U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0xfU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [8U] 
                                                >> 0x13U)))))));
    bufp->chgBit(oldp+661,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [8U] >> 0x1bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x17U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [8U] 
                                                >> 0x1bU)))))));
    bufp->chgBit(oldp+662,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [8U] >> 0x23U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x1fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [8U] 
                                                >> 0x23U)))))));
    bufp->chgBit(oldp+663,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [8U] >> 0x2bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x27U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [8U] 
                                                >> 0x2bU)))))));
    bufp->chgBit(oldp+664,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [8U] >> 0x33U)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x2fU)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [8U] 
                                                >> 0x33U)))))));
    bufp->chgBit(oldp+665,((1U & ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                           [8U] >> 0x3bU)) 
                                  | ((IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x37U)) 
                                     & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                                [8U] 
                                                >> 0x3bU)))))));
}

void Vtb_fir___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root__trace_cleanup\n"); );
    // Init
    Vtb_fir___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fir___024root*>(voidSelf);
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x206U)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}
