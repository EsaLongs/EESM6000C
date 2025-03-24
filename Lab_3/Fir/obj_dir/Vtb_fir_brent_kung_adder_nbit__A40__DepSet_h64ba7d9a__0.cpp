// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fir.h for the primary calling header

#include "Vtb_fir__pch.h"
#include "Vtb_fir__Syms.h"
#include "Vtb_fir_brent_kung_adder_nbit__A40.h"

VL_INLINE_OPT void Vtb_fir_brent_kung_adder_nbit__A40___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit__0(Vtb_fir_brent_kung_adder_nbit__A40* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_fir_brent_kung_adder_nbit__A40___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u1_brent_kung_adder_nbit__0\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__P[0U] = ((1ULL & vlSelfRef.__PVT__P
                               [0U]) | (0xfffffffffffffffeULL 
                                        & ((0xfffffffffffffffeULL 
                                            & vlSymsp->TOP.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg) 
                                           ^ (((QData)((IData)(
                                                               vlSymsp->TOP.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[1U])) 
                                               << 0x20U) 
                                              | (0xfffffffffffffffeULL 
                                                 & (QData)((IData)(
                                                                   vlSymsp->TOP.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[0U])))))));
    vlSelfRef.__PVT__G[0U] = ((1ULL & vlSelfRef.__PVT__G
                               [0U]) | (0xfffffffffffffffeULL 
                                        & (vlSymsp->TOP.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[1U])) 
                                               << 0x20U) 
                                              | (0xfffffffffffffffeULL 
                                                 & (QData)((IData)(
                                                                   vlSymsp->TOP.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[0U])))))));
    vlSelfRef.__PVT__G[0U] = ((0xfffffffffffffffeULL 
                               & vlSelfRef.__PVT__G
                               [0U]) | (IData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSymsp->TOP.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_res_reg) 
                                                           & vlSymsp->TOP.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__add_temp[0U])))));
}

VL_INLINE_OPT void Vtb_fir_brent_kung_adder_nbit__A40___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit__0(Vtb_fir_brent_kung_adder_nbit__A40* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_fir_brent_kung_adder_nbit__A40___nba_sequent__TOP__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_brent_kung_adder_nbit__0\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__P[0U] = ((1ULL & vlSelfRef.__PVT__P
                               [0U]) | (0xfffffffffffffffeULL 
                                        & (vlSymsp->TOP.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg
                                           [0U] ^ vlSymsp->TOP.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg
                                           [1U])));
    vlSelfRef.__PVT__G[0U] = ((1ULL & vlSelfRef.__PVT__G
                               [0U]) | (0xfffffffffffffffeULL 
                                        & (vlSymsp->TOP.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg
                                           [0U] & vlSymsp->TOP.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg
                                           [1U])));
    vlSelfRef.__PVT__G[0U] = ((0xfffffffffffffffeULL 
                               & vlSelfRef.__PVT__G
                               [0U]) | (IData)((IData)(
                                                       (1U 
                                                        & ((IData)(
                                                                   vlSymsp->TOP.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg
                                                                   [0U]) 
                                                           & (IData)(
                                                                     vlSymsp->TOP.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg
                                                                     [1U]))))));
}
