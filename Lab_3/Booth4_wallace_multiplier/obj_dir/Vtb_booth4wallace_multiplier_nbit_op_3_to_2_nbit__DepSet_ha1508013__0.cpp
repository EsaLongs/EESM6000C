// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_booth4wallace_multiplier_nbit.h for the primary calling header

#include "Vtb_booth4wallace_multiplier_nbit__pch.h"
#include "Vtb_booth4wallace_multiplier_nbit__Syms.h"
#include "Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit.h"

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___nba_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___nba_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                         [1U] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                 [2U] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                 [3U]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                              [1U] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                              [2U]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                        [2U] | vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                        [1U]) & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                       [3U]));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___nba_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___nba_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                         [4U] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                 [5U] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                 [6U]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                              [4U] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                              [5U]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                        [5U] | vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                        [4U]) & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                       [6U]));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___nba_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___nba_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                         [7U] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                 [8U] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                 [9U]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                              [7U] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                              [8U]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                        [8U] | vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                        [7U]) & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                       [9U]));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___nba_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__10__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___nba_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__10__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                         [0xaU] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                   [0xbU] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                   [0xcU]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                              [0xaU] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                              [0xbU]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                          [0xbU] | 
                                          vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                          [0xaU]) & 
                                         vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                         [0xcU]));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___nba_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__13__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___nba_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__13__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                         [0xdU] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                   [0xeU] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                   [0xfU]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                              [0xdU] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                              [0xeU]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                          [0xeU] | 
                                          vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                          [0xdU]) & 
                                         vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                         [0xfU]));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___nba_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__16__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___nba_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__16__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                         [0x10U] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                    [0x11U] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                    [0x12U]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                              [0x10U] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                              [0x11U]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                           [0x11U] 
                                           | vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                           [0x10U]) 
                                          & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                          [0x12U]));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                         [1U] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [2U] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [3U]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [1U] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [2U]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [2U] | vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U]) & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [3U]));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                         [4U] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [5U] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [6U]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [4U] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [5U]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [5U] | vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [4U]) & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [6U]));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                         [7U] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [8U] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [9U]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [7U] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [8U]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [8U] | vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [7U]) & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [9U]));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__10__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__10__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                         [0xaU] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [0xbU] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                   [0xcU]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [0xaU] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [0xbU]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [0xbU] | 
                                          vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [0xaU]) & 
                                         vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                         [0xcU]));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__0__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__0__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                         [0U] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [1U] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [2U]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [0U] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [1U]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U] | vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0U]) & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [2U]));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__3__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__3__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                         [3U] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [4U] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [5U]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [3U] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [4U]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [4U] | vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [3U]) & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [5U]));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__6__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__6__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                         [6U] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [7U] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [8U]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [6U] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [7U]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [7U] | vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [6U]) & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [8U]));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__0__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__0__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                         [0U] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [1U] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [2U]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [0U] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [1U]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U] | vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0U]) & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [2U]));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__3__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__3__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                         [3U] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [4U] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [5U]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [3U] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [4U]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [4U] | vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [3U]) & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [5U]));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                         [1U] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [2U] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [3U]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [1U] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [2U]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [2U] | vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U]) & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [3U]));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__0__KET____DOT__u_op_3_to_2_nbit__0(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___act_sequent__TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__0__KET____DOT__u_op_3_to_2_nbit__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_op1 = (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                         [0U] ^ (vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [1U] ^ vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [2U]));
    vlSelfRef.__PVT__cout = ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [0U] & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [1U]) | ((vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U] | vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0U]) & vlSymsp->TOP.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                       [2U]));
}
