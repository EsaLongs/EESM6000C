// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_fir__Syms.h"


void Vtb_fir___024root__trace_chg_0_sub_3(Vtb_fir___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root__trace_chg_0_sub_3\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 4607);
    CData/*31:0*/ __Vdeeptemp_h6f680d76__0;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1eU]))) {
        bufp->chgBit(oldp+0,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 6U)) 
                                    ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [2U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [3U] 
                                                  >> 6U)))))));
        bufp->chgBit(oldp+1,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [1U] >> 7U)))));
        bufp->chgBit(oldp+2,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [2U] >> 7U)))));
        bufp->chgBit(oldp+3,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [3U] >> 7U)))));
        bufp->chgBit(oldp+4,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 7U)) 
                                     & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [2U] 
                                                >> 7U))) 
                                    | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U] 
                                                 >> 7U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 7U))) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [3U] 
                                                  >> 7U)))))));
        bufp->chgBit(oldp+5,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 7U)) 
                                    ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [2U] 
                                                >> 7U)) 
                                       ^ (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [3U] 
                                                  >> 7U)))))));
        bufp->chgBit(oldp+6,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [1U] >> 8U)))));
        bufp->chgBit(oldp+7,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [2U] >> 8U)))));
        bufp->chgBit(oldp+8,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [3U] >> 8U)))));
        bufp->chgBit(oldp+9,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 8U)) 
                                     & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [2U] 
                                                >> 8U))) 
                                    | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U] 
                                                 >> 8U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 8U))) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [3U] 
                                                  >> 8U)))))));
        bufp->chgBit(oldp+10,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 8U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U] 
                                                 >> 8U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [3U] 
                                                   >> 8U)))))));
        bufp->chgBit(oldp+11,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 9U)))));
        bufp->chgBit(oldp+12,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] >> 9U)))));
        bufp->chgBit(oldp+13,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [3U] >> 9U)))));
        bufp->chgBit(oldp+14,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               >> 9U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U] 
                                                 >> 9U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  >> 9U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [1U] 
                                                    >> 9U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [3U] 
                                                   >> 9U)))))));
        bufp->chgBit(oldp+15,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 9U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U] 
                                                 >> 9U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [3U] 
                                                   >> 9U)))))));
        bufp->chgQData(oldp+16,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [0U]),64);
        bufp->chgQData(oldp+18,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [1U]),64);
        bufp->chgQData(oldp+20,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [2U]),64);
        bufp->chgQData(oldp+22,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__0__KET____DOT__u_op_3_to_2_nbit.out_op1),64);
        bufp->chgQData(oldp+24,(VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__0__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U)),64);
        bufp->chgQData(oldp+26,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__0__KET____DOT__u_op_3_to_2_nbit.__PVT__cout),64);
        bufp->chgBit(oldp+28,((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [0U]))));
        bufp->chgBit(oldp+29,((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [1U]))));
        bufp->chgBit(oldp+30,((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [2U]))));
        bufp->chgBit(oldp+31,((1U & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U]) 
                                      & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U])) 
                                     | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U]) 
                                         | (IData)(
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0U])) 
                                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U]))))));
        bufp->chgBit(oldp+32,((1U & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U]) 
                                     ^ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U]) 
                                        ^ (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U]))))));
        bufp->chgBit(oldp+33,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U] >> 0xaU)))));
        bufp->chgBit(oldp+34,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 0xaU)))));
        bufp->chgBit(oldp+35,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] >> 0xaU)))));
        bufp->chgBit(oldp+36,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0xaU)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0xaU))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0xaU)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0U] 
                                                    >> 0xaU))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xaU)))))));
        bufp->chgBit(oldp+37,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0xaU)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0xaU)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xaU)))))));
        bufp->chgBit(oldp+38,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U] >> 0xbU)))));
        bufp->chgBit(oldp+39,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 0xbU)))));
        bufp->chgBit(oldp+40,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] >> 0xbU)))));
        bufp->chgBit(oldp+41,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0xbU)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0xbU))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0xbU)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0U] 
                                                    >> 0xbU))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xbU)))))));
        bufp->chgBit(oldp+42,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0xbU)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0xbU)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xbU)))))));
        bufp->chgBit(oldp+43,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U] >> 0xcU)))));
        bufp->chgBit(oldp+44,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 0xcU)))));
        bufp->chgBit(oldp+45,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] >> 0xcU)))));
        bufp->chgBit(oldp+46,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0xcU)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0xcU))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0xcU)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0U] 
                                                    >> 0xcU))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xcU)))))));
        bufp->chgBit(oldp+47,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0xcU)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0xcU)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xcU)))))));
        bufp->chgBit(oldp+48,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U] >> 0xdU)))));
        bufp->chgBit(oldp+49,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 0xdU)))));
        bufp->chgBit(oldp+50,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] >> 0xdU)))));
        bufp->chgBit(oldp+51,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0xdU)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0xdU))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0xdU)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0U] 
                                                    >> 0xdU))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xdU)))))));
        bufp->chgBit(oldp+52,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0xdU)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0xdU)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xdU)))))));
        bufp->chgBit(oldp+53,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U] >> 0xeU)))));
        bufp->chgBit(oldp+54,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 0xeU)))));
        bufp->chgBit(oldp+55,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] >> 0xeU)))));
        bufp->chgBit(oldp+56,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0xeU)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0xeU))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0xeU)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0U] 
                                                    >> 0xeU))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xeU)))))));
        bufp->chgBit(oldp+57,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0xeU)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0xeU)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xeU)))))));
        bufp->chgBit(oldp+58,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U] >> 0xfU)))));
        bufp->chgBit(oldp+59,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 0xfU)))));
        bufp->chgBit(oldp+60,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] >> 0xfU)))));
        bufp->chgBit(oldp+61,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0xfU)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0xfU))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0xfU)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0U] 
                                                    >> 0xfU))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xfU)))))));
        bufp->chgBit(oldp+62,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0xfU)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0xfU)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0xfU)))))));
        bufp->chgBit(oldp+63,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U] >> 0x10U)))));
        bufp->chgBit(oldp+64,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 0x10U)))));
        bufp->chgBit(oldp+65,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] >> 0x10U)))));
        bufp->chgBit(oldp+66,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x10U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0x10U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x10U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0U] 
                                                    >> 0x10U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x10U)))))));
        bufp->chgBit(oldp+67,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x10U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0x10U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x10U)))))));
        bufp->chgBit(oldp+68,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U] >> 0x11U)))));
        bufp->chgBit(oldp+69,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 0x11U)))));
        bufp->chgBit(oldp+70,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] >> 0x11U)))));
        bufp->chgBit(oldp+71,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x11U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0x11U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x11U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0U] 
                                                    >> 0x11U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x11U)))))));
        bufp->chgBit(oldp+72,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x11U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0x11U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x11U)))))));
        bufp->chgBit(oldp+73,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U] >> 0x12U)))));
        bufp->chgBit(oldp+74,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 0x12U)))));
        bufp->chgBit(oldp+75,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] >> 0x12U)))));
        bufp->chgBit(oldp+76,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x12U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0x12U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x12U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0U] 
                                                    >> 0x12U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x12U)))))));
        bufp->chgBit(oldp+77,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x12U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0x12U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x12U)))))));
        bufp->chgBit(oldp+78,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U] >> 0x13U)))));
        bufp->chgBit(oldp+79,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 0x13U)))));
        bufp->chgBit(oldp+80,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] >> 0x13U)))));
        bufp->chgBit(oldp+81,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x13U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0x13U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x13U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0U] 
                                                    >> 0x13U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x13U)))))));
        bufp->chgBit(oldp+82,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x13U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0x13U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x13U)))))));
        bufp->chgBit(oldp+83,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U] >> 1U)))));
        bufp->chgBit(oldp+84,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 1U)))));
        bufp->chgBit(oldp+85,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] >> 1U)))));
        bufp->chgBit(oldp+86,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 1U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 1U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 1U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0U] 
                                                    >> 1U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 1U)))))));
        bufp->chgBit(oldp+87,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 1U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 1U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 1U)))))));
        bufp->chgBit(oldp+88,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U] >> 0x14U)))));
        bufp->chgBit(oldp+89,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 0x14U)))));
        bufp->chgBit(oldp+90,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] >> 0x14U)))));
        bufp->chgBit(oldp+91,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x14U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0x14U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x14U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0U] 
                                                    >> 0x14U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x14U)))))));
        bufp->chgBit(oldp+92,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x14U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0x14U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x14U)))))));
        bufp->chgBit(oldp+93,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U] >> 0x15U)))));
        bufp->chgBit(oldp+94,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 0x15U)))));
        bufp->chgBit(oldp+95,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] >> 0x15U)))));
        bufp->chgBit(oldp+96,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x15U)) 
                                      & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0x15U))) 
                                     | (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x15U)) 
                                         | (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0U] 
                                                    >> 0x15U))) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x15U)))))));
        bufp->chgBit(oldp+97,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x15U)) 
                                     ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 >> 0x15U)) 
                                        ^ (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [2U] 
                                                   >> 0x15U)))))));
        bufp->chgBit(oldp+98,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U] >> 0x16U)))));
        bufp->chgBit(oldp+99,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] >> 0x16U)))));
        bufp->chgBit(oldp+100,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+101,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x16U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x16U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x16U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x16U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+102,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x16U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x16U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+103,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+104,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+105,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+106,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x17U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x17U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x17U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x17U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+107,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x17U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x17U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+108,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+109,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+110,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+111,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x18U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x18U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x18U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x18U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+112,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x18U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x18U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+113,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+114,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+115,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+116,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x19U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x19U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x19U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x19U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+117,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x19U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x19U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+118,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+119,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+120,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+121,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x1aU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x1aU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x1aU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+122,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x1aU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x1aU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+123,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+124,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+125,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+126,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x1bU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x1bU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x1bU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+127,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x1bU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x1bU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+128,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+129,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+130,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+131,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x1cU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x1cU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x1cU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+132,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x1cU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x1cU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+133,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+134,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+135,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+136,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x1dU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x1dU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x1dU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+137,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x1dU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x1dU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+138,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+139,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+140,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+141,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 2U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 2U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 2U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 2U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+142,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 2U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 2U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+143,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+144,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+145,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+146,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x1eU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x1eU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x1eU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+147,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x1eU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x1eU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+148,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+149,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+150,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+151,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x1fU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x1fU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x1fU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+152,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x1fU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x1fU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+153,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+154,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+155,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+156,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x20U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x20U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x20U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x20U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+157,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x20U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x20U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+158,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+159,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+160,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+161,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x21U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x21U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x21U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x21U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+162,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x21U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x21U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+163,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+164,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+165,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+166,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x22U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x22U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x22U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x22U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+167,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x22U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x22U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+168,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+169,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+170,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+171,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x23U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x23U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x23U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x23U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+172,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x23U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x23U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+173,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+174,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+175,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+176,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x24U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x24U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x24U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x24U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+177,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x24U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x24U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+178,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+179,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+180,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+181,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x25U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x25U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x25U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x25U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+182,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x25U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x25U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+183,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+184,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+185,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+186,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x26U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x26U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x26U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x26U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+187,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x26U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x26U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+188,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+189,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+190,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+191,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x27U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x27U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x27U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x27U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+192,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x27U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x27U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+193,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+194,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+195,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+196,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 3U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 3U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 3U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 3U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+197,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 3U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 3U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+198,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+199,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+200,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+201,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x28U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x28U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x28U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x28U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+202,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x28U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x28U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+203,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+204,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+205,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+206,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x29U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x29U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x29U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x29U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+207,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x29U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x29U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+208,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+209,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+210,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+211,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x2aU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x2aU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x2aU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+212,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x2aU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x2aU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+213,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+214,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+215,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+216,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x2bU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x2bU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x2bU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+217,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x2bU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x2bU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+218,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+219,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+220,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+221,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x2cU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x2cU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x2cU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+222,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x2cU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x2cU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+223,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+224,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+225,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+226,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x2dU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x2dU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x2dU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+227,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x2dU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x2dU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+228,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+229,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+230,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+231,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x2eU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x2eU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x2eU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+232,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x2eU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x2eU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+233,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+234,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+235,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+236,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x2fU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x2fU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x2fU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+237,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x2fU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x2fU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+238,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+239,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+240,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+241,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x30U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x30U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x30U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x30U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+242,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x30U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x30U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+243,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+244,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+245,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+246,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x31U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x31U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x31U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x31U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+247,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x31U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x31U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+248,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+249,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+250,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+251,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 4U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 4U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 4U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 4U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+252,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 4U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 4U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+253,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+254,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+255,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+256,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x32U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x32U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x32U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x32U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+257,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x32U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x32U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+258,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+259,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+260,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+261,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x33U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x33U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x33U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x33U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+262,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x33U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x33U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+263,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+264,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+265,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+266,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x34U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x34U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x34U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x34U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+267,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x34U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x34U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+268,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+269,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+270,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+271,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x35U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x35U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x35U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x35U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+272,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x35U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x35U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+273,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+274,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+275,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+276,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x36U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x36U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x36U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x36U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+277,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x36U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x36U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+278,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+279,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+280,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+281,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x37U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x37U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x37U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x37U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+282,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x37U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x37U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+283,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+284,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+285,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+286,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x38U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x38U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x38U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x38U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+287,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x38U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x38U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+288,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+289,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+290,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+291,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x39U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x39U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x39U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x39U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+292,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x39U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x39U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+293,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+294,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+295,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+296,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x3aU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x3aU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x3aU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+297,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x3aU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x3aU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+298,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+299,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+300,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+301,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x3bU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x3bU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x3bU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+302,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x3bU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x3bU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+303,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+304,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+305,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+306,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 5U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 5U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 5U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 5U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+307,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 5U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 5U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+308,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+309,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+310,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+311,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x3cU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x3cU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x3cU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+312,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x3cU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x3cU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+313,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+314,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+315,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+316,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x3dU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x3dU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x3dU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x3dU)))))));
        bufp->chgBit(oldp+317,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x3dU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x3dU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x3dU)))))));
        bufp->chgBit(oldp+318,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+319,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+320,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+321,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x3eU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x3eU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x3eU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x3eU)))))));
        bufp->chgBit(oldp+322,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x3eU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x3eU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x3eU)))))));
        bufp->chgBit(oldp+323,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+324,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+325,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+326,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 0x3fU)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x3fU))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 0x3fU)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 0x3fU))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x3fU)))))));
        bufp->chgBit(oldp+327,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 0x3fU)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 0x3fU)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 0x3fU)))))));
        bufp->chgBit(oldp+328,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+329,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+330,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+331,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 6U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 6U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 6U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 6U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+332,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 6U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 6U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+333,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+334,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+335,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+336,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 7U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 7U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 7U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 7U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+337,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 7U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 7U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+338,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+339,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+340,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+341,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 8U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 8U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 8U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 8U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+342,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 8U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 8U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+343,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+344,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+345,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+346,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U] 
                                                >> 9U)) 
                                       & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 9U))) 
                                      | (((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [1U] 
                                                   >> 9U)) 
                                          | (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                     [0U] 
                                                     >> 9U))) 
                                         & (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+347,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U] 
                                               >> 9U)) 
                                      ^ ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  >> 9U)) 
                                         ^ (IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [2U] 
                                                    >> 9U)))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x1fU]))) {
        bufp->chgCData(oldp+348,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0]),5);
        bufp->chgCData(oldp+349,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1]),5);
        bufp->chgCData(oldp+350,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2]),5);
        bufp->chgCData(oldp+351,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3]),5);
        bufp->chgCData(oldp+352,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4]),5);
        bufp->chgCData(oldp+353,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5]),5);
        bufp->chgCData(oldp+354,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[6]),5);
        bufp->chgCData(oldp+355,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[7]),5);
        bufp->chgCData(oldp+356,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[8]),5);
        bufp->chgCData(oldp+357,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[9]),5);
        bufp->chgCData(oldp+358,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[10]),5);
        bufp->chgCData(oldp+359,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[11]),5);
        bufp->chgCData(oldp+360,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),5);
        bufp->chgCData(oldp+361,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),5);
        bufp->chgCData(oldp+362,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2]),5);
        bufp->chgCData(oldp+363,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3]),5);
        bufp->chgCData(oldp+364,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[4]),5);
        bufp->chgCData(oldp+365,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[5]),5);
        bufp->chgCData(oldp+366,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[6]),5);
        bufp->chgCData(oldp+367,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[7]),5);
        bufp->chgCData(oldp+368,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [0U]),5);
        bufp->chgCData(oldp+369,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [1U]),5);
        bufp->chgCData(oldp+370,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [2U]),5);
        bufp->chgCData(oldp+371,((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                  [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [1U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [2U]))),5);
        bufp->chgCData(oldp+372,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [0U] 
                                                          & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [1U]) 
                                                         | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [1U] 
                                                             | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [0U]) 
                                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                            [2U])), 1U))),5);
        bufp->chgCData(oldp+373,(((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] | 
                                             vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U]) 
                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [2U]))),5);
        bufp->chgBit(oldp+374,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [0U])));
        bufp->chgBit(oldp+375,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [1U])));
        bufp->chgBit(oldp+376,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [2U])));
        bufp->chgBit(oldp+377,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0U]) 
                                                & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [2U])))));
        bufp->chgBit(oldp+378,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U])))));
        bufp->chgBit(oldp+379,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] >> 1U))));
        bufp->chgBit(oldp+380,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+381,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+382,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+383,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+384,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] >> 2U))));
        bufp->chgBit(oldp+385,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] >> 2U))));
        bufp->chgBit(oldp+386,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 2U))));
        bufp->chgBit(oldp+387,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+388,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+389,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] >> 3U))));
        bufp->chgBit(oldp+390,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] >> 3U))));
        bufp->chgBit(oldp+391,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 3U))));
        bufp->chgBit(oldp+392,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+393,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+394,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] >> 4U))));
        bufp->chgBit(oldp+395,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] >> 4U))));
        bufp->chgBit(oldp+396,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 4U))));
        bufp->chgBit(oldp+397,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U])) 
                                      >> 4U))));
        bufp->chgBit(oldp+398,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                      >> 4U))));
        bufp->chgCData(oldp+399,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [3U]),5);
        bufp->chgCData(oldp+400,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [4U]),5);
        bufp->chgCData(oldp+401,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [5U]),5);
        bufp->chgCData(oldp+402,((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                  [3U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [4U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [5U]))),5);
        bufp->chgCData(oldp+403,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [3U] 
                                                          & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [4U]) 
                                                         | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [4U] 
                                                             | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [3U]) 
                                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                            [5U])), 1U))),5);
        bufp->chgCData(oldp+404,(((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [3U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [4U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [4U] | 
                                             vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [3U]) 
                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [5U]))),5);
        bufp->chgBit(oldp+405,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [3U])));
        bufp->chgBit(oldp+406,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [4U])));
        bufp->chgBit(oldp+407,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [5U])));
        bufp->chgBit(oldp+408,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [3U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [4U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [3U]) 
                                                & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [5U])))));
        bufp->chgBit(oldp+409,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [4U] 
                                              ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [5U])))));
        bufp->chgBit(oldp+410,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+411,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+412,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+413,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [3U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [4U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [4U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [3U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [5U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+414,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [3U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+415,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] >> 2U))));
        bufp->chgBit(oldp+416,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U] >> 2U))));
        bufp->chgBit(oldp+417,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] >> 2U))));
        bufp->chgBit(oldp+418,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [3U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [4U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [4U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [3U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [5U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+419,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [3U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+420,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] >> 3U))));
        bufp->chgBit(oldp+421,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U] >> 3U))));
        bufp->chgBit(oldp+422,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] >> 3U))));
        bufp->chgBit(oldp+423,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [3U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [4U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [4U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [3U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [5U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+424,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [3U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+425,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] >> 4U))));
        bufp->chgBit(oldp+426,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U] >> 4U))));
        bufp->chgBit(oldp+427,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] >> 4U))));
        bufp->chgBit(oldp+428,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [3U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [4U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [4U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [3U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [5U])) 
                                      >> 4U))));
        bufp->chgBit(oldp+429,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [3U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U])) 
                                      >> 4U))));
        bufp->chgCData(oldp+430,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [6U]),5);
        bufp->chgCData(oldp+431,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [7U]),5);
        bufp->chgCData(oldp+432,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [8U]),5);
        bufp->chgCData(oldp+433,((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                  [6U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [7U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [8U]))),5);
        bufp->chgCData(oldp+434,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [6U] 
                                                          & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [7U]) 
                                                         | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [7U] 
                                                             | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [6U]) 
                                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                            [8U])), 1U))),5);
        bufp->chgCData(oldp+435,(((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [7U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [7U] | 
                                             vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [6U]) 
                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [8U]))),5);
        bufp->chgBit(oldp+436,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [6U])));
        bufp->chgBit(oldp+437,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [7U])));
        bufp->chgBit(oldp+438,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [8U])));
        bufp->chgBit(oldp+439,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [7U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U] 
                                                 | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [6U]) 
                                                & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [8U])))));
        bufp->chgBit(oldp+440,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [7U] 
                                              ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [8U])))));
        bufp->chgBit(oldp+441,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+442,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+443,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [8U] >> 1U))));
        bufp->chgBit(oldp+444,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [7U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [7U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [6U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [8U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+445,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [6U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+446,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U] >> 2U))));
        bufp->chgBit(oldp+447,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [7U] >> 2U))));
        bufp->chgBit(oldp+448,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [8U] >> 2U))));
        bufp->chgBit(oldp+449,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [7U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [7U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [6U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [8U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+450,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [6U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+451,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U] >> 3U))));
        bufp->chgBit(oldp+452,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [7U] >> 3U))));
        bufp->chgBit(oldp+453,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [8U] >> 3U))));
        bufp->chgBit(oldp+454,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [7U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [7U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [6U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [8U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+455,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [6U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+456,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U] >> 4U))));
        bufp->chgBit(oldp+457,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [7U] >> 4U))));
        bufp->chgBit(oldp+458,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [8U] >> 4U))));
        bufp->chgBit(oldp+459,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [7U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [7U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [6U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [8U])) 
                                      >> 4U))));
        bufp->chgBit(oldp+460,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [6U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U])) 
                                      >> 4U))));
        bufp->chgCData(oldp+461,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [9U]),5);
        bufp->chgCData(oldp+462,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [0xaU]),5);
        bufp->chgCData(oldp+463,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [0xbU]),5);
        bufp->chgCData(oldp+464,((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                  [9U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [0xaU] ^ 
                                          vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [0xbU]))),5);
        bufp->chgCData(oldp+465,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [9U] 
                                                          & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [0xaU]) 
                                                         | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [0xaU] 
                                                             | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [9U]) 
                                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                            [0xbU])), 1U))),5);
        bufp->chgCData(oldp+466,(((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [9U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [0xaU]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [9U]) 
                                              & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0xbU]))),5);
        bufp->chgBit(oldp+467,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [9U])));
        bufp->chgBit(oldp+468,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [0xaU])));
        bufp->chgBit(oldp+469,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [0xbU])));
        bufp->chgBit(oldp+470,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [9U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [0xaU]) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xaU] 
                                                   | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [9U]) 
                                                  & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0xbU])))));
        bufp->chgBit(oldp+471,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [9U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0xaU] 
                                              ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0xbU])))));
        bufp->chgBit(oldp+472,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [9U] >> 1U))));
        bufp->chgBit(oldp+473,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0xaU] >> 1U))));
        bufp->chgBit(oldp+474,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0xbU] >> 1U))));
        bufp->chgBit(oldp+475,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [9U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0xaU]) | (
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xaU] 
                                                    | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [9U]) 
                                                   & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU])) 
                                      >> 1U))));
        bufp->chgBit(oldp+476,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [9U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xbU])) 
                                      >> 1U))));
        bufp->chgBit(oldp+477,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [9U] >> 2U))));
        bufp->chgBit(oldp+478,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0xaU] >> 2U))));
        bufp->chgBit(oldp+479,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0xbU] >> 2U))));
        bufp->chgBit(oldp+480,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [9U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0xaU]) | (
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xaU] 
                                                    | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [9U]) 
                                                   & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU])) 
                                      >> 2U))));
        bufp->chgBit(oldp+481,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [9U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xbU])) 
                                      >> 2U))));
        bufp->chgBit(oldp+482,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [9U] >> 3U))));
        bufp->chgBit(oldp+483,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0xaU] >> 3U))));
        bufp->chgBit(oldp+484,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0xbU] >> 3U))));
        bufp->chgBit(oldp+485,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [9U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0xaU]) | (
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xaU] 
                                                    | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [9U]) 
                                                   & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU])) 
                                      >> 3U))));
        bufp->chgBit(oldp+486,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [9U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xbU])) 
                                      >> 3U))));
        bufp->chgBit(oldp+487,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [9U] >> 4U))));
        bufp->chgBit(oldp+488,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0xaU] >> 4U))));
        bufp->chgBit(oldp+489,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0xbU] >> 4U))));
        bufp->chgBit(oldp+490,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [9U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0xaU]) | (
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [0xaU] 
                                                    | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                    [9U]) 
                                                   & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                   [0xbU])) 
                                      >> 4U))));
        bufp->chgBit(oldp+491,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [9U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xaU] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0xbU])) 
                                      >> 4U))));
        bufp->chgCData(oldp+492,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0]),5);
        bufp->chgCData(oldp+493,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1]),5);
        bufp->chgCData(oldp+494,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2]),5);
        bufp->chgCData(oldp+495,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3]),5);
        bufp->chgCData(oldp+496,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4]),5);
        bufp->chgCData(oldp+497,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5]),5);
        bufp->chgCData(oldp+498,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[6]),5);
        bufp->chgCData(oldp+499,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[7]),5);
        bufp->chgCData(oldp+500,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),5);
        bufp->chgCData(oldp+501,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),5);
        bufp->chgCData(oldp+502,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2]),5);
        bufp->chgCData(oldp+503,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3]),5);
        bufp->chgCData(oldp+504,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[4]),5);
        bufp->chgCData(oldp+505,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[5]),5);
        bufp->chgCData(oldp+506,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [2U]),5);
        bufp->chgCData(oldp+507,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [3U]),5);
        bufp->chgCData(oldp+508,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [4U]),5);
        bufp->chgCData(oldp+509,((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                  [2U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [3U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [4U]))),5);
        bufp->chgCData(oldp+510,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [2U] 
                                                          & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [3U]) 
                                                         | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [3U] 
                                                             | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [2U]) 
                                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                            [4U])), 1U))),5);
        bufp->chgCData(oldp+511,(((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [2U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [3U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [3U] | 
                                             vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U]) 
                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [4U]))),5);
        bufp->chgBit(oldp+512,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [2U])));
        bufp->chgBit(oldp+513,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [3U])));
        bufp->chgBit(oldp+514,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [4U])));
        bufp->chgBit(oldp+515,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [2U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [3U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [3U] 
                                                 | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U]) 
                                                & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U])))));
        bufp->chgBit(oldp+516,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U] 
                                              ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [4U])))));
        bufp->chgBit(oldp+517,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+518,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+519,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+520,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [2U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [3U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [3U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+521,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [2U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [3U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+522,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 2U))));
        bufp->chgBit(oldp+523,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] >> 2U))));
        bufp->chgBit(oldp+524,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U] >> 2U))));
        bufp->chgBit(oldp+525,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [2U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [3U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [3U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+526,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [2U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [3U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+527,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 3U))));
        bufp->chgBit(oldp+528,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] >> 3U))));
        bufp->chgBit(oldp+529,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U] >> 3U))));
        bufp->chgBit(oldp+530,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [2U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [3U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [3U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+531,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [2U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [3U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+532,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 4U))));
        bufp->chgBit(oldp+533,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] >> 4U))));
        bufp->chgBit(oldp+534,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U] >> 4U))));
        bufp->chgBit(oldp+535,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [2U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [3U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [3U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U])) 
                                      >> 4U))));
        bufp->chgBit(oldp+536,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [2U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [3U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U])) 
                                      >> 4U))));
        bufp->chgCData(oldp+537,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [5U]),5);
        bufp->chgCData(oldp+538,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [6U]),5);
        bufp->chgCData(oldp+539,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [7U]),5);
        bufp->chgCData(oldp+540,((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                  [5U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [6U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [7U]))),5);
        bufp->chgCData(oldp+541,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [5U] 
                                                          & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [6U]) 
                                                         | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [6U] 
                                                             | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [5U]) 
                                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                            [7U])), 1U))),5);
        bufp->chgCData(oldp+542,(((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [5U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [6U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [6U] | 
                                             vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [5U]) 
                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [7U]))),5);
        bufp->chgBit(oldp+543,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [5U])));
        bufp->chgBit(oldp+544,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [6U])));
        bufp->chgBit(oldp+545,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [7U])));
        bufp->chgBit(oldp+546,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [5U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [6U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [6U] 
                                                 | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [5U]) 
                                                & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U])))));
        bufp->chgBit(oldp+547,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [6U] 
                                              ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [7U])))));
        bufp->chgBit(oldp+548,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+549,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U] >> 1U))));
        bufp->chgBit(oldp+550,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [7U] >> 1U))));
        bufp->chgBit(oldp+551,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [5U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [6U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [6U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+552,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [5U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+553,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] >> 2U))));
        bufp->chgBit(oldp+554,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U] >> 2U))));
        bufp->chgBit(oldp+555,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [7U] >> 2U))));
        bufp->chgBit(oldp+556,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [5U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [6U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [6U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+557,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [5U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+558,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] >> 3U))));
        bufp->chgBit(oldp+559,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U] >> 3U))));
        bufp->chgBit(oldp+560,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [7U] >> 3U))));
        bufp->chgBit(oldp+561,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [5U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [6U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [6U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+562,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [5U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+563,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] >> 4U))));
        bufp->chgBit(oldp+564,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U] >> 4U))));
        bufp->chgBit(oldp+565,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [7U] >> 4U))));
        bufp->chgBit(oldp+566,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [5U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [6U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [6U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [5U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [7U])) 
                                      >> 4U))));
        bufp->chgBit(oldp+567,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [5U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U])) 
                                      >> 4U))));
        bufp->chgCData(oldp+568,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0]),5);
        bufp->chgCData(oldp+569,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1]),5);
        bufp->chgCData(oldp+570,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2]),5);
        bufp->chgCData(oldp+571,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3]),5);
        bufp->chgCData(oldp+572,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4]),5);
        bufp->chgCData(oldp+573,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5]),5);
        bufp->chgCData(oldp+574,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),5);
        bufp->chgCData(oldp+575,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),5);
        bufp->chgCData(oldp+576,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2]),5);
        bufp->chgCData(oldp+577,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3]),5);
        bufp->chgCData(oldp+578,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [0U]),5);
        bufp->chgCData(oldp+579,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [1U]),5);
        bufp->chgCData(oldp+580,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [2U]),5);
        bufp->chgCData(oldp+581,((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                  [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [1U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [2U]))),5);
        bufp->chgCData(oldp+582,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [0U] 
                                                          & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [1U]) 
                                                         | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [1U] 
                                                             | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [0U]) 
                                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                            [2U])), 1U))),5);
        bufp->chgCData(oldp+583,(((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] | 
                                             vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U]) 
                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [2U]))),5);
        bufp->chgBit(oldp+584,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [0U])));
        bufp->chgBit(oldp+585,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [1U])));
        bufp->chgBit(oldp+586,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [2U])));
        bufp->chgBit(oldp+587,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0U]) 
                                                & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [2U])))));
        bufp->chgBit(oldp+588,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U])))));
        bufp->chgBit(oldp+589,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] >> 1U))));
        bufp->chgBit(oldp+590,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+591,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+592,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+593,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+594,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] >> 2U))));
        bufp->chgBit(oldp+595,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] >> 2U))));
        bufp->chgBit(oldp+596,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 2U))));
        bufp->chgBit(oldp+597,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+598,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+599,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] >> 3U))));
        bufp->chgBit(oldp+600,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] >> 3U))));
        bufp->chgBit(oldp+601,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 3U))));
        bufp->chgBit(oldp+602,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+603,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+604,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] >> 4U))));
        bufp->chgBit(oldp+605,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] >> 4U))));
        bufp->chgBit(oldp+606,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 4U))));
        bufp->chgBit(oldp+607,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U])) 
                                      >> 4U))));
        bufp->chgBit(oldp+608,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                      >> 4U))));
        bufp->chgCData(oldp+609,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [3U]),5);
        bufp->chgCData(oldp+610,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [4U]),5);
        bufp->chgCData(oldp+611,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [5U]),5);
        bufp->chgCData(oldp+612,((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                  [3U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [4U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [5U]))),5);
        bufp->chgCData(oldp+613,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [3U] 
                                                          & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [4U]) 
                                                         | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [4U] 
                                                             | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [3U]) 
                                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                            [5U])), 1U))),5);
        bufp->chgCData(oldp+614,(((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [3U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [4U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [4U] | 
                                             vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [3U]) 
                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [5U]))),5);
        bufp->chgBit(oldp+615,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [3U])));
        bufp->chgBit(oldp+616,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [4U])));
        bufp->chgBit(oldp+617,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [5U])));
        bufp->chgBit(oldp+618,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [3U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [4U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [4U] 
                                                 | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [3U]) 
                                                & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [5U])))));
        bufp->chgBit(oldp+619,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [4U] 
                                              ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [5U])))));
        bufp->chgBit(oldp+620,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+621,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U] >> 1U))));
        bufp->chgBit(oldp+622,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] >> 1U))));
        bufp->chgBit(oldp+623,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [3U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [4U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [4U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [3U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [5U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+624,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [3U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+625,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] >> 2U))));
        bufp->chgBit(oldp+626,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U] >> 2U))));
        bufp->chgBit(oldp+627,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] >> 2U))));
        bufp->chgBit(oldp+628,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [3U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [4U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [4U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [3U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [5U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+629,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [3U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+630,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] >> 3U))));
        bufp->chgBit(oldp+631,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U] >> 3U))));
        bufp->chgBit(oldp+632,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] >> 3U))));
        bufp->chgBit(oldp+633,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [3U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [4U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [4U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [3U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [5U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+634,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [3U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+635,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] >> 4U))));
        bufp->chgBit(oldp+636,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U] >> 4U))));
        bufp->chgBit(oldp+637,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] >> 4U))));
        bufp->chgBit(oldp+638,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [3U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [4U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [4U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [3U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [5U])) 
                                      >> 4U))));
        bufp->chgBit(oldp+639,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [3U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U])) 
                                      >> 4U))));
        bufp->chgCData(oldp+640,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0]),5);
        bufp->chgCData(oldp+641,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1]),5);
        bufp->chgCData(oldp+642,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2]),5);
        bufp->chgCData(oldp+643,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3]),5);
        bufp->chgCData(oldp+644,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),5);
        bufp->chgCData(oldp+645,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),5);
        bufp->chgCData(oldp+646,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2]),5);
        bufp->chgCData(oldp+647,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [1U]),5);
        bufp->chgCData(oldp+648,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [2U]),5);
        bufp->chgCData(oldp+649,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [3U]),5);
        bufp->chgCData(oldp+650,((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                  [1U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [2U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [3U]))),5);
        bufp->chgCData(oldp+651,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [1U] 
                                                          & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [2U]) 
                                                         | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [2U] 
                                                             | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [1U]) 
                                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                            [3U])), 1U))),5);
        bufp->chgCData(oldp+652,(((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [1U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [2U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] | 
                                             vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U]) 
                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [3U]))),5);
        bufp->chgBit(oldp+653,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [1U])));
        bufp->chgBit(oldp+654,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [2U])));
        bufp->chgBit(oldp+655,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [3U])));
        bufp->chgBit(oldp+656,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [1U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [2U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U] 
                                                 | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U]) 
                                                & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [3U])))));
        bufp->chgBit(oldp+657,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U] 
                                              ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U])))));
        bufp->chgBit(oldp+658,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+659,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+660,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+661,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [2U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [3U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+662,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [1U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [3U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+663,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] >> 2U))));
        bufp->chgBit(oldp+664,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 2U))));
        bufp->chgBit(oldp+665,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] >> 2U))));
        bufp->chgBit(oldp+666,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [2U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [3U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+667,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [1U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [3U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+668,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] >> 3U))));
        bufp->chgBit(oldp+669,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 3U))));
        bufp->chgBit(oldp+670,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] >> 3U))));
        bufp->chgBit(oldp+671,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [2U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [3U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+672,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [1U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [3U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+673,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] >> 4U))));
        bufp->chgBit(oldp+674,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 4U))));
        bufp->chgBit(oldp+675,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] >> 4U))));
        bufp->chgBit(oldp+676,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [2U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [2U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [3U])) 
                                      >> 4U))));
        bufp->chgBit(oldp+677,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [1U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [3U])) 
                                      >> 4U))));
        bufp->chgCData(oldp+678,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0]),5);
        bufp->chgCData(oldp+679,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1]),5);
        bufp->chgCData(oldp+680,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2]),5);
        bufp->chgCData(oldp+681,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),5);
        bufp->chgCData(oldp+682,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),5);
        bufp->chgCData(oldp+683,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [0U]),5);
        bufp->chgCData(oldp+684,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [1U]),5);
        bufp->chgCData(oldp+685,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [2U]),5);
        bufp->chgCData(oldp+686,((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                  [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [1U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [2U]))),5);
        bufp->chgCData(oldp+687,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [0U] 
                                                          & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [1U]) 
                                                         | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [1U] 
                                                             | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                             [0U]) 
                                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                            [2U])), 1U))),5);
        bufp->chgCData(oldp+688,(((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] | 
                                             vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0U]) 
                                            & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [2U]))),5);
        bufp->chgBit(oldp+689,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [0U])));
        bufp->chgBit(oldp+690,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [1U])));
        bufp->chgBit(oldp+691,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [2U])));
        bufp->chgBit(oldp+692,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [1U] 
                                                 | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0U]) 
                                                & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [2U])))));
        bufp->chgBit(oldp+693,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [1U] 
                                              ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U])))));
        bufp->chgBit(oldp+694,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] >> 1U))));
        bufp->chgBit(oldp+695,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+696,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+697,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+698,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                      >> 1U))));
        bufp->chgBit(oldp+699,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] >> 2U))));
        bufp->chgBit(oldp+700,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] >> 2U))));
        bufp->chgBit(oldp+701,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 2U))));
        bufp->chgBit(oldp+702,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+703,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                      >> 2U))));
        bufp->chgBit(oldp+704,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] >> 3U))));
        bufp->chgBit(oldp+705,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] >> 3U))));
        bufp->chgBit(oldp+706,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 3U))));
        bufp->chgBit(oldp+707,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+708,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                      >> 3U))));
        bufp->chgBit(oldp+709,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] >> 4U))));
        bufp->chgBit(oldp+710,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] >> 4U))));
        bufp->chgBit(oldp+711,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] >> 4U))));
        bufp->chgBit(oldp+712,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [1U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [2U])) 
                                      >> 4U))));
        bufp->chgBit(oldp+713,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                      >> 4U))));
    }
    __Vdeeptemp_h6f680d76__0 = ((((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((vlSelfRef.__Vm_traceActivity
                                                                                [0x98U] 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x99U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x9aU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x9bU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x9cU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x9dU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x9eU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0x9fU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xa0U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xa1U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xa2U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xa3U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xa4U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xa5U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xa6U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xa7U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xa8U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xa9U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xaaU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xabU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xacU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xadU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xaeU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xafU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xb0U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xb1U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xb2U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xb3U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xb4U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xb5U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xb6U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xb7U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xb8U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xb9U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xbaU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xbbU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xbcU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xbdU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xbeU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xbfU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xc0U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xc1U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xc2U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xc3U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xc4U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xc5U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xc6U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xc7U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xc8U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xc9U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xcaU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xcbU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xccU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xcdU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xceU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xcfU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xd0U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xd1U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xd2U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xd3U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xd4U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xd5U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xd6U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xd7U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xd8U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xd9U]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xdaU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xdbU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xdcU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xddU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xdeU]) 
                                                                                | vlSelfRef.__Vm_traceActivity
                                                                                [0xdfU]) 
                                                                               | vlSelfRef.__Vm_traceActivity
                                                                               [0xe0U]) 
                                                                              | vlSelfRef.__Vm_traceActivity
                                                                              [0xe1U]) 
                                                                             | vlSelfRef.__Vm_traceActivity
                                                                             [0xe2U]) 
                                                                            | vlSelfRef.__Vm_traceActivity
                                                                            [0xe3U]) 
                                                                           | vlSelfRef.__Vm_traceActivity
                                                                           [0xe4U]) 
                                                                          | vlSelfRef.__Vm_traceActivity
                                                                          [0xe5U]) 
                                                                         | vlSelfRef.__Vm_traceActivity
                                                                         [0xe6U]) 
                                                                        | vlSelfRef.__Vm_traceActivity
                                                                        [0xe7U]) 
                                                                       | vlSelfRef.__Vm_traceActivity
                                                                       [0xe8U]) 
                                                                      | vlSelfRef.__Vm_traceActivity
                                                                      [0xe9U]) 
                                                                     | vlSelfRef.__Vm_traceActivity
                                                                     [0xeaU]) 
                                                                    | vlSelfRef.__Vm_traceActivity
                                                                    [0xebU]) 
                                                                   | vlSelfRef.__Vm_traceActivity
                                                                   [0xecU]) 
                                                                  | vlSelfRef.__Vm_traceActivity
                                                                  [0xedU]) 
                                                                 | vlSelfRef.__Vm_traceActivity
                                                                 [0xeeU]) 
                                                                | vlSelfRef.__Vm_traceActivity
                                                                [0xefU]) 
                                                               | vlSelfRef.__Vm_traceActivity
                                                               [0xf0U]) 
                                                              | vlSelfRef.__Vm_traceActivity
                                                              [0xf1U]) 
                                                             | vlSelfRef.__Vm_traceActivity
                                                             [0xf2U]) 
                                                            | vlSelfRef.__Vm_traceActivity
                                                            [0xf3U]) 
                                                           | vlSelfRef.__Vm_traceActivity
                                                           [0xf4U]) 
                                                          | vlSelfRef.__Vm_traceActivity
                                                          [0xf5U]) 
                                                         | vlSelfRef.__Vm_traceActivity
                                                         [0xf6U]) 
                                                        | vlSelfRef.__Vm_traceActivity
                                                        [0xf7U]) 
                                                       | vlSelfRef.__Vm_traceActivity
                                                       [0xf8U]) 
                                                      | vlSelfRef.__Vm_traceActivity
                                                      [0xf9U]) 
                                                     | vlSelfRef.__Vm_traceActivity
                                                     [0xfaU]) 
                                                    | vlSelfRef.__Vm_traceActivity
                                                    [0xfbU]) 
                                                   | vlSelfRef.__Vm_traceActivity
                                                   [0xfcU]) 
                                                  | vlSelfRef.__Vm_traceActivity
                                                  [0xfdU]) 
                                                 | vlSelfRef.__Vm_traceActivity
                                                 [0xfeU]) 
                                                | vlSelfRef.__Vm_traceActivity
                                                [0xffU]) 
                                               | vlSelfRef.__Vm_traceActivity
                                               [0x100U]) 
                                              | vlSelfRef.__Vm_traceActivity
                                              [0x101U]) 
                                             | vlSelfRef.__Vm_traceActivity
                                             [0x102U]) 
                                            | vlSelfRef.__Vm_traceActivity
                                            [0x103U]) 
                                           | vlSelfRef.__Vm_traceActivity
                                           [0x104U]) 
                                          | vlSelfRef.__Vm_traceActivity
                                          [0x105U]) 
                                         | vlSelfRef.__Vm_traceActivity
                                         [0x106U]) 
                                        | vlSelfRef.__Vm_traceActivity
                                        [0x107U]) | 
                                       vlSelfRef.__Vm_traceActivity
                                       [0x108U]) | 
                                      vlSelfRef.__Vm_traceActivity
                                      [0x109U]) | vlSelfRef.__Vm_traceActivity
                                     [0x10aU]) | vlSelfRef.__Vm_traceActivity
                                    [0x10bU]) | vlSelfRef.__Vm_traceActivity
                                   [0x10cU]) | vlSelfRef.__Vm_traceActivity
                                  [0x10dU]) | vlSelfRef.__Vm_traceActivity
                                 [0x10eU]) | vlSelfRef.__Vm_traceActivity
                                [0x10fU]);
    if (VL_UNLIKELY((((__Vdeeptemp_h6f680d76__0 | vlSelfRef.__Vm_traceActivity
                       [0x110U]) | vlSelfRef.__Vm_traceActivity
                      [0x202U])))) {
        bufp->chgBit(oldp+714,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xbU] 
                                              >> 0x3fU)))));
        bufp->chgQData(oldp+715,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G[0]),64);
        bufp->chgQData(oldp+717,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G[1]),64);
        bufp->chgQData(oldp+719,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G[2]),64);
        bufp->chgQData(oldp+721,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G[3]),64);
        bufp->chgQData(oldp+723,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G[4]),64);
        bufp->chgQData(oldp+725,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G[5]),64);
        bufp->chgQData(oldp+727,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G[6]),64);
        bufp->chgQData(oldp+729,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G[7]),64);
        bufp->chgQData(oldp+731,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G[8]),64);
        bufp->chgQData(oldp+733,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G[9]),64);
        bufp->chgQData(oldp+735,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G[10]),64);
        bufp->chgQData(oldp+737,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G[11]),64);
        bufp->chgQData(oldp+739,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                 [0xbU]),64);
        bufp->chgQData(oldp+741,((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                  [0xbU] << 1U)),64);
        bufp->chgBit(oldp+743,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+744,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+745,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+746,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+747,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+748,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+749,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+750,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+751,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+752,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+753,((1U & (IData)(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                             [0U]))));
        bufp->chgBit(oldp+754,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+755,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+756,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+757,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+758,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+759,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+760,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+761,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+762,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+763,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+764,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+765,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+766,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+767,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+768,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+769,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+770,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+771,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+772,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+773,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+774,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+775,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+776,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+777,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+778,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+779,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+780,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+781,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+782,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+783,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+784,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+785,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+786,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+787,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+788,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+789,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+790,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+791,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+792,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+793,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+794,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+795,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+796,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+797,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+798,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+799,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+800,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+801,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+802,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+803,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+804,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+805,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+806,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+807,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+808,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+809,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+810,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+811,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+812,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+813,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+814,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+815,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+816,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+817,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+818,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+819,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+820,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+821,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+822,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+823,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+824,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+825,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+826,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+827,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+828,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+829,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+830,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+831,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+832,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+833,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+834,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+835,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+836,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+837,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+838,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [1U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+839,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+840,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+841,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+842,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+843,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+844,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+845,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+846,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+847,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+848,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+849,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+850,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+851,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+852,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+853,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+854,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [2U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+855,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [3U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+856,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [3U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+857,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [3U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+858,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [3U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+859,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [3U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+860,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [3U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+861,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [3U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+862,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [3U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+863,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [4U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+864,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [4U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+865,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [4U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+866,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [4U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+867,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [5U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+868,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [5U] 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+869,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+870,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+871,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+872,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+873,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+874,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+875,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+876,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+877,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+878,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+879,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+880,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+881,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+882,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+883,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+884,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+885,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+886,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+887,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+888,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+889,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+890,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+891,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+892,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+893,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+894,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+895,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+896,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+897,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+898,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [9U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+899,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 9U)))));
        bufp->chgBit(oldp+900,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+901,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+902,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+903,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+904,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+905,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+906,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+907,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+908,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+909,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+910,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+911,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+912,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+913,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+914,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+915,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+916,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+917,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+918,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+919,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 1U)))));
        bufp->chgBit(oldp+920,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 2U)))));
        bufp->chgBit(oldp+921,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+922,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+923,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+924,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+925,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+926,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+927,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+928,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+929,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+930,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+931,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+932,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+933,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+934,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+935,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+936,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+937,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+938,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+939,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+940,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+941,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 3U)))));
        bufp->chgBit(oldp+942,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 4U)))));
        bufp->chgBit(oldp+943,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+944,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+945,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+946,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+947,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+948,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+949,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+950,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+951,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+952,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+953,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+954,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+955,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+956,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+957,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 5U)))));
        bufp->chgBit(oldp+958,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 6U)))));
        bufp->chgBit(oldp+959,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 7U)))));
        bufp->chgBit(oldp+960,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [0xaU] 
                                              >> 8U)))));
        bufp->chgBit(oldp+961,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [6U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+962,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [6U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+963,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [7U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+964,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [7U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+965,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [7U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+966,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [7U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+967,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [7U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+968,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [7U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+969,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+970,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+971,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+972,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+973,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+974,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+975,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+976,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+977,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+978,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+979,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+980,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+981,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+982,((1U & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                              [8U] 
                                              >> 0x3bU)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x201U]))) {
        bufp->chgBit(oldp+983,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                & ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                                   | (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))));
        bufp->chgBit(oldp+984,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready) 
                                & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))));
        bufp->chgBit(oldp+985,((((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                 & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))) 
                                | (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))));
        bufp->chgBit(oldp+986,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__valid_shifter_final));
        bufp->chgBit(oldp+987,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__valid_shifter_final) 
                                & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__all_round_finish))));
        bufp->chgSData(oldp+988,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap),10);
        bufp->chgBit(oldp+989,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready));
        bufp->chgCData(oldp+990,((((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                   << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))),3);
        bufp->chgSData(oldp+991,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap),10);
        bufp->chgSData(oldp+992,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data),10);
        bufp->chgBit(oldp+993,((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now))));
        bufp->chgBit(oldp+994,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start));
        bufp->chgBit(oldp+995,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready));
        bufp->chgBit(oldp+996,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))));
        bufp->chgBit(oldp+997,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                & (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))));
        bufp->chgBit(oldp+998,((0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))));
        bufp->chgBit(oldp+999,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))));
        bufp->chgIData(oldp+1000,((((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                                & (1U 
                                                   == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                    & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                        << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                                   | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                       & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                      | ((- (IData)(
                                                    ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                     & (1U 
                                                        == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                         & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data))))),32);
        bufp->chgBit(oldp+1001,((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))));
        bufp->chgBit(oldp+1002,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                 & (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))));
        bufp->chgCData(oldp+1003,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now),2);
        bufp->chgBit(oldp+1004,((0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))));
        bufp->chgBit(oldp+1005,((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))));
        bufp->chgBit(oldp+1006,((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))));
        bufp->chgSData(oldp+1007,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__addr_wr),10);
        bufp->chgCData(oldp+1008,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now),2);
        bufp->chgBit(oldp+1009,((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))));
        bufp->chgBit(oldp+1010,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag));
        bufp->chgBit(oldp+1011,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag));
        bufp->chgBit(oldp+1012,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag));
        bufp->chgBit(oldp+1013,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done));
        bufp->chgBit(oldp+1014,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                 & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))));
        bufp->chgBit(oldp+1015,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                 & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))));
        bufp->chgBit(oldp+1016,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                 & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))));
        bufp->chgBit(oldp+1017,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__all_round_finish));
        bufp->chgBit(oldp+1018,(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap) 
                                 == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_clr))));
        bufp->chgCData(oldp+1019,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now),2);
        bufp->chgCData(oldp+1020,(((1U & (- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_idle_exit_en)))) 
                                   | (2U & (- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_clr_exit_en)))))),2);
        bufp->chgBit(oldp+1021,((0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now))));
        bufp->chgBit(oldp+1022,((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now))));
        bufp->chgBit(oldp+1023,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_idle_exit_en));
        bufp->chgBit(oldp+1024,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_clr_exit_en));
        bufp->chgCData(oldp+1025,((1U & (- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_idle_exit_en))))),2);
        bufp->chgCData(oldp+1026,((2U & (- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_clr_exit_en))))),2);
        bufp->chgBit(oldp+1027,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_is_not_calc));
        bufp->chgSData(oldp+1028,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_clr),10);
        bufp->chgSData(oldp+1029,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_data),10);
        bufp->chgIData(oldp+1030,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__temp_data),32);
        bufp->chgQData(oldp+1031,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg),64);
        bufp->chgQData(oldp+1033,((((QData)((IData)(
                                                    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[0U])))),64);
        bufp->chgSData(oldp+1035,((0x3ffU & (- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg 
                                                                   >> 0x3fU))))))),10);
        bufp->chgSData(oldp+1036,((0x3ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[2U])),10);
        bufp->chgWData(oldp+1037,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp),74);
        bufp->chgBit(oldp+1040,((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__temp_data 
                                 >> 0x1fU)));
        bufp->chgQData(oldp+1041,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth),35);
        bufp->chgIData(oldp+1043,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag),17);
        bufp->chgCData(oldp+1044,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[0]),5);
        bufp->chgCData(oldp+1045,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[1]),5);
        bufp->chgCData(oldp+1046,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[2]),5);
        bufp->chgCData(oldp+1047,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[3]),5);
        bufp->chgCData(oldp+1048,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[4]),5);
        bufp->chgCData(oldp+1049,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[5]),5);
        bufp->chgCData(oldp+1050,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[6]),5);
        bufp->chgCData(oldp+1051,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[7]),5);
        bufp->chgCData(oldp+1052,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[8]),5);
        bufp->chgCData(oldp+1053,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[9]),5);
        bufp->chgCData(oldp+1054,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[10]),5);
        bufp->chgCData(oldp+1055,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[11]),5);
        bufp->chgCData(oldp+1056,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[12]),5);
        bufp->chgCData(oldp+1057,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[13]),5);
        bufp->chgCData(oldp+1058,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[14]),5);
        bufp->chgCData(oldp+1059,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[15]),5);
        bufp->chgCData(oldp+1060,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[16]),5);
        bufp->chgCData(oldp+1061,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),5);
        bufp->chgCData(oldp+1062,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),5);
        bufp->chgCData(oldp+1063,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2]),5);
        bufp->chgCData(oldp+1064,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3]),5);
        bufp->chgCData(oldp+1065,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[4]),5);
        bufp->chgCData(oldp+1066,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[5]),5);
        bufp->chgCData(oldp+1067,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[6]),5);
        bufp->chgCData(oldp+1068,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[7]),5);
        bufp->chgCData(oldp+1069,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[8]),5);
        bufp->chgCData(oldp+1070,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[9]),5);
        bufp->chgCData(oldp+1071,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[10]),5);
        bufp->chgCData(oldp+1072,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[11]),5);
        bufp->chgCData(oldp+1073,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                  [0xbU]),5);
        bufp->chgCData(oldp+1074,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                  [0xcU]),5);
        bufp->chgCData(oldp+1075,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                  [0xdU]),5);
        bufp->chgCData(oldp+1076,((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                   [0xbU] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [0xcU] 
                                             ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [0xdU]))),5);
        bufp->chgCData(oldp+1077,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                         ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                           [0xbU] 
                                                           & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                           [0xcU]) 
                                                          | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                              [0xcU] 
                                                              | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                              [0xbU]) 
                                                             & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                             [0xdU])), 1U))),5);
        bufp->chgCData(oldp+1078,(((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [0xbU] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [0xcU]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [0xcU] 
                                                | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [0xbU]) 
                                               & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [0xdU]))),5);
        bufp->chgBit(oldp+1079,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [0xbU])));
        bufp->chgBit(oldp+1080,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [0xcU])));
        bufp->chgBit(oldp+1081,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [0xdU])));
        bufp->chgBit(oldp+1082,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [0xbU] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [0xcU]) | (
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                    [0xcU] 
                                                    | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                    [0xbU]) 
                                                   & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [0xdU])))));
        bufp->chgBit(oldp+1083,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xbU] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                 [0xcU] 
                                                 ^ 
                                                 vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                 [0xdU])))));
        bufp->chgBit(oldp+1084,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xbU] >> 1U))));
        bufp->chgBit(oldp+1085,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xcU] >> 1U))));
        bufp->chgBit(oldp+1086,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xdU] >> 1U))));
        bufp->chgBit(oldp+1087,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xbU] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xcU]) | 
                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xcU] | 
                                          vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xbU]) & 
                                         vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xdU])) >> 1U))));
        bufp->chgBit(oldp+1088,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [0xbU] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0xcU] 
                                                  ^ 
                                                  vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0xdU])) 
                                       >> 1U))));
        bufp->chgBit(oldp+1089,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xbU] >> 2U))));
        bufp->chgBit(oldp+1090,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xcU] >> 2U))));
        bufp->chgBit(oldp+1091,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xdU] >> 2U))));
        bufp->chgBit(oldp+1092,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xbU] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xcU]) | 
                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xcU] | 
                                          vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xbU]) & 
                                         vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xdU])) >> 2U))));
        bufp->chgBit(oldp+1093,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [0xbU] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0xcU] 
                                                  ^ 
                                                  vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0xdU])) 
                                       >> 2U))));
        bufp->chgBit(oldp+1094,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xbU] >> 3U))));
        bufp->chgBit(oldp+1095,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xcU] >> 3U))));
        bufp->chgBit(oldp+1096,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xdU] >> 3U))));
        bufp->chgBit(oldp+1097,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xbU] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xcU]) | 
                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xcU] | 
                                          vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xbU]) & 
                                         vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xdU])) >> 3U))));
        bufp->chgBit(oldp+1098,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [0xbU] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0xcU] 
                                                  ^ 
                                                  vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0xdU])) 
                                       >> 3U))));
        bufp->chgBit(oldp+1099,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xbU] >> 4U))));
        bufp->chgBit(oldp+1100,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xcU] >> 4U))));
        bufp->chgBit(oldp+1101,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xdU] >> 4U))));
        bufp->chgBit(oldp+1102,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xbU] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xcU]) | 
                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xcU] | 
                                          vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xbU]) & 
                                         vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xdU])) >> 4U))));
        bufp->chgBit(oldp+1103,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [0xbU] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0xcU] 
                                                  ^ 
                                                  vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0xdU])) 
                                       >> 4U))));
        bufp->chgCData(oldp+1104,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                  [0xeU]),5);
        bufp->chgCData(oldp+1105,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                  [0xfU]),5);
        bufp->chgCData(oldp+1106,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                  [0x10U]),5);
        bufp->chgCData(oldp+1107,((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                   [0xeU] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [0xfU] 
                                             ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [0x10U]))),5);
        bufp->chgCData(oldp+1108,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                         ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                           [0xeU] 
                                                           & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                           [0xfU]) 
                                                          | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                              [0xfU] 
                                                              | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                              [0xeU]) 
                                                             & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                             [0x10U])), 1U))),5);
        bufp->chgCData(oldp+1109,(((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [0xeU] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [0xfU]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [0xfU] 
                                                | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [0xeU]) 
                                               & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [0x10U]))),5);
        bufp->chgBit(oldp+1110,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [0xeU])));
        bufp->chgBit(oldp+1111,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [0xfU])));
        bufp->chgBit(oldp+1112,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [0x10U])));
        bufp->chgBit(oldp+1113,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [0xeU] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [0xfU]) | (
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                    [0xfU] 
                                                    | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                    [0xeU]) 
                                                   & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [0x10U])))));
        bufp->chgBit(oldp+1114,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xeU] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                 [0xfU] 
                                                 ^ 
                                                 vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                 [0x10U])))));
        bufp->chgBit(oldp+1115,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xeU] >> 1U))));
        bufp->chgBit(oldp+1116,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xfU] >> 1U))));
        bufp->chgBit(oldp+1117,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0x10U] >> 1U))));
        bufp->chgBit(oldp+1118,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xeU] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xfU]) | 
                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xfU] | 
                                          vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xeU]) & 
                                         vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0x10U])) 
                                       >> 1U))));
        bufp->chgBit(oldp+1119,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [0xeU] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0xfU] 
                                                  ^ 
                                                  vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0x10U])) 
                                       >> 1U))));
        bufp->chgBit(oldp+1120,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xeU] >> 2U))));
        bufp->chgBit(oldp+1121,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xfU] >> 2U))));
        bufp->chgBit(oldp+1122,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0x10U] >> 2U))));
        bufp->chgBit(oldp+1123,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xeU] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xfU]) | 
                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xfU] | 
                                          vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xeU]) & 
                                         vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0x10U])) 
                                       >> 2U))));
        bufp->chgBit(oldp+1124,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [0xeU] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0xfU] 
                                                  ^ 
                                                  vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0x10U])) 
                                       >> 2U))));
        bufp->chgBit(oldp+1125,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xeU] >> 3U))));
        bufp->chgBit(oldp+1126,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xfU] >> 3U))));
        bufp->chgBit(oldp+1127,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0x10U] >> 3U))));
        bufp->chgBit(oldp+1128,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xeU] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xfU]) | 
                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xfU] | 
                                          vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xeU]) & 
                                         vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0x10U])) 
                                       >> 3U))));
        bufp->chgBit(oldp+1129,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [0xeU] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0xfU] 
                                                  ^ 
                                                  vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0x10U])) 
                                       >> 3U))));
        bufp->chgBit(oldp+1130,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xeU] >> 4U))));
        bufp->chgBit(oldp+1131,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xfU] >> 4U))));
        bufp->chgBit(oldp+1132,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0x10U] >> 4U))));
        bufp->chgBit(oldp+1133,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xeU] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0xfU]) | 
                                        ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xfU] | 
                                          vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xeU]) & 
                                         vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [0x10U])) 
                                       >> 4U))));
        bufp->chgBit(oldp+1134,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [0xeU] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0xfU] 
                                                  ^ 
                                                  vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0x10U])) 
                                       >> 4U))));
        bufp->chgCData(oldp+1135,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                  [2U]),5);
        bufp->chgCData(oldp+1136,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                  [3U]),5);
        bufp->chgCData(oldp+1137,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                  [4U]),5);
        bufp->chgCData(oldp+1138,((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                   [2U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [3U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [4U]))),5);
        bufp->chgCData(oldp+1139,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                         ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                           [2U] 
                                                           & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                           [3U]) 
                                                          | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                              [3U] 
                                                              | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                              [2U]) 
                                                             & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                             [4U])), 1U))),5);
        bufp->chgCData(oldp+1140,(((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [2U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [3U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                              [3U] 
                                              | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                              [2U]) 
                                             & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [4U]))),5);
        bufp->chgBit(oldp+1141,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [2U])));
        bufp->chgBit(oldp+1142,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [3U])));
        bufp->chgBit(oldp+1143,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [4U])));
        bufp->chgBit(oldp+1144,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [2U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [3U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [3U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [2U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                 [4U])))));
        bufp->chgBit(oldp+1145,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [2U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [3U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [4U])))));
        bufp->chgBit(oldp+1146,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [2U] >> 1U))));
        bufp->chgBit(oldp+1147,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [3U] >> 1U))));
        bufp->chgBit(oldp+1148,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [4U] >> 1U))));
        bufp->chgBit(oldp+1149,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [2U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [3U]) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [3U] 
                                                   | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [2U]) 
                                                  & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [4U])) 
                                       >> 1U))));
        bufp->chgBit(oldp+1150,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [2U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [3U] 
                                                ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [4U])) 
                                       >> 1U))));
        bufp->chgBit(oldp+1151,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [2U] >> 2U))));
        bufp->chgBit(oldp+1152,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [3U] >> 2U))));
        bufp->chgBit(oldp+1153,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [4U] >> 2U))));
        bufp->chgBit(oldp+1154,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [2U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [3U]) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [3U] 
                                                   | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [2U]) 
                                                  & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [4U])) 
                                       >> 2U))));
        bufp->chgBit(oldp+1155,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [2U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [3U] 
                                                ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [4U])) 
                                       >> 2U))));
        bufp->chgBit(oldp+1156,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [2U] >> 3U))));
        bufp->chgBit(oldp+1157,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [3U] >> 3U))));
        bufp->chgBit(oldp+1158,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [4U] >> 3U))));
        bufp->chgBit(oldp+1159,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [2U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [3U]) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [3U] 
                                                   | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [2U]) 
                                                  & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [4U])) 
                                       >> 3U))));
        bufp->chgBit(oldp+1160,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [2U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [3U] 
                                                ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [4U])) 
                                       >> 3U))));
        bufp->chgBit(oldp+1161,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [2U] >> 4U))));
        bufp->chgBit(oldp+1162,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [3U] >> 4U))));
        bufp->chgBit(oldp+1163,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [4U] >> 4U))));
        bufp->chgBit(oldp+1164,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [2U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [3U]) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [3U] 
                                                   | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [2U]) 
                                                  & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [4U])) 
                                       >> 4U))));
        bufp->chgBit(oldp+1165,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [2U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [3U] 
                                                ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [4U])) 
                                       >> 4U))));
        bufp->chgCData(oldp+1166,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                  [5U]),5);
        bufp->chgCData(oldp+1167,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                  [6U]),5);
        bufp->chgCData(oldp+1168,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                  [7U]),5);
        bufp->chgCData(oldp+1169,((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                   [5U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [6U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [7U]))),5);
        bufp->chgCData(oldp+1170,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                         ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                           [5U] 
                                                           & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                           [6U]) 
                                                          | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                              [6U] 
                                                              | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                              [5U]) 
                                                             & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                             [7U])), 1U))),5);
        bufp->chgCData(oldp+1171,(((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [5U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [6U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                              [6U] 
                                              | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                              [5U]) 
                                             & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [7U]))),5);
        bufp->chgBit(oldp+1172,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [5U])));
        bufp->chgBit(oldp+1173,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [6U])));
        bufp->chgBit(oldp+1174,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [7U])));
        bufp->chgBit(oldp+1175,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [5U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [6U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [6U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [5U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                 [7U])))));
        bufp->chgBit(oldp+1176,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [5U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [6U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [7U])))));
        bufp->chgBit(oldp+1177,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [5U] >> 1U))));
        bufp->chgBit(oldp+1178,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [6U] >> 1U))));
        bufp->chgBit(oldp+1179,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [7U] >> 1U))));
        bufp->chgBit(oldp+1180,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [5U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [6U]) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [6U] 
                                                   | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [5U]) 
                                                  & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [7U])) 
                                       >> 1U))));
        bufp->chgBit(oldp+1181,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [5U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [6U] 
                                                ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [7U])) 
                                       >> 1U))));
        bufp->chgBit(oldp+1182,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [5U] >> 2U))));
        bufp->chgBit(oldp+1183,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [6U] >> 2U))));
        bufp->chgBit(oldp+1184,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [7U] >> 2U))));
        bufp->chgBit(oldp+1185,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [5U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [6U]) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [6U] 
                                                   | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [5U]) 
                                                  & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [7U])) 
                                       >> 2U))));
        bufp->chgBit(oldp+1186,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [5U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [6U] 
                                                ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [7U])) 
                                       >> 2U))));
        bufp->chgBit(oldp+1187,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [5U] >> 3U))));
        bufp->chgBit(oldp+1188,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [6U] >> 3U))));
        bufp->chgBit(oldp+1189,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [7U] >> 3U))));
        bufp->chgBit(oldp+1190,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [5U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [6U]) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [6U] 
                                                   | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [5U]) 
                                                  & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [7U])) 
                                       >> 3U))));
        bufp->chgBit(oldp+1191,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [5U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [6U] 
                                                ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [7U])) 
                                       >> 3U))));
        bufp->chgBit(oldp+1192,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [5U] >> 4U))));
        bufp->chgBit(oldp+1193,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [6U] >> 4U))));
        bufp->chgBit(oldp+1194,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [7U] >> 4U))));
        bufp->chgBit(oldp+1195,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [5U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [6U]) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [6U] 
                                                   | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [5U]) 
                                                  & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [7U])) 
                                       >> 4U))));
        bufp->chgBit(oldp+1196,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [5U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [6U] 
                                                ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [7U])) 
                                       >> 4U))));
        bufp->chgCData(oldp+1197,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                  [8U]),5);
        bufp->chgCData(oldp+1198,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                  [9U]),5);
        bufp->chgCData(oldp+1199,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                  [0xaU]),5);
        bufp->chgCData(oldp+1200,((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                   [8U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [9U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [0xaU]))),5);
        bufp->chgCData(oldp+1201,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                         ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                           [8U] 
                                                           & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                           [9U]) 
                                                          | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                              [9U] 
                                                              | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                              [8U]) 
                                                             & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                             [0xaU])), 1U))),5);
        bufp->chgCData(oldp+1202,(((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [8U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [9U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                              [9U] 
                                              | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                              [8U]) 
                                             & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [0xaU]))),5);
        bufp->chgBit(oldp+1203,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [8U])));
        bufp->chgBit(oldp+1204,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [9U])));
        bufp->chgBit(oldp+1205,((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [0xaU])));
        bufp->chgBit(oldp+1206,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [8U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [9U]) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [9U] 
                                                  | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [8U]) 
                                                 & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                 [0xaU])))));
        bufp->chgBit(oldp+1207,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [8U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [9U] 
                                               ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [0xaU])))));
        bufp->chgBit(oldp+1208,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [8U] >> 1U))));
        bufp->chgBit(oldp+1209,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [9U] >> 1U))));
        bufp->chgBit(oldp+1210,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xaU] >> 1U))));
        bufp->chgBit(oldp+1211,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [8U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [9U]) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [9U] 
                                                   | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [8U]) 
                                                  & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0xaU])) 
                                       >> 1U))));
        bufp->chgBit(oldp+1212,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [8U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [9U] 
                                                ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [0xaU])) 
                                       >> 1U))));
        bufp->chgBit(oldp+1213,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [8U] >> 2U))));
        bufp->chgBit(oldp+1214,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [9U] >> 2U))));
        bufp->chgBit(oldp+1215,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xaU] >> 2U))));
        bufp->chgBit(oldp+1216,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [8U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [9U]) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [9U] 
                                                   | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [8U]) 
                                                  & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0xaU])) 
                                       >> 2U))));
        bufp->chgBit(oldp+1217,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [8U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [9U] 
                                                ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [0xaU])) 
                                       >> 2U))));
        bufp->chgBit(oldp+1218,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [8U] >> 3U))));
        bufp->chgBit(oldp+1219,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [9U] >> 3U))));
        bufp->chgBit(oldp+1220,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xaU] >> 3U))));
        bufp->chgBit(oldp+1221,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [8U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [9U]) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [9U] 
                                                   | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [8U]) 
                                                  & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0xaU])) 
                                       >> 3U))));
        bufp->chgBit(oldp+1222,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [8U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [9U] 
                                                ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [0xaU])) 
                                       >> 3U))));
        bufp->chgBit(oldp+1223,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [8U] >> 4U))));
        bufp->chgBit(oldp+1224,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [9U] >> 4U))));
        bufp->chgBit(oldp+1225,((1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                       [0xaU] >> 4U))));
        bufp->chgBit(oldp+1226,((1U & (((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [8U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                         [9U]) | ((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [9U] 
                                                   | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                   [8U]) 
                                                  & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                  [0xaU])) 
                                       >> 4U))));
        bufp->chgBit(oldp+1227,((1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [8U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [9U] 
                                                ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [0xaU])) 
                                       >> 4U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x202U]))) {
        bufp->chgBit(oldp+1228,((1U & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__valid_flag) 
                                       >> 1U))));
        bufp->chgCData(oldp+1229,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__valid_flag),2);
        bufp->chgQData(oldp+1230,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[0]),64);
        bufp->chgQData(oldp+1232,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[1]),64);
        bufp->chgQData(oldp+1234,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[2]),64);
        bufp->chgQData(oldp+1236,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[3]),64);
        bufp->chgQData(oldp+1238,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[4]),64);
        bufp->chgQData(oldp+1240,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[5]),64);
        bufp->chgQData(oldp+1242,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[6]),64);
        bufp->chgQData(oldp+1244,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[7]),64);
        bufp->chgQData(oldp+1246,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[8]),64);
        bufp->chgQData(oldp+1248,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[9]),64);
        bufp->chgQData(oldp+1250,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[10]),64);
        bufp->chgQData(oldp+1252,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[11]),64);
        bufp->chgQData(oldp+1254,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[12]),64);
        bufp->chgQData(oldp+1256,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[13]),64);
        bufp->chgQData(oldp+1258,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[14]),64);
        bufp->chgQData(oldp+1260,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[15]),64);
        bufp->chgQData(oldp+1262,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[16]),64);
        bufp->chgQData(oldp+1264,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[17]),64);
        bufp->chgQData(oldp+1266,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[18]),64);
        bufp->chgQData(oldp+1268,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg[0]),64);
        bufp->chgQData(oldp+1270,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg[1]),64);
        bufp->chgQData(oldp+1272,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),64);
        bufp->chgQData(oldp+1274,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),64);
        bufp->chgQData(oldp+1276,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2]),64);
        bufp->chgQData(oldp+1278,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3]),64);
        bufp->chgQData(oldp+1280,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[4]),64);
        bufp->chgQData(oldp+1282,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[5]),64);
        bufp->chgQData(oldp+1284,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[6]),64);
        bufp->chgQData(oldp+1286,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[7]),64);
        bufp->chgQData(oldp+1288,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[8]),64);
        bufp->chgQData(oldp+1290,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[9]),64);
        bufp->chgQData(oldp+1292,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[10]),64);
        bufp->chgQData(oldp+1294,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[11]),64);
        bufp->chgQData(oldp+1296,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[12]),64);
        bufp->chgQData(oldp+1298,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg
                                  [0U]),64);
        bufp->chgQData(oldp+1300,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg
                                  [1U]),64);
        bufp->chgQData(oldp+1302,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                  [1U]),64);
        bufp->chgQData(oldp+1304,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                  [2U]),64);
        bufp->chgQData(oldp+1306,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                  [3U]),64);
        bufp->chgQData(oldp+1308,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit.out_op1),64);
        bufp->chgQData(oldp+1310,(VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U)),64);
        bufp->chgQData(oldp+1312,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit.__PVT__cout),64);
        bufp->chgBit(oldp+1314,((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [1U]))));
        bufp->chgBit(oldp+1315,((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [2U]))));
        bufp->chgBit(oldp+1316,((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [3U]))));
        bufp->chgBit(oldp+1317,((1U & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U]) 
                                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [2U])) 
                                       | (((IData)(
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U]) 
                                           | (IData)(
                                                     vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [1U])) 
                                          & (IData)(
                                                    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [3U]))))));
        bufp->chgBit(oldp+1318,((1U & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U]) 
                                       ^ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [2U]) 
                                          ^ (IData)(
                                                    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [3U]))))));
        bufp->chgBit(oldp+1319,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1320,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1321,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1322,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0xaU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0xaU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0xaU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0xaU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1323,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0xaU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0xaU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1324,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1325,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1326,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1327,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0xbU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0xbU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0xbU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0xbU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1328,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0xbU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0xbU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1329,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1330,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1331,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1332,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0xcU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0xcU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0xcU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0xcU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1333,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0xcU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1334,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1335,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1336,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1337,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0xdU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0xdU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0xdU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0xdU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1338,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0xdU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0xdU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1339,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1340,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1341,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1342,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0xeU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0xeU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0xeU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0xeU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1343,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0xeU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0xeU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1344,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1345,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1346,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1347,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0xfU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0xfU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0xfU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0xfU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1348,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0xfU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1349,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1350,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1351,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1352,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x10U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x10U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x10U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x10U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1353,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x10U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x10U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1354,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1355,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1356,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1357,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x11U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x11U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x11U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x11U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1358,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x11U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x11U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1359,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1360,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1361,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1362,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x12U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x12U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x12U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x12U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1363,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x12U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1364,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1365,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1366,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1367,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x13U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x13U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x13U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x13U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1368,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x13U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x13U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1369,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1370,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1371,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1372,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 1U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 1U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 1U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 1U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1373,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 1U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 1U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1374,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1375,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1376,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1377,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x14U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x14U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x14U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x14U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1378,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x14U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x14U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1379,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1380,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1381,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1382,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x15U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x15U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x15U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x15U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1383,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x15U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1384,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1385,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1386,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1387,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x16U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x16U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x16U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x16U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1388,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x16U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x16U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1389,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1390,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1391,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1392,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x17U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x17U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x17U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x17U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1393,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x17U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x17U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1394,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1395,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1396,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1397,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x18U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x18U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x18U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x18U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1398,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x18U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x18U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1399,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1400,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1401,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1402,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x19U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x19U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x19U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x19U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1403,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x19U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x19U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1404,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1405,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1406,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1407,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x1aU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x1aU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x1aU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x1aU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1408,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x1aU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x1aU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1409,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1410,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1411,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1412,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x1bU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x1bU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x1bU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x1bU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1413,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x1bU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x1bU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1414,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1415,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1416,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1417,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x1cU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x1cU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x1cU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x1cU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1418,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x1cU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x1cU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1419,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1420,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1421,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1422,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x1dU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x1dU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x1dU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x1dU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1423,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x1dU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x1dU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1424,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1425,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1426,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1427,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 2U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 2U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 2U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 2U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1428,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 2U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 2U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1429,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1430,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1431,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1432,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x1eU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x1eU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x1eU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x1eU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1433,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x1eU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1434,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1435,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1436,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1437,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x1fU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x1fU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x1fU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x1fU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1438,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x1fU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x1fU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1439,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1440,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1441,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1442,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x20U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x20U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x20U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x20U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1443,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x20U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x20U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1444,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1445,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1446,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1447,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x21U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x21U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x21U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x21U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1448,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x21U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x21U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1449,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1450,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1451,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1452,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x22U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x22U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x22U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x22U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1453,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x22U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x22U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1454,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1455,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1456,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1457,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x23U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x23U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x23U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x23U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1458,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x23U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x23U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1459,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1460,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1461,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1462,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x24U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x24U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x24U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x24U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1463,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x24U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x24U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1464,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1465,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1466,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1467,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x25U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x25U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x25U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x25U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1468,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x25U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x25U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1469,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1470,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1471,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1472,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x26U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x26U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x26U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x26U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1473,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x26U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x26U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1474,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1475,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1476,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1477,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x27U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x27U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x27U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x27U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1478,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x27U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x27U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1479,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1480,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1481,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1482,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 3U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 3U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 3U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 3U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1483,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 3U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 3U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1484,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1485,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1486,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1487,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x28U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x28U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x28U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x28U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1488,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x28U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x28U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1489,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1490,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1491,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1492,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x29U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x29U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x29U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x29U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1493,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x29U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x29U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1494,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1495,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1496,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1497,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x2aU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x2aU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x2aU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x2aU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1498,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x2aU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x2aU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1499,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1500,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1501,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1502,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x2bU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x2bU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x2bU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x2bU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1503,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x2bU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x2bU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1504,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1505,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1506,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1507,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x2cU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x2cU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x2cU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x2cU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1508,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x2cU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x2cU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1509,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1510,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1511,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1512,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x2dU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x2dU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x2dU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x2dU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1513,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x2dU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x2dU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1514,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1515,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1516,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1517,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x2eU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x2eU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x2eU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x2eU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1518,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x2eU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x2eU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1519,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1520,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1521,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1522,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x2fU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x2fU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x2fU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x2fU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1523,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x2fU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x2fU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1524,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1525,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1526,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1527,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x30U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x30U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x30U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x30U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1528,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x30U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x30U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1529,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1530,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1531,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1532,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x31U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x31U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x31U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x31U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1533,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x31U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x31U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1534,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1535,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1536,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1537,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 4U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 4U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 4U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 4U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1538,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 4U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 4U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1539,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1540,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1541,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1542,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x32U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x32U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x32U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x32U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1543,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x32U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x32U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1544,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1545,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1546,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1547,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x33U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x33U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x33U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x33U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1548,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x33U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x33U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1549,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1550,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1551,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1552,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x34U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x34U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x34U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x34U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1553,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x34U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x34U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1554,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1555,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1556,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1557,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x35U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x35U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x35U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x35U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1558,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x35U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x35U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1559,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1560,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1561,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1562,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x36U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x36U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x36U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x36U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1563,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x36U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x36U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1564,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1565,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1566,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1567,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x37U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x37U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x37U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x37U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1568,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x37U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x37U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1569,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1570,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1571,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1572,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x38U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x38U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x38U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x38U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1573,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x38U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x38U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1574,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1575,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1576,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1577,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x39U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x39U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x39U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x39U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1578,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x39U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x39U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1579,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1580,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1581,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1582,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x3aU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x3aU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x3aU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x3aU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1583,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x3aU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x3aU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1584,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1585,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1586,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1587,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x3bU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x3bU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x3bU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x3bU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1588,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x3bU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x3bU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1589,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1590,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1591,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1592,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 5U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 5U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 5U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 5U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1593,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 5U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 5U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1594,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1595,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1596,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1597,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x3cU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x3cU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x3cU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x3cU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1598,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x3cU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x3cU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1599,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1600,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1601,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1602,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x3dU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x3dU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x3dU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x3dU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1603,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x3dU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x3dU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1604,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1605,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1606,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1607,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x3eU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x3eU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x3eU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x3eU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1608,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x3eU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1609,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1610,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1611,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1612,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 0x3fU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x3fU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 0x3fU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 0x3fU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+1613,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 0x3fU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 0x3fU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+1614,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1615,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1616,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1617,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 6U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 6U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 6U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 6U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1618,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 6U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 6U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1619,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1620,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1621,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1622,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 7U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 7U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 7U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 7U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1623,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 7U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 7U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1624,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1625,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1626,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1627,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 8U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 8U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 8U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 8U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1628,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 8U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 8U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1629,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [1U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1630,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [2U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1631,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [3U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1632,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [1U] 
                                                 >> 9U)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 9U))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [2U] 
                                                    >> 9U)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [1U] 
                                                      >> 9U))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1633,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [1U] 
                                                >> 9U)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [2U] 
                                                   >> 9U)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [3U] 
                                                     >> 9U)))))));
        bufp->chgQData(oldp+1634,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                  [4U]),64);
        bufp->chgQData(oldp+1636,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                  [5U]),64);
        bufp->chgQData(oldp+1638,(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                  [6U]),64);
        bufp->chgQData(oldp+1640,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit.out_op1),64);
        bufp->chgQData(oldp+1642,(VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U)),64);
        bufp->chgQData(oldp+1644,(vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit.__PVT__cout),64);
        bufp->chgBit(oldp+1646,((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [4U]))));
        bufp->chgBit(oldp+1647,((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [5U]))));
        bufp->chgBit(oldp+1648,((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                              [6U]))));
        bufp->chgBit(oldp+1649,((1U & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [4U]) 
                                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [5U])) 
                                       | (((IData)(
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [5U]) 
                                           | (IData)(
                                                     vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [4U])) 
                                          & (IData)(
                                                    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [6U]))))));
        bufp->chgBit(oldp+1650,((1U & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [4U]) 
                                       ^ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                  [5U]) 
                                          ^ (IData)(
                                                    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [6U]))))));
        bufp->chgBit(oldp+1651,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [4U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1652,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [5U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1653,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [6U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1654,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [4U] 
                                                 >> 0xaU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [5U] 
                                                   >> 0xaU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [5U] 
                                                    >> 0xaU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [4U] 
                                                      >> 0xaU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [6U] 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1655,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [4U] 
                                                >> 0xaU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [5U] 
                                                   >> 0xaU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [6U] 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1656,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [4U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1657,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [5U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1658,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [6U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1659,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [4U] 
                                                 >> 0xbU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [5U] 
                                                   >> 0xbU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [5U] 
                                                    >> 0xbU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [4U] 
                                                      >> 0xbU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [6U] 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1660,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [4U] 
                                                >> 0xbU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [5U] 
                                                   >> 0xbU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [6U] 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1661,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [4U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1662,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [5U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1663,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [6U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1664,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [4U] 
                                                 >> 0xcU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [5U] 
                                                   >> 0xcU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [5U] 
                                                    >> 0xcU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [4U] 
                                                      >> 0xcU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [6U] 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1665,((1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                [4U] 
                                                >> 0xcU)) 
                                       ^ ((IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [5U] 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [6U] 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1666,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [4U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1667,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [5U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1668,((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                               [6U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1669,((1U & (((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                 [4U] 
                                                 >> 0xdU)) 
                                        & (IData)((
                                                   vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                   [5U] 
                                                   >> 0xdU))) 
                                       | (((IData)(
                                                   (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                    [5U] 
                                                    >> 0xdU)) 
                                           | (IData)(
                                                     (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                      [4U] 
                                                      >> 0xdU))) 
                                          & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                                                     [6U] 
                                                     >> 0xdU)))))));
    }
}
