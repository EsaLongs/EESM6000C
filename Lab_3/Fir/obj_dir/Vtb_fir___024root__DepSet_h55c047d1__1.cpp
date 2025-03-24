// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fir.h for the primary calling header

#include "Vtb_fir__pch.h"
#include "Vtb_fir__Syms.h"
#include "Vtb_fir___024root.h"

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__49(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__49\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[0U] 
        = ((0x3feU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [0U]) | (1U & ((((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg 
                                      >> 0x3fU)) & 
                             vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[2U]) 
                            | ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg 
                                        >> 0x3fU)) 
                               & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                          [0xbU] >> 0x3fU)))) 
                           | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[2U] 
                              & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                         [0xbU] >> 0x3fU))))));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__51(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__51\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__0__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1U] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__0__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1U] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2U] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__0__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1U] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__0__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2U] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__3__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3U] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__3__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__0__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1U] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__0__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2U] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__3__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3U] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__3__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[4U] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__6__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[5U] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__6__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1U] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2U] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3U] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[4U] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[5U] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[6U] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[7U] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__10__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[8U] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__10__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[5U][1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[5U][0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[4U][2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[4U][1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[4U][0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[3U][3U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [3U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[3U][2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[3U][1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[3U][0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[2U][5U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [5U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[2U][4U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [4U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[2U][3U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [3U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[2U][2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[2U][1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[2U][0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][8U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [8U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][7U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [7U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][6U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [6U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][5U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [5U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][4U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [4U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][3U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [3U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [6U][1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [6U][0U];
}

VL_INLINE_OPT void Vtb_fir___024root___act_comb__TOP__2(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_comb__TOP__2\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_res[0U] 
        = ((0xfffffffeU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_res[0U]) 
           | (1U & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg) 
                    ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[0U])));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_res[0U] 
        = ((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_res[0U]) 
           | ((IData)((0x7fffffffffffffffULL & ((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                 [0U] 
                                                 >> 1U) 
                                                ^ vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                                [0xbU]))) 
              << 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_res[1U] 
        = (((IData)((0x7fffffffffffffffULL & ((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                               [0U] 
                                               >> 1U) 
                                              ^ vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xbU]))) 
            >> 0x1fU) | ((IData)(((0x7fffffffffffffffULL 
                                   & ((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                       [0U] >> 1U) 
                                      ^ vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                      [0xbU])) >> 0x20U)) 
                         << 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_res[2U] 
        = (0x3ffU & ((0x3feU & ((0xfffffffeU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                 [0U]) ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                          [7U] << 1U))) 
                     | (1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg 
                                       >> 0x3fU)) ^ 
                              (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[2U] 
                               ^ (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                          [0xbU] >> 0x3fU)))))));
}

void Vtb_fir___024root___nba_sequent__TOP__0(Vtb_fir___024root* vlSelf);
void Vtb_fir_brent_kung_adder_nbit__A40___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit__0(Vtb_fir_brent_kung_adder_nbit__A40* vlSelf);
void Vtb_fir___024root___nba_sequent__TOP__1(Vtb_fir___024root* vlSelf);
void Vtb_fir_brent_kung_adder_nbit__A40___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit__0(Vtb_fir_brent_kung_adder_nbit__A40* vlSelf);
void Vtb_fir_op_3_to_2_nbit___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit__0(Vtb_fir_op_3_to_2_nbit* vlSelf);
void Vtb_fir_op_3_to_2_nbit___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit__0(Vtb_fir_op_3_to_2_nbit* vlSelf);
void Vtb_fir_op_3_to_2_nbit___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit__0(Vtb_fir_op_3_to_2_nbit* vlSelf);
void Vtb_fir_op_3_to_2_nbit___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__10__KET____DOT__u_op_3_to_2_nbit__0(Vtb_fir_op_3_to_2_nbit* vlSelf);
void Vtb_fir_op_3_to_2_nbit___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__13__KET____DOT__u_op_3_to_2_nbit__0(Vtb_fir_op_3_to_2_nbit* vlSelf);
void Vtb_fir_op_3_to_2_nbit___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__16__KET____DOT__u_op_3_to_2_nbit__0(Vtb_fir_op_3_to_2_nbit* vlSelf);
void Vtb_fir___024root___nba_sequent__TOP__2(Vtb_fir___024root* vlSelf);
void Vtb_fir___024root___nba_sequent__TOP__3(Vtb_fir___024root* vlSelf);
void Vtb_fir___024root___nba_comb__TOP__0(Vtb_fir___024root* vlSelf);
void Vtb_fir___024root___nba_comb__TOP__1(Vtb_fir___024root* vlSelf);
void Vtb_fir___024root___nba_comb__TOP__2(Vtb_fir___024root* vlSelf);
void Vtb_fir___024root___nba_sequent__TOP__4(Vtb_fir___024root* vlSelf);
void Vtb_fir___024root___act_comb__TOP__0(Vtb_fir___024root* vlSelf);
void Vtb_fir___024root___nba_comb__TOP__4(Vtb_fir___024root* vlSelf);

void Vtb_fir___024root___eval_nba(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___eval_nba\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xc00000ULL & vlSelfRef.__VnbaTriggered.word(8U))) {
        Vtb_fir___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x201U] = 1U;
        Vtb_fir_brent_kung_adder_nbit__A40___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit__0((&vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit));
    }
    if ((0x1400000ULL & vlSelfRef.__VnbaTriggered.word(8U))) {
        Vtb_fir___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x202U] = 1U;
        Vtb_fir_brent_kung_adder_nbit__A40___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit__0((&vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit));
        Vtb_fir_op_3_to_2_nbit___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit__0((&vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit));
        Vtb_fir_op_3_to_2_nbit___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit__0((&vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit));
        Vtb_fir_op_3_to_2_nbit___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit__0((&vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit));
        Vtb_fir_op_3_to_2_nbit___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__10__KET____DOT__u_op_3_to_2_nbit__0((&vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__10__KET____DOT__u_op_3_to_2_nbit));
        Vtb_fir_op_3_to_2_nbit___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__13__KET____DOT__u_op_3_to_2_nbit__0((&vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__13__KET____DOT__u_op_3_to_2_nbit));
        Vtb_fir_op_3_to_2_nbit___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__16__KET____DOT__u_op_3_to_2_nbit__0((&vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__16__KET____DOT__u_op_3_to_2_nbit));
        Vtb_fir___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(8U))) {
        Vtb_fir___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0xe400000ULL & vlSelfRef.__VnbaTriggered.word(8U))) {
        Vtb_fir___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x203U] = 1U;
    }
    if ((0xec00000ULL & vlSelfRef.__VnbaTriggered.word(8U))) {
        Vtb_fir___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x204U] = 1U;
    }
    if (((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U)) 
         | (0xc00000ULL & vlSelfRef.__VnbaTriggered.word(8U)))) {
        Vtb_fir___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0xc00000ULL & vlSelfRef.__VnbaTriggered.word(8U))) {
        Vtb_fir___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x205U] = 1U;
    }
    if ((0x6c00000ULL & vlSelfRef.__VnbaTriggered.word(8U))) {
        Vtb_fir___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0xec00000ULL & vlSelfRef.__VnbaTriggered.word(8U))) {
        Vtb_fir___024root___nba_comb__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x206U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_fir___024root___nba_sequent__TOP__0(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___nba_sequent__TOP__0\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag;
    __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag = 0;
    CData/*0:0*/ __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag;
    __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag = 0;
    CData/*0:0*/ __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag;
    __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag = 0;
    SData/*9:0*/ __Vdly__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap;
    __Vdly__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap = 0;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag;
    __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag;
    __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag;
    __Vdly__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap;
    if (vlSelfRef.tb_fir__DOT__axis_rst_n) {
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__addr_wr 
            = (0x3ffU & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2wdata_ena)
                          ? (vlSelfRef.tb_fir__DOT__awaddr 
                             >> 2U) : (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__addr_wr)));
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data 
            = (0x3ffU & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_wdata_exit_ena) 
                          & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag))
                          ? vlSelfRef.tb_fir__DOT__wdata
                          : (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)));
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now 
            = (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_idle_exit_ena) 
                | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_rdata_exit_ena) 
                   | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_wdata_exit_ena)))
                ? ((1U & (- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_idle_exit2rdata_ena)))) 
                   | (2U & (- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_idle_exit2wdata_ena)))))
                : (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now));
        if (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__stall) {
            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg;
            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__valid_shifter_final 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__valid_shifter_final;
        } else {
            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg 
                = ((0xfffffffffffffffeULL & ((0xfffffffffffffffeULL 
                                              & vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__P
                                              [0U]) 
                                             ^ (vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit.__PVT__G
                                                [0xbU] 
                                                << 1U))) 
                   | (QData)((IData)((1U & ((IData)(
                                                    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg
                                                    [0U]) 
                                            ^ (IData)(
                                                      vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg
                                                      [1U]))))));
            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__valid_shifter_final 
                = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__valid_flag) 
                   >> 1U);
        }
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_data 
            = (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__delay_finish) 
                | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_is_not_calc))
                ? 0U : (0x3ffU & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__stall)
                                   ? (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_data)
                                   : ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__one_round_finish)
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_data))
                                       : (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_data)))));
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_clr 
            = ((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now))
                ? (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_clr)))
                : 0U);
        if (((0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now)) 
             | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__data_hsked))) {
            __Vtemp_8[1U] = 0U;
            __Vtemp_8[2U] = 0U;
            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[0U] = 0U;
        } else if (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__stall) {
            __Vtemp_8[1U] = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[1U];
            __Vtemp_8[2U] = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[2U];
            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[0U] 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[0U];
        } else {
            __Vtemp_8[1U] = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_res[1U];
            __Vtemp_8[2U] = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_res[2U];
            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[0U] 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_res[0U];
        }
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap 
            = (0x3ffU & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_wdata_exit_ena) 
                          & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag))
                          ? vlSelfRef.tb_fir__DOT__wdata
                          : (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)));
        if ((((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__one_round_finish) 
              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__all_round_finish)) 
             | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_is_not_calc))) {
            __Vdly__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap = 0U;
            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__temp_data = 0U;
        } else if (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__stall) {
            __Vdly__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap 
                = (0x3ffU & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap));
            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__temp_data 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__temp_data;
        } else {
            __Vdly__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap)));
            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__temp_data 
                = vlSelfRef.tb_fir__DOT__u_data_ram_behave__DOT__ram
                [vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap];
        }
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now 
            = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_exit_en)
                ? ((1U & (- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_idle_exit_en)))) 
                   | (2U & (- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_clr_exit_en)))))
                : (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now));
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now 
            = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_exit_ena)
                ? ((1U & (- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2rdata_ena)))) 
                   | (2U & (- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2wdata_ena)))))
                : (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now));
        __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag 
            = ((~ (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__flag_clr)) 
               & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__access_ctrl) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_idle_exit_ena)) 
                  | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag)));
        __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag 
            = ((~ (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__flag_clr)) 
               & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__access_tap) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_idle_exit_ena)) 
                  | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag)));
        __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag 
            = ((~ (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__flag_clr)) 
               & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__access_data) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_idle_exit_ena)) 
                  | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag)));
    } else {
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__addr_wr = 0U;
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data = 0U;
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now = 0U;
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg = 0ULL;
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_data = 0U;
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_clr = 0U;
        __Vtemp_8[1U] = 0U;
        __Vtemp_8[2U] = 0U;
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[0U] = 0U;
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap = 0U;
        __Vdly__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap = 0U;
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now = 0U;
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now = 0U;
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__temp_data = 0U;
        __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag = 0U;
        __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag = 0U;
        __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag = 0U;
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__valid_shifter_final = 0U;
    }
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[1U] 
        = __Vtemp_8[1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[2U] 
        = __Vtemp_8[2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done 
        = (1U & ((~ (IData)(vlSelfRef.tb_fir__DOT__axis_rst_n)) 
                 | ((~ (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)) 
                    & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__delay_finish) 
                       | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done)))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag 
        = __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag 
        = __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap 
        = __Vdly__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[0U] 
        = ((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [0U]) | (0x3feU & ((0x3feU & (- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg 
                                                                >> 0x3fU)))))) 
                               ^ (0xfffffffeU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[2U]))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[0U] 
        = ((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [0U]) | (0x3feU & ((- (IData)((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg 
                                                         >> 0x3fU))))) 
                               & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[2U])));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_is_not_calc 
        = ((0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now)) 
           | (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_clr_exit_en 
        = ((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now)) 
           & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap) 
              == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_clr)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__all_round_finish 
        = ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now)) 
           & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data) 
              == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_data)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start 
        = ((IData)(vlSelfRef.tb_fir__DOT__axis_rst_n) 
           & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_wdata_exit_ena) 
               & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag)) 
              & vlSelfRef.tb_fir__DOT__wdata));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
        = (((QData)((IData)((3U & (- (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__temp_data 
                                              >> 0x1fU)))))) 
            << 0x21U) | ((QData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__temp_data)) 
                         << 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag 
        = __Vdly__tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1fffeU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                             >> 2U))) && ((1U & (~ (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 1U)))) 
                                          || (1U & 
                                              (~ (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth))))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1fffdU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 4U))) && ((1U & (~ (IData)(
                                                            (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                             >> 3U)))) 
                                           || (1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 2U)))))) 
              << 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1fffbU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 6U))) && ((1U & (~ (IData)(
                                                            (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                             >> 5U)))) 
                                           || (1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 4U)))))) 
              << 2U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1fff7U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 8U))) && ((1U & (~ (IData)(
                                                            (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                             >> 7U)))) 
                                           || (1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 6U)))))) 
              << 3U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1ffefU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0xaU))) && ((1U & 
                                              (~ (IData)(
                                                         (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                          >> 9U)))) 
                                             || (1U 
                                                 & (~ (IData)(
                                                              (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                               >> 8U)))))) 
              << 4U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1ffdfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0xcU))) && ((1U & 
                                              (~ (IData)(
                                                         (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                          >> 0xbU)))) 
                                             || (1U 
                                                 & (~ (IData)(
                                                              (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                               >> 0xaU)))))) 
              << 5U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1ffbfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0xeU))) && ((1U & 
                                              (~ (IData)(
                                                         (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                          >> 0xdU)))) 
                                             || (1U 
                                                 & (~ (IData)(
                                                              (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                               >> 0xcU)))))) 
              << 6U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1ff7fU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x10U))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xfU)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0xeU)))))) 
              << 7U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1feffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x12U))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x11U)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x10U)))))) 
              << 8U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1fdffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x14U))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x13U)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x12U)))))) 
              << 9U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1fbffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x16U))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x15U)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x14U)))))) 
              << 0xaU));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1f7ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x18U))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x17U)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x16U)))))) 
              << 0xbU));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1efffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x1aU))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x19U)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x18U)))))) 
              << 0xcU));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1dfffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x1cU))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x1bU)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x1aU)))))) 
              << 0xdU));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1bfffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x1eU))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x1dU)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x1cU)))))) 
              << 0xeU));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x17fffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x20U))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x1fU)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x1eU)))))) 
              << 0xfU));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0xffffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x22U))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x21U)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x20U)))))) 
              << 0x10U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_idle_exit_en 
        = ((0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now)) 
           & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready 
        = ((~ (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)) 
           & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[0U] 
        = ((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[1U] 
        = ((2U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((2U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[2U] 
        = ((4U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((4U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[3U] 
        = ((8U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((8U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[4U] 
        = ((0x10U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x10U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[5U] 
        = ((0x20U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x20U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[6U] 
        = ((0x40U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x40U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[7U] 
        = ((0x80U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x80U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[8U] 
        = ((0x100U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x100U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[9U] 
        = ((0x200U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x200U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[0xaU] 
        = ((0x400U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x400U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[0xbU] 
        = ((0x800U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x800U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[0xcU] 
        = ((0x1000U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x1000U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[0xdU] 
        = ((0x2000U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x2000U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[0xeU] 
        = ((0x4000U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x4000U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[0xfU] 
        = ((0x8000U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x8000U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag[0x10U] 
        = ((0x10000U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x10000U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready 
        = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
           & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
        [1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [2U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [3U]) | 
                                          ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                            [3U] | 
                                            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                            [2U]) & 
                                           vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [4U])), 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2U] 
        = (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
           [2U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                   [3U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                   [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[5U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [5U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [6U]) | 
                                          ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                            [6U] | 
                                            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                            [5U]) & 
                                           vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [7U])), 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[4U] 
        = (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
           [5U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                   [6U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                   [7U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[7U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [8U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [9U]) | 
                                          ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                            [9U] | 
                                            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                            [8U]) & 
                                           vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [0xaU])), 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[6U] 
        = (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
           [8U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                   [9U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                   [0xaU]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[9U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [0xbU] & 
                                           vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [0xcU]) 
                                          | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                              [0xcU] 
                                              | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                              [0xbU]) 
                                             & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [0xdU])), 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[8U] 
        = (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
           [0xbU] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                     [0xcU] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                     [0xdU]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0xbU] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [0xeU] & 
                                           vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [0xfU]) 
                                          | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                              [0xfU] 
                                              | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                              [0xeU]) 
                                             & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [0x10U])), 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0xaU] 
        = (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
           [0xeU] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                     [0xfU] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg_flag
                     [0x10U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][0xbU] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0xbU];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][0xaU] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0xaU];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][9U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [9U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][8U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [8U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][7U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [7U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][6U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [6U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][5U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [5U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][4U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [4U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][3U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [3U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_sum[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [5U][1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_sum[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [5U][0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg[0U] 
        = (QData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_sum
                          [0U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__op_neg[1U] 
        = (QData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_sum
                          [1U]));
}

VL_INLINE_OPT void Vtb_fir___024root___nba_sequent__TOP__2(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___nba_sequent__TOP__2\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1U] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2U] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3U] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[4U] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[5U] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[6U] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[7U] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__10__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[8U] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__10__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[9U] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__13__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0xaU] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__13__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0xbU] 
        = vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__16__KET____DOT__u_op_3_to_2_nbit.out_op1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0xcU] 
        = VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__16__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][0xcU] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0xcU];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][0xbU] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0xbU];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][0xaU] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0xaU];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][9U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [9U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][8U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [8U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][7U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [7U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][6U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [6U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][5U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [5U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][4U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [4U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][3U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [3U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [6U][1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [6U][0U];
}

VL_INLINE_OPT void Vtb_fir___024root___nba_comb__TOP__2(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___nba_comb__TOP__2\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[0U] 
        = ((0x3feU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [0U]) | (1U & ((((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg 
                                      >> 0x3fU)) & 
                             vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[2U]) 
                            | ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg 
                                        >> 0x3fU)) 
                               & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                          [0xbU] >> 0x3fU)))) 
                           | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[2U] 
                              & (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                         [0xbU] >> 0x3fU))))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_res[0U] 
        = ((0xfffffffeU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_res[0U]) 
           | (1U & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg) 
                    ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[0U])));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_res[0U] 
        = ((1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_res[0U]) 
           | ((IData)((0x7fffffffffffffffULL & ((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                                 [0U] 
                                                 >> 1U) 
                                                ^ vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                                [0xbU]))) 
              << 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_res[1U] 
        = (((IData)((0x7fffffffffffffffULL & ((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                               [0U] 
                                               >> 1U) 
                                              ^ vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                              [0xbU]))) 
            >> 0x1fU) | ((IData)(((0x7fffffffffffffffULL 
                                   & ((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__P
                                       [0U] >> 1U) 
                                      ^ vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                      [0xbU])) >> 0x20U)) 
                         << 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_res[2U] 
        = (0x3ffU & ((0x3feU & ((0xfffffffeU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                 [0U]) ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                          [7U] << 1U))) 
                     | (1U & ((IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg 
                                       >> 0x3fU)) ^ 
                              (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[2U] 
                               ^ (IData)((vlSymsp->TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit.__PVT__G
                                          [0xbU] >> 0x3fU)))))));
}
