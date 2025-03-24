// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_booth4wallace_multiplier_nbit.h for the primary calling header

#include "Vtb_booth4wallace_multiplier_nbit__pch.h"
#include "Vtb_booth4wallace_multiplier_nbit___024root.h"

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit___024root___act_sequent__TOP__0(Vtb_booth4wallace_multiplier_nbit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_booth4wallace_multiplier_nbit___024root___act_sequent__TOP__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 1U)) | ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                  [0U]) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 1U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 3U)) | ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                   [0U] 
                                                   >> 2U)) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 3U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 5U)) | ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                   [0U] 
                                                   >> 4U)) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 5U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 7U)) | ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                   [0U] 
                                                   >> 6U)) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 7U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 9U)) | ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                   [0U] 
                                                   >> 8U)) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 9U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0xbU)) | ((IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                     [0U] 
                                                     >> 0xaU)) 
                                            & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0U] 
                                                       >> 0xbU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0xdU)) | ((IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                     [0U] 
                                                     >> 0xcU)) 
                                            & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0U] 
                                                       >> 0xdU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0xfU)) | ((IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                     [0U] 
                                                     >> 0xeU)) 
                                            & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0U] 
                                                       >> 0xfU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x11U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x10U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x11U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x13U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x12U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x13U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x15U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x14U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x15U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x17U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x16U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x17U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x19U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x18U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x19U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x1bU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x1aU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x1bU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x1dU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x1cU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x1dU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x1fU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x1eU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x1fU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__33__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x21U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x20U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x21U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__35__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x23U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x22U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x23U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__37__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x25U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x24U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x25U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__39__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x27U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x26U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x27U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__41__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x29U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x28U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x29U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__43__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x2bU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x2aU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x2bU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__45__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x2dU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x2cU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x2dU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__47__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x2fU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x2eU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x2fU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__49__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x31U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x30U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x31U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__51__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x33U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x32U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x33U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__53__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x35U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x34U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x35U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__55__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x37U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x36U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x37U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__57__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x39U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x38U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x39U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__59__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x3bU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x3aU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x3bU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__61__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x3dU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x3cU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x3dU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__63__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0U] >> 0x3fU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [0U] 
                                                      >> 0x3eU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [0U] 
                                                        >> 0x3fU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [1U] >> 3U)) | ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                   [1U] 
                                                   >> 1U)) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [1U] 
                                                     >> 3U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [1U] >> 7U)) | ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                   [1U] 
                                                   >> 5U)) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [1U] 
                                                     >> 7U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [1U] >> 0xbU)) | ((IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                     [1U] 
                                                     >> 9U)) 
                                            & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [1U] 
                                                       >> 0xbU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [1U] >> 0xfU)) | ((IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                     [1U] 
                                                     >> 0xdU)) 
                                            & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [1U] 
                                                       >> 0xfU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [1U] >> 0x13U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [1U] 
                                                      >> 0x11U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [1U] 
                                                        >> 0x13U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [1U] >> 0x17U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [1U] 
                                                      >> 0x15U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [1U] 
                                                        >> 0x17U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [1U] >> 0x1bU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [1U] 
                                                      >> 0x19U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [1U] 
                                                        >> 0x1bU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [1U] >> 0x1fU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [1U] 
                                                      >> 0x1dU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [1U] 
                                                        >> 0x1fU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__35__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [1U] >> 0x23U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [1U] 
                                                      >> 0x21U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [1U] 
                                                        >> 0x23U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__39__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [1U] >> 0x27U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [1U] 
                                                      >> 0x25U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [1U] 
                                                        >> 0x27U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__43__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [1U] >> 0x2bU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [1U] 
                                                      >> 0x29U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [1U] 
                                                        >> 0x2bU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__47__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [1U] >> 0x2fU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [1U] 
                                                      >> 0x2dU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [1U] 
                                                        >> 0x2fU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__51__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [1U] >> 0x33U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [1U] 
                                                      >> 0x31U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [1U] 
                                                        >> 0x33U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__55__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [1U] >> 0x37U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [1U] 
                                                      >> 0x35U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [1U] 
                                                        >> 0x37U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__59__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [1U] >> 0x3bU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [1U] 
                                                      >> 0x39U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [1U] 
                                                        >> 0x3bU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__63__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [1U] >> 0x3fU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [1U] 
                                                      >> 0x3dU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [1U] 
                                                        >> 0x3fU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [2U] >> 7U)) | ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                   [2U] 
                                                   >> 3U)) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [2U] 
                                                     >> 7U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [2U] >> 0xfU)) | ((IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                     [2U] 
                                                     >> 0xbU)) 
                                            & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [2U] 
                                                       >> 0xfU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [2U] >> 0x17U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [2U] 
                                                      >> 0x13U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [2U] 
                                                        >> 0x17U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [2U] >> 0x1fU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [2U] 
                                                      >> 0x1bU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [2U] 
                                                        >> 0x1fU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__39__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [2U] >> 0x27U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [2U] 
                                                      >> 0x23U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [2U] 
                                                        >> 0x27U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__47__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [2U] >> 0x2fU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [2U] 
                                                      >> 0x2bU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [2U] 
                                                        >> 0x2fU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__55__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [2U] >> 0x37U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [2U] 
                                                      >> 0x33U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [2U] 
                                                        >> 0x37U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__63__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [2U] >> 0x3fU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [2U] 
                                                      >> 0x3bU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [2U] 
                                                        >> 0x3fU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [3U] >> 0xfU)) | ((IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                     [3U] 
                                                     >> 7U)) 
                                            & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [3U] 
                                                       >> 0xfU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [3U] >> 0x1fU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [3U] 
                                                      >> 0x17U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [3U] 
                                                        >> 0x1fU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__47__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [3U] >> 0x2fU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [3U] 
                                                      >> 0x27U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [3U] 
                                                        >> 0x2fU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__63__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [3U] >> 0x3fU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [3U] 
                                                      >> 0x37U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [3U] 
                                                        >> 0x3fU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [4U] >> 0x1fU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [4U] 
                                                      >> 0xfU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [4U] 
                                                        >> 0x1fU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__63__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [4U] >> 0x3fU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [4U] 
                                                      >> 0x2fU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [4U] 
                                                        >> 0x3fU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__63__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [5U] >> 0x3fU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [5U] 
                                                      >> 0x1fU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [5U] 
                                                        >> 0x3fU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__47__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [6U] >> 0x2fU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [6U] 
                                                      >> 0x1fU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [6U] 
                                                        >> 0x2fU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__8__KET____DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [7U] >> 0x17U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [7U] 
                                                      >> 0xfU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [7U] 
                                                        >> 0x17U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__8__KET____DOT__genblk1__BRA__39__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [7U] >> 0x27U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [7U] 
                                                      >> 0x1fU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [7U] 
                                                        >> 0x27U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__8__KET____DOT__genblk1__BRA__55__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [7U] >> 0x37U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [7U] 
                                                      >> 0x2fU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [7U] 
                                                        >> 0x37U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [8U] >> 0xbU)) | ((IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                     [8U] 
                                                     >> 7U)) 
                                            & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [8U] 
                                                       >> 0xbU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__9__KET____DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [8U] >> 0x13U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [8U] 
                                                      >> 0xfU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [8U] 
                                                        >> 0x13U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__9__KET____DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [8U] >> 0x1bU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [8U] 
                                                      >> 0x17U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [8U] 
                                                        >> 0x1bU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__9__KET____DOT__genblk1__BRA__35__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [8U] >> 0x23U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [8U] 
                                                      >> 0x1fU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [8U] 
                                                        >> 0x23U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__9__KET____DOT__genblk1__BRA__43__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [8U] >> 0x2bU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [8U] 
                                                      >> 0x27U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [8U] 
                                                        >> 0x2bU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__9__KET____DOT__genblk1__BRA__51__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [8U] >> 0x33U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [8U] 
                                                      >> 0x2fU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [8U] 
                                                        >> 0x33U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__9__KET____DOT__genblk1__BRA__59__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [8U] >> 0x3bU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [8U] 
                                                      >> 0x37U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [8U] 
                                                        >> 0x3bU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [9U] >> 5U)) | ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                   [9U] 
                                                   >> 3U)) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [9U] 
                                                     >> 5U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [9U] >> 9U)) | ((IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                   [9U] 
                                                   >> 7U)) 
                                          & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [9U] 
                                                     >> 9U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [9U] >> 0xdU)) | ((IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                     [9U] 
                                                     >> 0xbU)) 
                                            & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [9U] 
                                                       >> 0xdU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [9U] >> 0x11U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [9U] 
                                                      >> 0xfU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [9U] 
                                                        >> 0x11U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [9U] >> 0x15U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [9U] 
                                                      >> 0x13U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [9U] 
                                                        >> 0x15U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [9U] >> 0x19U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [9U] 
                                                      >> 0x17U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [9U] 
                                                        >> 0x19U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [9U] >> 0x1dU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [9U] 
                                                      >> 0x1bU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [9U] 
                                                        >> 0x1dU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__33__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [9U] >> 0x21U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [9U] 
                                                      >> 0x1fU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [9U] 
                                                        >> 0x21U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__37__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [9U] >> 0x25U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [9U] 
                                                      >> 0x23U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [9U] 
                                                        >> 0x25U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__41__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [9U] >> 0x29U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [9U] 
                                                      >> 0x27U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [9U] 
                                                        >> 0x29U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__45__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [9U] >> 0x2dU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [9U] 
                                                      >> 0x2bU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [9U] 
                                                        >> 0x2dU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__49__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [9U] >> 0x31U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [9U] 
                                                      >> 0x2fU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [9U] 
                                                        >> 0x31U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__53__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [9U] >> 0x35U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [9U] 
                                                      >> 0x33U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [9U] 
                                                        >> 0x35U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__57__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [9U] >> 0x39U)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [9U] 
                                                      >> 0x37U)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [9U] 
                                                        >> 0x39U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__61__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [9U] >> 0x3dU)) | ((IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                      [9U] 
                                                      >> 0x3bU)) 
                                             & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                        [9U] 
                                                        >> 0x3dU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 2U)) | ((IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                     [0xaU] 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 2U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 4U)) | ((IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                     [0xaU] 
                                                     >> 3U)) 
                                            & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 4U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 6U)) | ((IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                     [0xaU] 
                                                     >> 5U)) 
                                            & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 6U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 8U)) | ((IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                     [0xaU] 
                                                     >> 7U)) 
                                            & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 8U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0xaU)) | ((IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                       [0xaU] 
                                                       >> 9U)) 
                                              & (IData)(
                                                        (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                         [0xaU] 
                                                         >> 0xaU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0xcU)) | ((IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                       [0xaU] 
                                                       >> 0xbU)) 
                                              & (IData)(
                                                        (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                         [0xaU] 
                                                         >> 0xcU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0xeU)) | ((IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                       [0xaU] 
                                                       >> 0xdU)) 
                                              & (IData)(
                                                        (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                         [0xaU] 
                                                         >> 0xeU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x10U)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x10U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x12U)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x11U)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x12U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x14U)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x13U)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x14U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x16U)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x16U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x18U)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x17U)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x18U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x1aU)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x19U)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x1aU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x1cU)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x1cU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x1eU)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x1dU)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x1eU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__32__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x20U)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x1fU)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x20U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__34__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x22U)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x21U)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x22U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__36__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x24U)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x23U)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x24U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__38__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x26U)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x25U)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x26U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__40__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x28U)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x27U)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x28U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__42__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x2aU)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x29U)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x2aU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__44__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x2cU)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x2bU)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x2cU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__46__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x2eU)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x2dU)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x2eU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__48__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x30U)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x2fU)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x30U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__50__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x32U)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x31U)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x32U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__52__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x34U)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x33U)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x34U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__54__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x36U)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x35U)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x36U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__56__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x38U)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x37U)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x38U)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__58__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x3aU)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x39U)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x3aU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__60__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x3cU)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x3bU)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x3cU)))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__62__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                          [0xaU] >> 0x3eU)) | ((IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                                        [0xaU] 
                                                        >> 0x3dU)) 
                                               & (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                          [0xaU] 
                                                          >> 0x3eU)))));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit___024root___act_sequent__TOP__1(Vtb_booth4wallace_multiplier_nbit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_booth4wallace_multiplier_nbit___024root___act_sequent__TOP__1\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                         [0U]) & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                          [0U] >> 1U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 2U)) & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [0U] 
                                                  >> 3U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 4U)) & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [0U] 
                                                  >> 5U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 6U)) & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [0U] 
                                                  >> 7U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 8U)) & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [0U] 
                                                  >> 9U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0xaU)) & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0xbU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0xcU)) & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0xdU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0xeU)) & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0xfU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x10U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x11U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x12U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x13U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x14U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x15U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x16U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x17U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x18U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x19U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x1aU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x1bU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x1cU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x1dU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x1eU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x1fU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__33__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x20U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x21U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__35__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x22U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x23U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__37__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x24U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x25U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__39__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x26U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x27U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__41__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x28U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x29U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__43__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x2aU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x2bU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__45__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x2cU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x2dU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__47__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x2eU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x2fU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__49__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x30U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x31U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__51__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x32U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x33U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__53__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x34U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x35U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__55__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x36U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x37U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__57__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x38U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x39U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__59__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x3aU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x3bU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__61__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x3cU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x3dU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__63__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0U] >> 0x3eU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [0U] 
                                                     >> 0x3fU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [1U] >> 1U)) & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [1U] 
                                                  >> 3U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [1U] >> 5U)) & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [1U] 
                                                  >> 7U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [1U] >> 9U)) & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [1U] 
                                                  >> 0xbU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [1U] >> 0xdU)) & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0xfU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [1U] >> 0x11U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [1U] 
                                                     >> 0x13U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [1U] >> 0x15U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [1U] 
                                                     >> 0x17U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [1U] >> 0x19U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [1U] 
                                                     >> 0x1bU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [1U] >> 0x1dU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [1U] 
                                                     >> 0x1fU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__35__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [1U] >> 0x21U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [1U] 
                                                     >> 0x23U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__39__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [1U] >> 0x25U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [1U] 
                                                     >> 0x27U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__43__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [1U] >> 0x29U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [1U] 
                                                     >> 0x2bU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__47__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [1U] >> 0x2dU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [1U] 
                                                     >> 0x2fU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__51__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [1U] >> 0x31U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [1U] 
                                                     >> 0x33U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__55__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [1U] >> 0x35U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [1U] 
                                                     >> 0x37U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__59__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [1U] >> 0x39U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [1U] 
                                                     >> 0x3bU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__63__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [1U] >> 0x3dU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [1U] 
                                                     >> 0x3fU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [2U] >> 3U)) & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [2U] 
                                                  >> 7U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [2U] >> 0xbU)) & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0xfU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [2U] >> 0x13U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [2U] 
                                                     >> 0x17U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [2U] >> 0x1bU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [2U] 
                                                     >> 0x1fU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__39__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [2U] >> 0x23U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [2U] 
                                                     >> 0x27U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__47__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [2U] >> 0x2bU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [2U] 
                                                     >> 0x2fU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__55__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [2U] >> 0x33U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [2U] 
                                                     >> 0x37U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__63__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [2U] >> 0x3bU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [2U] 
                                                     >> 0x3fU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__15__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [3U] >> 7U)) & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [3U] 
                                                  >> 0xfU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [3U] >> 0x17U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [3U] 
                                                     >> 0x1fU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__47__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [3U] >> 0x27U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [3U] 
                                                     >> 0x2fU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__BRA__63__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [3U] >> 0x37U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [3U] 
                                                     >> 0x3fU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__31__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [4U] >> 0xfU)) & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x1fU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__BRA__63__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [4U] >> 0x2fU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [4U] 
                                                     >> 0x3fU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__6__KET____DOT__genblk1__BRA__63__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [5U] >> 0x1fU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [5U] 
                                                     >> 0x3fU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__47__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [6U] >> 0x1fU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [6U] 
                                                     >> 0x2fU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__8__KET____DOT__genblk1__BRA__23__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [7U] >> 0xfU)) & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x17U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__8__KET____DOT__genblk1__BRA__39__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [7U] >> 0x1fU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [7U] 
                                                     >> 0x27U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__8__KET____DOT__genblk1__BRA__55__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [7U] >> 0x2fU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [7U] 
                                                     >> 0x37U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [8U] >> 7U)) & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [8U] 
                                                  >> 0xbU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__9__KET____DOT__genblk1__BRA__19__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [8U] >> 0xfU)) & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x13U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__9__KET____DOT__genblk1__BRA__27__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [8U] >> 0x17U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [8U] 
                                                     >> 0x1bU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__9__KET____DOT__genblk1__BRA__35__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [8U] >> 0x1fU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [8U] 
                                                     >> 0x23U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__9__KET____DOT__genblk1__BRA__43__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [8U] >> 0x27U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [8U] 
                                                     >> 0x2bU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__9__KET____DOT__genblk1__BRA__51__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [8U] >> 0x2fU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [8U] 
                                                     >> 0x33U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__9__KET____DOT__genblk1__BRA__59__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [8U] >> 0x37U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [8U] 
                                                     >> 0x3bU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [9U] >> 3U)) & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [9U] 
                                                  >> 5U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [9U] >> 7U)) & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [9U] 
                                                  >> 9U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__13__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [9U] >> 0xbU)) & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [9U] 
                                                    >> 0xdU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__17__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [9U] >> 0xfU)) & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [9U] 
                                                    >> 0x11U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__21__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [9U] >> 0x13U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [9U] 
                                                     >> 0x15U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__25__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [9U] >> 0x17U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [9U] 
                                                     >> 0x19U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__29__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [9U] >> 0x1bU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [9U] 
                                                     >> 0x1dU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__33__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [9U] >> 0x1fU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [9U] 
                                                     >> 0x21U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__37__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [9U] >> 0x23U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [9U] 
                                                     >> 0x25U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__41__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [9U] >> 0x27U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [9U] 
                                                     >> 0x29U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__45__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [9U] >> 0x2bU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [9U] 
                                                     >> 0x2dU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__49__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [9U] >> 0x2fU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [9U] 
                                                     >> 0x31U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__53__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [9U] >> 0x33U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [9U] 
                                                     >> 0x35U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__57__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [9U] >> 0x37U)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [9U] 
                                                     >> 0x39U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__10__KET____DOT__genblk1__BRA__61__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [9U] >> 0x3bU)) & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                     [9U] 
                                                     >> 0x3dU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 1U)) & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0xaU] 
                                                    >> 2U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 3U)) & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0xaU] 
                                                    >> 4U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 5U)) & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0xaU] 
                                                    >> 6U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 7U)) & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0xaU] 
                                                    >> 8U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__10__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 9U)) & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0xaU] 
                                                    >> 0xaU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__12__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0xbU)) & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0xcU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__14__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0xdU)) & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0xeU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__16__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0xfU)) & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x10U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__18__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x11U)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x12U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__20__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x13U)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x14U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__22__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x15U)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x16U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__24__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x17U)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x18U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__26__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x19U)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x1aU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__28__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x1bU)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x1cU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__30__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x1dU)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x1eU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__32__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x1fU)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x20U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__34__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x21U)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x22U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__36__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x23U)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x24U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__38__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x25U)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x26U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__40__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x27U)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x28U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__42__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x29U)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x2aU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__44__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x2bU)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x2cU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__46__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x2dU)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x2eU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__48__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x2fU)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x30U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__50__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x31U)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x32U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__52__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x33U)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x34U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__54__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x35U)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x36U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__56__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x37U)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x38U))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__58__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x39U)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x3aU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__60__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x3bU)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x3cU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__11__KET____DOT__genblk1__BRA__62__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                          [0xaU] >> 0x3dU)) & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                       [0xaU] 
                                                       >> 0x3eU))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | (IData)((IData)((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [0U])))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 2U))))) 
                     << 2U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 4U))))) 
                     << 4U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 6U))))) 
                     << 6U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 8U))))) 
                     << 8U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0xaU))))) 
                     << 0xaU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0xcU))))) 
                     << 0xcU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0xeU))))) 
                     << 0xeU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x10U))))) 
                     << 0x10U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x12U))))) 
                     << 0x12U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x14U))))) 
                     << 0x14U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x16U))))) 
                     << 0x16U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x18U))))) 
                     << 0x18U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x1aU))))) 
                     << 0x1aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x1cU))))) 
                     << 0x1cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x1eU))))) 
                     << 0x1eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x20U))))) 
                     << 0x20U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x22U))))) 
                     << 0x22U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x24U))))) 
                     << 0x24U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x26U))))) 
                     << 0x26U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x28U))))) 
                     << 0x28U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x2aU))))) 
                     << 0x2aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x2cU))))) 
                     << 0x2cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x2eU))))) 
                     << 0x2eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x30U))))) 
                     << 0x30U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x32U))))) 
                     << 0x32U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x34U))))) 
                     << 0x34U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x36U))))) 
                     << 0x36U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x38U))))) 
                     << 0x38U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x3aU))))) 
                     << 0x3aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x3cU))))) 
                     << 0x3cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [1U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0U] 
                                                    >> 0x3eU))))) 
                     << 0x3eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | (IData)((IData)((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [1U])))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 1U))))) 
                     << 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 2U))))) 
                     << 2U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 4U))))) 
                     << 4U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 5U))))) 
                     << 5U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 6U))))) 
                     << 6U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 8U))))) 
                     << 8U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 9U))))) 
                     << 9U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0xaU))))) 
                     << 0xaU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0xcU))))) 
                     << 0xcU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0xdU))))) 
                     << 0xdU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0xeU))))) 
                     << 0xeU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x10U))))) 
                     << 0x10U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x11U))))) 
                     << 0x11U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x12U))))) 
                     << 0x12U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x14U))))) 
                     << 0x14U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x15U))))) 
                     << 0x15U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x16U))))) 
                     << 0x16U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x18U))))) 
                     << 0x18U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x19U))))) 
                     << 0x19U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x1aU))))) 
                     << 0x1aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x1cU))))) 
                     << 0x1cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x1dU))))) 
                     << 0x1dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x1eU))))) 
                     << 0x1eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x20U))))) 
                     << 0x20U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x21U))))) 
                     << 0x21U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x22U))))) 
                     << 0x22U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x24U))))) 
                     << 0x24U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x25U))))) 
                     << 0x25U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x26U))))) 
                     << 0x26U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x28U))))) 
                     << 0x28U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x29U))))) 
                     << 0x29U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x2aU))))) 
                     << 0x2aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x2cU))))) 
                     << 0x2cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x2dU))))) 
                     << 0x2dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x2eU))))) 
                     << 0x2eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x30U))))) 
                     << 0x30U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x31U))))) 
                     << 0x31U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x32U))))) 
                     << 0x32U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x34U))))) 
                     << 0x34U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x35U))))) 
                     << 0x35U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x36U))))) 
                     << 0x36U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x38U))))) 
                     << 0x38U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x39U))))) 
                     << 0x39U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x3aU))))) 
                     << 0x3aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x3cU))))) 
                     << 0x3cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x3dU))))) 
                     << 0x3dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [2U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [1U] 
                                                    >> 0x3eU))))) 
                     << 0x3eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | (IData)((IData)((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [2U])))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 1U))))) 
                     << 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 2U))))) 
                     << 2U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 3U))))) 
                     << 3U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 4U))))) 
                     << 4U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 5U))))) 
                     << 5U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 6U))))) 
                     << 6U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 8U))))) 
                     << 8U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 9U))))) 
                     << 9U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0xaU))))) 
                     << 0xaU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0xbU))))) 
                     << 0xbU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0xcU))))) 
                     << 0xcU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0xdU))))) 
                     << 0xdU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0xeU))))) 
                     << 0xeU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x10U))))) 
                     << 0x10U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x11U))))) 
                     << 0x11U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x12U))))) 
                     << 0x12U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x13U))))) 
                     << 0x13U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x14U))))) 
                     << 0x14U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x15U))))) 
                     << 0x15U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x16U))))) 
                     << 0x16U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x18U))))) 
                     << 0x18U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x19U))))) 
                     << 0x19U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x1aU))))) 
                     << 0x1aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x1bU))))) 
                     << 0x1bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x1cU))))) 
                     << 0x1cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x1dU))))) 
                     << 0x1dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x1eU))))) 
                     << 0x1eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x20U))))) 
                     << 0x20U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x21U))))) 
                     << 0x21U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x22U))))) 
                     << 0x22U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x23U))))) 
                     << 0x23U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x24U))))) 
                     << 0x24U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x25U))))) 
                     << 0x25U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x26U))))) 
                     << 0x26U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x28U))))) 
                     << 0x28U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x29U))))) 
                     << 0x29U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x2aU))))) 
                     << 0x2aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x2bU))))) 
                     << 0x2bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x2cU))))) 
                     << 0x2cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x2dU))))) 
                     << 0x2dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x2eU))))) 
                     << 0x2eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x30U))))) 
                     << 0x30U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x31U))))) 
                     << 0x31U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x32U))))) 
                     << 0x32U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x33U))))) 
                     << 0x33U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x34U))))) 
                     << 0x34U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x35U))))) 
                     << 0x35U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x36U))))) 
                     << 0x36U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x38U))))) 
                     << 0x38U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x39U))))) 
                     << 0x39U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x3aU))))) 
                     << 0x3aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x3bU))))) 
                     << 0x3bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x3cU))))) 
                     << 0x3cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x3dU))))) 
                     << 0x3dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [3U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [2U] 
                                                    >> 0x3eU))))) 
                     << 0x3eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | (IData)((IData)((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [3U])))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 1U))))) 
                     << 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 2U))))) 
                     << 2U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 3U))))) 
                     << 3U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 4U))))) 
                     << 4U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 5U))))) 
                     << 5U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 6U))))) 
                     << 6U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 7U))))) 
                     << 7U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 8U))))) 
                     << 8U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 9U))))) 
                     << 9U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0xaU))))) 
                     << 0xaU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0xbU))))) 
                     << 0xbU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0xcU))))) 
                     << 0xcU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0xdU))))) 
                     << 0xdU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0xeU))))) 
                     << 0xeU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x10U))))) 
                     << 0x10U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x11U))))) 
                     << 0x11U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x12U))))) 
                     << 0x12U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x13U))))) 
                     << 0x13U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x14U))))) 
                     << 0x14U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x15U))))) 
                     << 0x15U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x16U))))) 
                     << 0x16U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x17U))))) 
                     << 0x17U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x18U))))) 
                     << 0x18U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x19U))))) 
                     << 0x19U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x1aU))))) 
                     << 0x1aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x1bU))))) 
                     << 0x1bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x1cU))))) 
                     << 0x1cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x1dU))))) 
                     << 0x1dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x1eU))))) 
                     << 0x1eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x20U))))) 
                     << 0x20U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x21U))))) 
                     << 0x21U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x22U))))) 
                     << 0x22U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x23U))))) 
                     << 0x23U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x24U))))) 
                     << 0x24U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x25U))))) 
                     << 0x25U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x26U))))) 
                     << 0x26U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x27U))))) 
                     << 0x27U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x28U))))) 
                     << 0x28U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x29U))))) 
                     << 0x29U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x2aU))))) 
                     << 0x2aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x2bU))))) 
                     << 0x2bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x2cU))))) 
                     << 0x2cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x2dU))))) 
                     << 0x2dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x2eU))))) 
                     << 0x2eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x30U))))) 
                     << 0x30U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x31U))))) 
                     << 0x31U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x32U))))) 
                     << 0x32U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x33U))))) 
                     << 0x33U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x34U))))) 
                     << 0x34U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x35U))))) 
                     << 0x35U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x36U))))) 
                     << 0x36U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x37U))))) 
                     << 0x37U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x38U))))) 
                     << 0x38U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x39U))))) 
                     << 0x39U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x3aU))))) 
                     << 0x3aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x3bU))))) 
                     << 0x3bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x3cU))))) 
                     << 0x3cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x3dU))))) 
                     << 0x3dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [4U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [3U] 
                                                    >> 0x3eU))))) 
                     << 0x3eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | (IData)((IData)((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [4U])))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 1U))))) 
                     << 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 2U))))) 
                     << 2U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 3U))))) 
                     << 3U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 4U))))) 
                     << 4U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 5U))))) 
                     << 5U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 6U))))) 
                     << 6U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 7U))))) 
                     << 7U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 8U))))) 
                     << 8U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 9U))))) 
                     << 9U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0xaU))))) 
                     << 0xaU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0xbU))))) 
                     << 0xbU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0xcU))))) 
                     << 0xcU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0xdU))))) 
                     << 0xdU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0xeU))))) 
                     << 0xeU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0xfU))))) 
                     << 0xfU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x10U))))) 
                     << 0x10U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x11U))))) 
                     << 0x11U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x12U))))) 
                     << 0x12U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x13U))))) 
                     << 0x13U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x14U))))) 
                     << 0x14U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x15U))))) 
                     << 0x15U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x16U))))) 
                     << 0x16U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x17U))))) 
                     << 0x17U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x18U))))) 
                     << 0x18U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x19U))))) 
                     << 0x19U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x1aU))))) 
                     << 0x1aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x1bU))))) 
                     << 0x1bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x1cU))))) 
                     << 0x1cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x1dU))))) 
                     << 0x1dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x1eU))))) 
                     << 0x1eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x20U))))) 
                     << 0x20U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x21U))))) 
                     << 0x21U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x22U))))) 
                     << 0x22U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x23U))))) 
                     << 0x23U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x24U))))) 
                     << 0x24U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x25U))))) 
                     << 0x25U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x26U))))) 
                     << 0x26U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x27U))))) 
                     << 0x27U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x28U))))) 
                     << 0x28U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x29U))))) 
                     << 0x29U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x2aU))))) 
                     << 0x2aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x2bU))))) 
                     << 0x2bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x2cU))))) 
                     << 0x2cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x2dU))))) 
                     << 0x2dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x2eU))))) 
                     << 0x2eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x2fU))))) 
                     << 0x2fU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x30U))))) 
                     << 0x30U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x31U))))) 
                     << 0x31U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x32U))))) 
                     << 0x32U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x33U))))) 
                     << 0x33U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x34U))))) 
                     << 0x34U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x35U))))) 
                     << 0x35U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x36U))))) 
                     << 0x36U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x37U))))) 
                     << 0x37U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x38U))))) 
                     << 0x38U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x39U))))) 
                     << 0x39U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x3aU))))) 
                     << 0x3aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x3bU))))) 
                     << 0x3bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x3cU))))) 
                     << 0x3cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x3dU))))) 
                     << 0x3dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [5U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [4U] 
                                                    >> 0x3eU))))) 
                     << 0x3eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | (IData)((IData)((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [5U])))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 1U))))) 
                     << 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 2U))))) 
                     << 2U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 3U))))) 
                     << 3U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 4U))))) 
                     << 4U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 5U))))) 
                     << 5U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 6U))))) 
                     << 6U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 7U))))) 
                     << 7U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 8U))))) 
                     << 8U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 9U))))) 
                     << 9U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0xaU))))) 
                     << 0xaU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0xbU))))) 
                     << 0xbU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0xcU))))) 
                     << 0xcU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0xdU))))) 
                     << 0xdU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0xeU))))) 
                     << 0xeU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0xfU))))) 
                     << 0xfU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x10U))))) 
                     << 0x10U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x11U))))) 
                     << 0x11U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x12U))))) 
                     << 0x12U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x13U))))) 
                     << 0x13U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x14U))))) 
                     << 0x14U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x15U))))) 
                     << 0x15U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x16U))))) 
                     << 0x16U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x17U))))) 
                     << 0x17U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x18U))))) 
                     << 0x18U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x19U))))) 
                     << 0x19U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x1aU))))) 
                     << 0x1aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x1bU))))) 
                     << 0x1bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x1cU))))) 
                     << 0x1cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x1dU))))) 
                     << 0x1dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x1eU))))) 
                     << 0x1eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x1fU))))) 
                     << 0x1fU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x20U))))) 
                     << 0x20U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x21U))))) 
                     << 0x21U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x22U))))) 
                     << 0x22U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x23U))))) 
                     << 0x23U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x24U))))) 
                     << 0x24U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x25U))))) 
                     << 0x25U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x26U))))) 
                     << 0x26U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x27U))))) 
                     << 0x27U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x28U))))) 
                     << 0x28U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x29U))))) 
                     << 0x29U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x2aU))))) 
                     << 0x2aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x2bU))))) 
                     << 0x2bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x2cU))))) 
                     << 0x2cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x2dU))))) 
                     << 0x2dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x2eU))))) 
                     << 0x2eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x2fU))))) 
                     << 0x2fU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x30U))))) 
                     << 0x30U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x31U))))) 
                     << 0x31U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x32U))))) 
                     << 0x32U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x33U))))) 
                     << 0x33U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x34U))))) 
                     << 0x34U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x35U))))) 
                     << 0x35U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x36U))))) 
                     << 0x36U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x37U))))) 
                     << 0x37U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x38U))))) 
                     << 0x38U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x39U))))) 
                     << 0x39U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x3aU))))) 
                     << 0x3aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x3bU))))) 
                     << 0x3bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x3cU))))) 
                     << 0x3cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x3dU))))) 
                     << 0x3dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [6U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [5U] 
                                                    >> 0x3eU))))) 
                     << 0x3eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | (IData)((IData)((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [6U])))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 1U))))) 
                     << 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 2U))))) 
                     << 2U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 3U))))) 
                     << 3U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 4U))))) 
                     << 4U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 5U))))) 
                     << 5U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 6U))))) 
                     << 6U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 7U))))) 
                     << 7U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 8U))))) 
                     << 8U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 9U))))) 
                     << 9U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0xaU))))) 
                     << 0xaU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0xbU))))) 
                     << 0xbU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0xcU))))) 
                     << 0xcU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0xdU))))) 
                     << 0xdU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0xeU))))) 
                     << 0xeU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0xfU))))) 
                     << 0xfU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x10U))))) 
                     << 0x10U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x11U))))) 
                     << 0x11U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x12U))))) 
                     << 0x12U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x13U))))) 
                     << 0x13U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x14U))))) 
                     << 0x14U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x15U))))) 
                     << 0x15U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x16U))))) 
                     << 0x16U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x17U))))) 
                     << 0x17U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x18U))))) 
                     << 0x18U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x19U))))) 
                     << 0x19U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x1aU))))) 
                     << 0x1aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x1bU))))) 
                     << 0x1bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x1cU))))) 
                     << 0x1cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x1dU))))) 
                     << 0x1dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x1eU))))) 
                     << 0x1eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x1fU))))) 
                     << 0x1fU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x20U))))) 
                     << 0x20U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x21U))))) 
                     << 0x21U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x22U))))) 
                     << 0x22U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x23U))))) 
                     << 0x23U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x24U))))) 
                     << 0x24U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x25U))))) 
                     << 0x25U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x26U))))) 
                     << 0x26U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x27U))))) 
                     << 0x27U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x28U))))) 
                     << 0x28U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x29U))))) 
                     << 0x29U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x2aU))))) 
                     << 0x2aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x2bU))))) 
                     << 0x2bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x2cU))))) 
                     << 0x2cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x2dU))))) 
                     << 0x2dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x2eU))))) 
                     << 0x2eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x30U))))) 
                     << 0x30U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x31U))))) 
                     << 0x31U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x32U))))) 
                     << 0x32U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x33U))))) 
                     << 0x33U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x34U))))) 
                     << 0x34U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x35U))))) 
                     << 0x35U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x36U))))) 
                     << 0x36U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x37U))))) 
                     << 0x37U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x38U))))) 
                     << 0x38U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x39U))))) 
                     << 0x39U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x3aU))))) 
                     << 0x3aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x3bU))))) 
                     << 0x3bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x3cU))))) 
                     << 0x3cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x3dU))))) 
                     << 0x3dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x3eU))))) 
                     << 0x3eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [7U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [6U] 
                                                    >> 0x3fU))))) 
                     << 0x3fU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | (IData)((IData)((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [7U])))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 1U))))) 
                     << 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 2U))))) 
                     << 2U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 3U))))) 
                     << 3U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 4U))))) 
                     << 4U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 5U))))) 
                     << 5U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 6U))))) 
                     << 6U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 7U))))) 
                     << 7U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 8U))))) 
                     << 8U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 9U))))) 
                     << 9U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0xaU))))) 
                     << 0xaU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0xbU))))) 
                     << 0xbU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0xcU))))) 
                     << 0xcU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0xdU))))) 
                     << 0xdU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0xeU))))) 
                     << 0xeU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0xfU))))) 
                     << 0xfU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x10U))))) 
                     << 0x10U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x11U))))) 
                     << 0x11U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x12U))))) 
                     << 0x12U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x13U))))) 
                     << 0x13U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x14U))))) 
                     << 0x14U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x15U))))) 
                     << 0x15U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x16U))))) 
                     << 0x16U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x18U))))) 
                     << 0x18U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x19U))))) 
                     << 0x19U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x1aU))))) 
                     << 0x1aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x1bU))))) 
                     << 0x1bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x1cU))))) 
                     << 0x1cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x1dU))))) 
                     << 0x1dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x1eU))))) 
                     << 0x1eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x1fU))))) 
                     << 0x1fU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x20U))))) 
                     << 0x20U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x21U))))) 
                     << 0x21U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x22U))))) 
                     << 0x22U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x23U))))) 
                     << 0x23U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x24U))))) 
                     << 0x24U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x25U))))) 
                     << 0x25U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x26U))))) 
                     << 0x26U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x28U))))) 
                     << 0x28U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x29U))))) 
                     << 0x29U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x2aU))))) 
                     << 0x2aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x2bU))))) 
                     << 0x2bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x2cU))))) 
                     << 0x2cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x2dU))))) 
                     << 0x2dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x2eU))))) 
                     << 0x2eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x2fU))))) 
                     << 0x2fU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x30U))))) 
                     << 0x30U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x31U))))) 
                     << 0x31U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x32U))))) 
                     << 0x32U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x33U))))) 
                     << 0x33U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x34U))))) 
                     << 0x34U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x35U))))) 
                     << 0x35U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x36U))))) 
                     << 0x36U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x38U))))) 
                     << 0x38U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x39U))))) 
                     << 0x39U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x3aU))))) 
                     << 0x3aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x3bU))))) 
                     << 0x3bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x3cU))))) 
                     << 0x3cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x3dU))))) 
                     << 0x3dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x3eU))))) 
                     << 0x3eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[8U] 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [8U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [7U] 
                                                    >> 0x3fU))))) 
                     << 0x3fU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | (IData)((IData)((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                  [8U])))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 1U))))) 
                     << 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 2U))))) 
                     << 2U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 3U))))) 
                     << 3U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 4U))))) 
                     << 4U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 5U))))) 
                     << 5U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 6U))))) 
                     << 6U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 7U))))) 
                     << 7U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 8U))))) 
                     << 8U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 9U))))) 
                     << 9U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0xaU))))) 
                     << 0xaU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0xcU))))) 
                     << 0xcU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0xdU))))) 
                     << 0xdU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0xeU))))) 
                     << 0xeU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0xfU))))) 
                     << 0xfU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x10U))))) 
                     << 0x10U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x11U))))) 
                     << 0x11U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x12U))))) 
                     << 0x12U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x14U))))) 
                     << 0x14U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x15U))))) 
                     << 0x15U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x16U))))) 
                     << 0x16U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x17U))))) 
                     << 0x17U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x18U))))) 
                     << 0x18U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x19U))))) 
                     << 0x19U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x1aU))))) 
                     << 0x1aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x1cU))))) 
                     << 0x1cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x1dU))))) 
                     << 0x1dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x1eU))))) 
                     << 0x1eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x1fU))))) 
                     << 0x1fU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x20U))))) 
                     << 0x20U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x21U))))) 
                     << 0x21U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x22U))))) 
                     << 0x22U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x24U))))) 
                     << 0x24U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x25U))))) 
                     << 0x25U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x26U))))) 
                     << 0x26U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x27U))))) 
                     << 0x27U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x28U))))) 
                     << 0x28U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x29U))))) 
                     << 0x29U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x2aU))))) 
                     << 0x2aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x2cU))))) 
                     << 0x2cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x2dU))))) 
                     << 0x2dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x2eU))))) 
                     << 0x2eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x2fU))))) 
                     << 0x2fU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x30U))))) 
                     << 0x30U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x31U))))) 
                     << 0x31U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x32U))))) 
                     << 0x32U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x34U))))) 
                     << 0x34U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x35U))))) 
                     << 0x35U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x36U))))) 
                     << 0x36U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x37U))))) 
                     << 0x37U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x38U))))) 
                     << 0x38U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x39U))))) 
                     << 0x39U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x3aU))))) 
                     << 0x3aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x3cU))))) 
                     << 0x3cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x3dU))))) 
                     << 0x3dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x3eU))))) 
                     << 0x3eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[9U] 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [9U]) | ((QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [8U] 
                                                    >> 0x3fU))))) 
                     << 0x3fU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | (IData)((IData)((1U & (IData)(
                                                    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [9U])))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 1U))))) 
                       << 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 2U))))) 
                       << 2U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 3U))))) 
                       << 3U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 4U))))) 
                       << 4U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 6U))))) 
                       << 6U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 7U))))) 
                       << 7U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 8U))))) 
                       << 8U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0xaU))))) 
                       << 0xaU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0xbU))))) 
                       << 0xbU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0xcU))))) 
                       << 0xcU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0xeU))))) 
                       << 0xeU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0xfU))))) 
                       << 0xfU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x10U))))) 
                       << 0x10U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x12U))))) 
                       << 0x12U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x13U))))) 
                       << 0x13U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x14U))))) 
                       << 0x14U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x16U))))) 
                       << 0x16U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x17U))))) 
                       << 0x17U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x18U))))) 
                       << 0x18U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x1aU))))) 
                       << 0x1aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x1bU))))) 
                       << 0x1bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x1cU))))) 
                       << 0x1cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x1eU))))) 
                       << 0x1eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x1fU))))) 
                       << 0x1fU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x20U))))) 
                       << 0x20U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x22U))))) 
                       << 0x22U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x23U))))) 
                       << 0x23U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x24U))))) 
                       << 0x24U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x26U))))) 
                       << 0x26U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x27U))))) 
                       << 0x27U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x28U))))) 
                       << 0x28U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x2aU))))) 
                       << 0x2aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x2bU))))) 
                       << 0x2bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x2cU))))) 
                       << 0x2cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x2eU))))) 
                       << 0x2eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x2fU))))) 
                       << 0x2fU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x30U))))) 
                       << 0x30U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x32U))))) 
                       << 0x32U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x33U))))) 
                       << 0x33U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x34U))))) 
                       << 0x34U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x36U))))) 
                       << 0x36U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x37U))))) 
                       << 0x37U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x38U))))) 
                       << 0x38U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x3aU))))) 
                       << 0x3aU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x3bU))))) 
                       << 0x3bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x3cU))))) 
                       << 0x3cU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x3eU))))) 
                       << 0x3eU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xaU] 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xaU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [9U] 
                                                      >> 0x3fU))))) 
                       << 0x3fU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | (IData)((IData)((1U & (IData)(
                                                    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                    [0xaU])))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 1U))))) 
                       << 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 3U))))) 
                       << 3U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 5U))))) 
                       << 5U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 7U))))) 
                       << 7U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 9U))))) 
                       << 9U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0xbU))))) 
                       << 0xbU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0xdU))))) 
                       << 0xdU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0xfU))))) 
                       << 0xfU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x11U))))) 
                       << 0x11U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x13U))))) 
                       << 0x13U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x15U))))) 
                       << 0x15U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x17U))))) 
                       << 0x17U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x19U))))) 
                       << 0x19U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x1bU))))) 
                       << 0x1bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x1dU))))) 
                       << 0x1dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x1fU))))) 
                       << 0x1fU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x21U))))) 
                       << 0x21U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x23U))))) 
                       << 0x23U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x25U))))) 
                       << 0x25U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x27U))))) 
                       << 0x27U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x29U))))) 
                       << 0x29U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x2bU))))) 
                       << 0x2bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x2dU))))) 
                       << 0x2dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x2fU))))) 
                       << 0x2fU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x31U))))) 
                       << 0x31U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x33U))))) 
                       << 0x33U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x35U))))) 
                       << 0x35U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x37U))))) 
                       << 0x37U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x39U))))) 
                       << 0x39U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x3bU))))) 
                       << 0x3bU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x3dU))))) 
                       << 0x3dU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P[0xbU] 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
            [0xbU]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__P
                                                      [0xaU] 
                                                      >> 0x3fU))))) 
                       << 0x3fU));
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit___024root___act_sequent__TOP__2(Vtb_booth4wallace_multiplier_nbit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_booth4wallace_multiplier_nbit___024root___act_sequent__TOP__2\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [5U][1U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [5U][0U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [4U][2U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [4U][1U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [4U][0U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [3U][3U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [3U][2U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [3U][1U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [3U][0U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][5U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][4U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][3U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][2U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][1U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][0U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[8U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][8U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[7U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][7U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[6U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][6U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][5U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][4U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][3U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][2U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][1U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][0U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0xcU] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][0xcU];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0xbU] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][0xbU];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0xaU] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][0xaU];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[9U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][9U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[8U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][8U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[7U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][7U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[6U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][6U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][5U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][4U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][3U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][2U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][1U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][0U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
        [0U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
        [1U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
        [0U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
        [0U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp[6U][1U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [1U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__op_temp[6U][0U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0U];
}

VL_INLINE_OPT void Vtb_booth4wallace_multiplier_nbit___024root___act_comb__TOP__0(Vtb_booth4wallace_multiplier_nbit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_booth4wallace_multiplier_nbit___024root___act_comb__TOP__0\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base 
        = (((QData)((IData)((- (IData)(((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_op1_signed) 
                                        & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_op1 
                                                   >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_op1)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
        = (((QData)((IData)((3U & (- (IData)(((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_op2_signed) 
                                              & (IData)(
                                                        (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_op2 
                                                         >> 0x1fU)))))))) 
            << 0x21U) | ((QData)((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__in_op2)) 
                         << 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[0U] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 2U))) ? ((1U & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                     >> 1U)))
                                       ? ((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth))
                                           ? 0ULL : 
                                          (~ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base))
                                       : ((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth))
                                           ? (~ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base)
                                           : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 1U))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 1U))) ? ((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth))
                                           ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 1U)
                                           : vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base)
                : ((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth))
                    ? vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[1U] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 4U))) ? ((1U & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                     >> 3U)))
                                       ? ((1U & (IData)(
                                                        (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 2U)))
                                           ? 0ULL : 
                                          (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 2U)))
                                       : ((1U & (IData)(
                                                        (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 2U)))
                                           ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 2U))
                                           : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 3U))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 3U))) ? ((1U & (IData)(
                                                        (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 2U)))
                                           ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 3U)
                                           : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 2U))
                : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 2U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 2U)
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[2U] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 6U))) ? ((1U & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                     >> 5U)))
                                       ? ((1U & (IData)(
                                                        (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 4U)))
                                           ? 0ULL : 
                                          (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 4U)))
                                       : ((1U & (IData)(
                                                        (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 4U)))
                                           ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 4U))
                                           : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 5U))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 5U))) ? ((1U & (IData)(
                                                        (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 4U)))
                                           ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 5U)
                                           : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 4U))
                : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 4U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 4U)
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[3U] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 8U))) ? ((1U & (IData)(
                                                    (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                     >> 7U)))
                                       ? ((1U & (IData)(
                                                        (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 6U)))
                                           ? 0ULL : 
                                          (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 6U)))
                                       : ((1U & (IData)(
                                                        (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 6U)))
                                           ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 6U))
                                           : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 7U))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 7U))) ? ((1U & (IData)(
                                                        (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 6U)))
                                           ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 7U)
                                           : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 6U))
                : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 6U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 6U)
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[4U] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0xaU))) ? ((1U & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                       >> 9U)))
                                         ? ((1U & (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 8U)))
                                             ? 0ULL
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 8U)))
                                         : ((1U & (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 8U)))
                                             ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 8U))
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 9U))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 9U))) ? ((1U & (IData)(
                                                        (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 8U)))
                                           ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 9U)
                                           : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 8U))
                : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 8U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 8U)
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[5U] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0xcU))) ? ((1U & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                       >> 0xbU)))
                                         ? ((1U & (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xaU)))
                                             ? 0ULL
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xaU)))
                                         : ((1U & (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xaU)))
                                             ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xaU))
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xbU))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0xbU))) ? ((1U & (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xaU)))
                                             ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xbU)
                                             : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xaU))
                : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0xaU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xaU)
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[6U] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0xeU))) ? ((1U & (IData)(
                                                      (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                       >> 0xdU)))
                                         ? ((1U & (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xcU)))
                                             ? 0ULL
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xcU)))
                                         : ((1U & (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xcU)))
                                             ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xcU))
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xdU))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0xdU))) ? ((1U & (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xcU)))
                                             ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xdU)
                                             : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xcU))
                : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0xcU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xcU)
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[7U] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x10U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0xfU)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0xeU)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xeU)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0xeU)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xeU))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xfU))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0xfU))) ? ((1U & (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xeU)))
                                             ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xfU)
                                             : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xeU))
                : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0xeU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xeU)
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[8U] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x12U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x11U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x10U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x10U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x10U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x10U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x11U))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x11U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x10U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x11U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x10U))
                : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x10U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x10U)
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[9U] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x14U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x13U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x12U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x12U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x12U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x12U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x13U))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x13U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x12U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x13U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x12U))
                : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x12U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x12U)
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[0xaU] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x16U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x15U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x14U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x14U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x14U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x14U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x15U))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x15U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x14U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x15U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x14U))
                : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x14U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x14U)
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[0xbU] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x18U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x17U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x16U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x16U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x16U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x16U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x17U))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x17U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x16U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x17U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x16U))
                : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x16U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x16U)
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[0xcU] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x1aU))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x19U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x18U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x18U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x18U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x18U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x19U))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x19U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x18U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x19U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x18U))
                : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x18U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x18U)
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[0xdU] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x1cU))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x1bU)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1aU)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1aU)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1aU)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1aU))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1bU))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x1bU))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1aU)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1bU)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1aU))
                : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x1aU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1aU)
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[0xeU] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x1eU))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x1dU)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1cU)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1cU)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1cU)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1cU))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1dU))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x1dU))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1cU)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1dU)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1cU))
                : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x1cU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1cU)
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[0xfU] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x20U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x1fU)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1eU)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1eU)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1eU)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1eU))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1fU))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x1fU))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1eU)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1fU)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1eU))
                : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x1eU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1eU)
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[0x10U] 
        = ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x22U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x21U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x20U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x20U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x20U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x20U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x21U))))
            : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x21U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x20U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x21U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x20U))
                : ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x20U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x20U)
                    : 0ULL)));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1fffeU & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | ((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                             >> 2U))) && ((1U & (~ (IData)(
                                                           (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 1U)))) 
                                          || (1U & 
                                              (~ (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth))))));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1fffdU & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 4U))) && ((1U & (~ (IData)(
                                                            (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                             >> 3U)))) 
                                           || (1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 2U)))))) 
              << 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1fffbU & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 6U))) && ((1U & (~ (IData)(
                                                            (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                             >> 5U)))) 
                                           || (1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 4U)))))) 
              << 2U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1fff7U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 8U))) && ((1U & (~ (IData)(
                                                            (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                             >> 7U)))) 
                                           || (1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 6U)))))) 
              << 3U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1ffefU & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0xaU))) && ((1U & 
                                              (~ (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                          >> 9U)))) 
                                             || (1U 
                                                 & (~ (IData)(
                                                              (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                               >> 8U)))))) 
              << 4U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1ffdfU & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0xcU))) && ((1U & 
                                              (~ (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                          >> 0xbU)))) 
                                             || (1U 
                                                 & (~ (IData)(
                                                              (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                               >> 0xaU)))))) 
              << 5U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1ffbfU & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0xeU))) && ((1U & 
                                              (~ (IData)(
                                                         (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                          >> 0xdU)))) 
                                             || (1U 
                                                 & (~ (IData)(
                                                              (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                               >> 0xcU)))))) 
              << 6U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1ff7fU & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x10U))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xfU)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0xeU)))))) 
              << 7U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1feffU & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x12U))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x11U)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x10U)))))) 
              << 8U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1fdffU & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x14U))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x13U)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x12U)))))) 
              << 9U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1fbffU & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x16U))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x15U)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x14U)))))) 
              << 0xaU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1f7ffU & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x18U))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x17U)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x16U)))))) 
              << 0xbU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1efffU & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x1aU))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x19U)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x18U)))))) 
              << 0xcU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1dfffU & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x1cU))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x1bU)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x1aU)))))) 
              << 0xdU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x1bfffU & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x1eU))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x1dU)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x1cU)))))) 
              << 0xeU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0x17fffU & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x20U))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x1fU)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x1eU)))))) 
              << 0xfU));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag 
        = ((0xffffU & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag) 
           | (((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x22U))) && ((1U & 
                                               (~ (IData)(
                                                          (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0x21U)))) 
                                              || (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                                >> 0x20U)))))) 
              << 0x10U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[0U] 
        = ((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[1U] 
        = ((2U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((2U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[2U] 
        = ((4U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((4U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[3U] 
        = ((8U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((8U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[4U] 
        = ((0x10U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x10U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[5U] 
        = ((0x20U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x20U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[6U] 
        = ((0x40U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x40U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[7U] 
        = ((0x80U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x80U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[8U] 
        = ((0x100U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x100U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[9U] 
        = ((0x200U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x200U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[0xaU] 
        = ((0x400U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x400U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[0xbU] 
        = ((0x800U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x800U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[0xcU] 
        = ((0x1000U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x1000U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[0xdU] 
        = ((0x2000U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x2000U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[0xeU] 
        = ((0x4000U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x4000U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[0xfU] 
        = ((0x8000U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x8000U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag[0x10U] 
        = ((0x10000U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
            ? ((0x10000U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_booth_flag)
                ? 1U : 0U) : 0U);
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
        [0U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
        [1U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [2U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [3U]) | 
                                          ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                            [3U] | 
                                            vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                            [2U]) & 
                                           vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [4U])), 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2U] 
        = (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
           [2U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                   [3U] ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                   [4U]));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[5U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [5U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [6U]) | 
                                          ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                            [6U] | 
                                            vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                            [5U]) & 
                                           vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [7U])), 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[4U] 
        = (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
           [5U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                   [6U] ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                   [7U]));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[7U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [8U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [9U]) | 
                                          ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                            [9U] | 
                                            vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                            [8U]) & 
                                           vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [0xaU])), 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[6U] 
        = (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
           [8U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                   [9U] ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                   [0xaU]));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[9U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [0xbU] & 
                                           vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [0xcU]) 
                                          | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                              [0xcU] 
                                              | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                              [0xbU]) 
                                             & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [0xdU])), 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[8U] 
        = (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
           [0xbU] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                     [0xcU] ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                     [0xdU]));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0xbU] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [0xeU] & 
                                           vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [0xfU]) 
                                          | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                              [0xfU] 
                                              | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                              [0xeU]) 
                                             & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [0x10U])), 1U));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0xaU] 
        = (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
           [0xeU] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                     [0xfU] ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                     [0x10U]));
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][0xbU] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0xbU];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][0xaU] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0xaU];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][9U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [9U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][8U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [8U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][7U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [7U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][6U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [6U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][5U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [5U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][4U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [4U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][3U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [3U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][2U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [2U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][1U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [1U];
    vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[0U][0U] 
        = vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0U];
}
