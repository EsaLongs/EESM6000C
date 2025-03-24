// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_booth4wallace_multiplier_nbit__Syms.h"


VL_ATTR_COLD void Vtb_booth4wallace_multiplier_nbit___024root__trace_full_0_sub_3(Vtb_booth4wallace_multiplier_nbit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_booth4wallace_multiplier_nbit___024root__trace_full_0_sub_3\n"); );
    Vtb_booth4wallace_multiplier_nbit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+4391,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                      ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                        [5U] 
                                                        & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                        [6U]) 
                                                       | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                           [6U] 
                                                           | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                           [5U]) 
                                                          & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                          [7U])), 1U))),5);
    bufp->fullCData(oldp+4392,(((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [5U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [6U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [6U] | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [5U]) & 
                                          vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [7U]))),5);
    bufp->fullBit(oldp+4393,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                              [5U])));
    bufp->fullBit(oldp+4394,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                              [6U])));
    bufp->fullBit(oldp+4395,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                              [7U])));
    bufp->fullBit(oldp+4396,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                     [5U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                     [6U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [6U] 
                                               | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [5U]) 
                                              & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                              [7U])))));
    bufp->fullBit(oldp+4397,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [5U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                            [6U] ^ 
                                            vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                            [7U])))));
    bufp->fullBit(oldp+4398,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+4399,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [6U] >> 1U))));
    bufp->fullBit(oldp+4400,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [7U] >> 1U))));
    bufp->fullBit(oldp+4401,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                      [5U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                      [6U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [6U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [5U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [7U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4402,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                     [5U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [6U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [7U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4403,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [5U] >> 2U))));
    bufp->fullBit(oldp+4404,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [6U] >> 2U))));
    bufp->fullBit(oldp+4405,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [7U] >> 2U))));
    bufp->fullBit(oldp+4406,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                      [5U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                      [6U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [6U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [5U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [7U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4407,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                     [5U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [6U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [7U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4408,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [5U] >> 3U))));
    bufp->fullBit(oldp+4409,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [6U] >> 3U))));
    bufp->fullBit(oldp+4410,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [7U] >> 3U))));
    bufp->fullBit(oldp+4411,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                      [5U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                      [6U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [6U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [5U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [7U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4412,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                     [5U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [6U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [7U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4413,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [5U] >> 4U))));
    bufp->fullBit(oldp+4414,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [6U] >> 4U))));
    bufp->fullBit(oldp+4415,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [7U] >> 4U))));
    bufp->fullBit(oldp+4416,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                      [5U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                      [6U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [6U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [5U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [7U])) 
                                    >> 4U))));
    bufp->fullBit(oldp+4417,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                     [5U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [6U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [7U])) 
                                    >> 4U))));
    bufp->fullCData(oldp+4418,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                               [8U]),5);
    bufp->fullCData(oldp+4419,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                               [9U]),5);
    bufp->fullCData(oldp+4420,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                               [0xaU]),5);
    bufp->fullCData(oldp+4421,((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                [8U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [9U] ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                        [0xaU]))),5);
    bufp->fullCData(oldp+4422,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                      ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                        [8U] 
                                                        & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                        [9U]) 
                                                       | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                           [9U] 
                                                           | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                           [8U]) 
                                                          & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                          [0xaU])), 1U))),5);
    bufp->fullCData(oldp+4423,(((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [8U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                 [9U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [9U] | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                           [8U]) & 
                                          vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                          [0xaU]))),5);
    bufp->fullBit(oldp+4424,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                              [8U])));
    bufp->fullBit(oldp+4425,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                              [9U])));
    bufp->fullBit(oldp+4426,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                              [0xaU])));
    bufp->fullBit(oldp+4427,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                     [8U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                     [9U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [9U] 
                                               | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [8U]) 
                                              & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                              [0xaU])))));
    bufp->fullBit(oldp+4428,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [8U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                            [9U] ^ 
                                            vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                            [0xaU])))));
    bufp->fullBit(oldp+4429,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [8U] >> 1U))));
    bufp->fullBit(oldp+4430,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [9U] >> 1U))));
    bufp->fullBit(oldp+4431,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [0xaU] >> 1U))));
    bufp->fullBit(oldp+4432,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                      [8U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                      [9U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [9U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [8U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [0xaU])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4433,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                     [8U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [9U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [0xaU])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4434,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [8U] >> 2U))));
    bufp->fullBit(oldp+4435,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [9U] >> 2U))));
    bufp->fullBit(oldp+4436,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [0xaU] >> 2U))));
    bufp->fullBit(oldp+4437,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                      [8U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                      [9U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [9U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [8U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [0xaU])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4438,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                     [8U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [9U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [0xaU])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4439,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [8U] >> 3U))));
    bufp->fullBit(oldp+4440,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [9U] >> 3U))));
    bufp->fullBit(oldp+4441,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [0xaU] >> 3U))));
    bufp->fullBit(oldp+4442,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                      [8U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                      [9U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [9U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [8U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [0xaU])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4443,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                     [8U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [9U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [0xaU])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4444,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [8U] >> 4U))));
    bufp->fullBit(oldp+4445,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [9U] >> 4U))));
    bufp->fullBit(oldp+4446,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                    [0xaU] >> 4U))));
    bufp->fullBit(oldp+4447,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                      [8U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                      [9U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [9U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                                [8U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                               [0xaU])) 
                                    >> 4U))));
    bufp->fullBit(oldp+4448,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                     [8U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [9U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg_flag
                                             [0xaU])) 
                                    >> 4U))));
    bufp->fullQData(oldp+4449,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[0]),64);
    bufp->fullQData(oldp+4451,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[1]),64);
    bufp->fullQData(oldp+4453,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[2]),64);
    bufp->fullQData(oldp+4455,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[3]),64);
    bufp->fullQData(oldp+4457,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[4]),64);
    bufp->fullQData(oldp+4459,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[5]),64);
    bufp->fullQData(oldp+4461,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[6]),64);
    bufp->fullQData(oldp+4463,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[7]),64);
    bufp->fullQData(oldp+4465,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[8]),64);
    bufp->fullQData(oldp+4467,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[9]),64);
    bufp->fullQData(oldp+4469,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[10]),64);
    bufp->fullQData(oldp+4471,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[11]),64);
    bufp->fullQData(oldp+4473,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[12]),64);
    bufp->fullQData(oldp+4475,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[13]),64);
    bufp->fullQData(oldp+4477,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[14]),64);
    bufp->fullQData(oldp+4479,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[15]),64);
    bufp->fullQData(oldp+4481,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[16]),64);
    bufp->fullQData(oldp+4483,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[17]),64);
    bufp->fullQData(oldp+4485,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate[18]),64);
    bufp->fullCData(oldp+4487,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0]),5);
    bufp->fullCData(oldp+4488,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1]),5);
    bufp->fullCData(oldp+4489,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2]),5);
    bufp->fullCData(oldp+4490,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3]),5);
    bufp->fullCData(oldp+4491,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4]),5);
    bufp->fullCData(oldp+4492,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5]),5);
    bufp->fullCData(oldp+4493,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[6]),5);
    bufp->fullCData(oldp+4494,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[7]),5);
    bufp->fullCData(oldp+4495,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[8]),5);
    bufp->fullCData(oldp+4496,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[9]),5);
    bufp->fullCData(oldp+4497,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[10]),5);
    bufp->fullCData(oldp+4498,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[11]),5);
    bufp->fullCData(oldp+4499,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),5);
    bufp->fullCData(oldp+4500,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),5);
    bufp->fullCData(oldp+4501,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2]),5);
    bufp->fullCData(oldp+4502,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3]),5);
    bufp->fullCData(oldp+4503,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[4]),5);
    bufp->fullCData(oldp+4504,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[5]),5);
    bufp->fullCData(oldp+4505,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[6]),5);
    bufp->fullCData(oldp+4506,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[7]),5);
    bufp->fullCData(oldp+4507,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [0U]),5);
    bufp->fullCData(oldp+4508,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [1U]),5);
    bufp->fullCData(oldp+4509,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [2U]),5);
    bufp->fullCData(oldp+4510,((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U] ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [2U]))),5);
    bufp->fullCData(oldp+4511,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                      ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [0U] 
                                                        & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [1U]) 
                                                       | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [1U] 
                                                           | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [0U]) 
                                                          & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [2U])), 1U))),5);
    bufp->fullCData(oldp+4512,(((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [1U] | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [0U]) & 
                                          vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [2U]))),5);
    bufp->fullBit(oldp+4513,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [0U])));
    bufp->fullBit(oldp+4514,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [1U])));
    bufp->fullBit(oldp+4515,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [2U])));
    bufp->fullBit(oldp+4516,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U]) 
                                              & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U])))));
    bufp->fullBit(oldp+4517,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [1U] ^ 
                                            vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [2U])))));
    bufp->fullBit(oldp+4518,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0U] >> 1U))));
    bufp->fullBit(oldp+4519,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] >> 1U))));
    bufp->fullBit(oldp+4520,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+4521,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4522,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4523,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0U] >> 2U))));
    bufp->fullBit(oldp+4524,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] >> 2U))));
    bufp->fullBit(oldp+4525,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 2U))));
    bufp->fullBit(oldp+4526,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4527,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4528,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0U] >> 3U))));
    bufp->fullBit(oldp+4529,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] >> 3U))));
    bufp->fullBit(oldp+4530,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 3U))));
    bufp->fullBit(oldp+4531,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4532,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4533,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0U] >> 4U))));
    bufp->fullBit(oldp+4534,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] >> 4U))));
    bufp->fullBit(oldp+4535,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 4U))));
    bufp->fullBit(oldp+4536,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                    >> 4U))));
    bufp->fullBit(oldp+4537,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U])) 
                                    >> 4U))));
    bufp->fullCData(oldp+4538,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [3U]),5);
    bufp->fullCData(oldp+4539,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [4U]),5);
    bufp->fullCData(oldp+4540,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [5U]),5);
    bufp->fullCData(oldp+4541,((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [3U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [4U] ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [5U]))),5);
    bufp->fullCData(oldp+4542,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                      ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [3U] 
                                                        & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [4U]) 
                                                       | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [4U] 
                                                           | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [3U]) 
                                                          & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [5U])), 1U))),5);
    bufp->fullCData(oldp+4543,(((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [3U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [4U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [4U] | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [3U]) & 
                                          vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [5U]))),5);
    bufp->fullBit(oldp+4544,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [3U])));
    bufp->fullBit(oldp+4545,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [4U])));
    bufp->fullBit(oldp+4546,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [5U])));
    bufp->fullBit(oldp+4547,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [3U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [4U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [3U]) 
                                              & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [5U])))));
    bufp->fullBit(oldp+4548,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [4U] ^ 
                                            vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [5U])))));
    bufp->fullBit(oldp+4549,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+4550,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [4U] >> 1U))));
    bufp->fullBit(oldp+4551,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+4552,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [3U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4553,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [3U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [4U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [5U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4554,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] >> 2U))));
    bufp->fullBit(oldp+4555,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [4U] >> 2U))));
    bufp->fullBit(oldp+4556,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [5U] >> 2U))));
    bufp->fullBit(oldp+4557,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [3U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4558,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [3U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [4U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [5U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4559,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] >> 3U))));
    bufp->fullBit(oldp+4560,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [4U] >> 3U))));
    bufp->fullBit(oldp+4561,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [5U] >> 3U))));
    bufp->fullBit(oldp+4562,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [3U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4563,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [3U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [4U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [5U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4564,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] >> 4U))));
    bufp->fullBit(oldp+4565,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [4U] >> 4U))));
    bufp->fullBit(oldp+4566,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [5U] >> 4U))));
    bufp->fullBit(oldp+4567,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [3U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U])) 
                                    >> 4U))));
    bufp->fullBit(oldp+4568,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [3U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [4U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [5U])) 
                                    >> 4U))));
    bufp->fullCData(oldp+4569,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [6U]),5);
    bufp->fullCData(oldp+4570,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [7U]),5);
    bufp->fullCData(oldp+4571,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [8U]),5);
    bufp->fullCData(oldp+4572,((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [6U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [7U] ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [8U]))),5);
    bufp->fullCData(oldp+4573,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                      ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [6U] 
                                                        & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [7U]) 
                                                       | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [7U] 
                                                           | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [6U]) 
                                                          & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [8U])), 1U))),5);
    bufp->fullCData(oldp+4574,(((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [6U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [7U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [7U] | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [6U]) & 
                                          vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [8U]))),5);
    bufp->fullBit(oldp+4575,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [6U])));
    bufp->fullBit(oldp+4576,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [7U])));
    bufp->fullBit(oldp+4577,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [8U])));
    bufp->fullBit(oldp+4578,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [6U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [7U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U] 
                                               | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U]) 
                                              & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [8U])))));
    bufp->fullBit(oldp+4579,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [6U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [7U] ^ 
                                            vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [8U])))));
    bufp->fullBit(oldp+4580,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [6U] >> 1U))));
    bufp->fullBit(oldp+4581,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [7U] >> 1U))));
    bufp->fullBit(oldp+4582,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [8U] >> 1U))));
    bufp->fullBit(oldp+4583,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [7U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [6U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4584,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [6U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [7U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [8U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4585,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [6U] >> 2U))));
    bufp->fullBit(oldp+4586,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [7U] >> 2U))));
    bufp->fullBit(oldp+4587,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [8U] >> 2U))));
    bufp->fullBit(oldp+4588,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [7U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [6U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4589,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [6U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [7U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [8U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4590,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [6U] >> 3U))));
    bufp->fullBit(oldp+4591,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [7U] >> 3U))));
    bufp->fullBit(oldp+4592,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [8U] >> 3U))));
    bufp->fullBit(oldp+4593,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [7U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [6U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4594,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [6U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [7U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [8U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4595,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [6U] >> 4U))));
    bufp->fullBit(oldp+4596,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [7U] >> 4U))));
    bufp->fullBit(oldp+4597,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [8U] >> 4U))));
    bufp->fullBit(oldp+4598,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [7U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [7U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [6U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [8U])) 
                                    >> 4U))));
    bufp->fullBit(oldp+4599,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [6U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [7U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [8U])) 
                                    >> 4U))));
    bufp->fullCData(oldp+4600,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [9U]),5);
    bufp->fullCData(oldp+4601,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [0xaU]),5);
    bufp->fullCData(oldp+4602,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [0xbU]),5);
    bufp->fullCData(oldp+4603,((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [9U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0xaU] ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [0xbU]))),5);
    bufp->fullCData(oldp+4604,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                      ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [9U] 
                                                        & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [0xaU]) 
                                                       | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [0xaU] 
                                                           | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [9U]) 
                                                          & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [0xbU])), 1U))),5);
    bufp->fullCData(oldp+4605,(((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [9U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [0xaU]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0xaU] 
                                             | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [9U]) 
                                            & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [0xbU]))),5);
    bufp->fullBit(oldp+4606,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [9U])));
    bufp->fullBit(oldp+4607,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [0xaU])));
    bufp->fullBit(oldp+4608,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [0xbU])));
    bufp->fullBit(oldp+4609,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [9U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [0xaU]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xaU] 
                                                 | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [9U]) 
                                                & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0xbU])))));
    bufp->fullBit(oldp+4610,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [9U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [0xaU] 
                                            ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [0xbU])))));
    bufp->fullBit(oldp+4611,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [9U] >> 1U))));
    bufp->fullBit(oldp+4612,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0xaU] >> 1U))));
    bufp->fullBit(oldp+4613,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0xbU] >> 1U))));
    bufp->fullBit(oldp+4614,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [9U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0xaU]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0xaU] 
                                                  | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [9U]) 
                                                 & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xbU])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4615,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [9U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0xaU] 
                                             ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0xbU])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4616,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [9U] >> 2U))));
    bufp->fullBit(oldp+4617,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0xaU] >> 2U))));
    bufp->fullBit(oldp+4618,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0xbU] >> 2U))));
    bufp->fullBit(oldp+4619,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [9U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0xaU]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0xaU] 
                                                  | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [9U]) 
                                                 & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xbU])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4620,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [9U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0xaU] 
                                             ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0xbU])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4621,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [9U] >> 3U))));
    bufp->fullBit(oldp+4622,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0xaU] >> 3U))));
    bufp->fullBit(oldp+4623,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0xbU] >> 3U))));
    bufp->fullBit(oldp+4624,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [9U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0xaU]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0xaU] 
                                                  | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [9U]) 
                                                 & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xbU])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4625,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [9U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0xaU] 
                                             ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0xbU])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4626,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [9U] >> 4U))));
    bufp->fullBit(oldp+4627,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0xaU] >> 4U))));
    bufp->fullBit(oldp+4628,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0xbU] >> 4U))));
    bufp->fullBit(oldp+4629,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [9U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0xaU]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [0xaU] 
                                                  | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                  [9U]) 
                                                 & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                 [0xbU])) 
                                    >> 4U))));
    bufp->fullBit(oldp+4630,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [9U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0xaU] 
                                             ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0xbU])) 
                                    >> 4U))));
    bufp->fullCData(oldp+4631,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0]),5);
    bufp->fullCData(oldp+4632,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1]),5);
    bufp->fullCData(oldp+4633,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2]),5);
    bufp->fullCData(oldp+4634,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3]),5);
    bufp->fullCData(oldp+4635,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4]),5);
    bufp->fullCData(oldp+4636,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5]),5);
    bufp->fullCData(oldp+4637,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[6]),5);
    bufp->fullCData(oldp+4638,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[7]),5);
    bufp->fullCData(oldp+4639,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),5);
    bufp->fullCData(oldp+4640,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),5);
    bufp->fullCData(oldp+4641,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2]),5);
    bufp->fullCData(oldp+4642,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3]),5);
    bufp->fullCData(oldp+4643,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[4]),5);
    bufp->fullCData(oldp+4644,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[5]),5);
    bufp->fullCData(oldp+4645,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [2U]),5);
    bufp->fullCData(oldp+4646,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [3U]),5);
    bufp->fullCData(oldp+4647,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [4U]),5);
    bufp->fullCData(oldp+4648,((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [2U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [3U] ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [4U]))),5);
    bufp->fullCData(oldp+4649,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                      ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [2U] 
                                                        & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [3U]) 
                                                       | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [3U] 
                                                           | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [2U]) 
                                                          & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [4U])), 1U))),5);
    bufp->fullCData(oldp+4650,(((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [2U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [3U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [3U] | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [2U]) & 
                                          vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [4U]))),5);
    bufp->fullBit(oldp+4651,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [2U])));
    bufp->fullBit(oldp+4652,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [3U])));
    bufp->fullBit(oldp+4653,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [4U])));
    bufp->fullBit(oldp+4654,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [2U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [3U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [3U] 
                                               | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U]) 
                                              & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [4U])))));
    bufp->fullBit(oldp+4655,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [3U] ^ 
                                            vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [4U])))));
    bufp->fullBit(oldp+4656,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+4657,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+4658,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [4U] >> 1U))));
    bufp->fullBit(oldp+4659,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [3U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [2U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4660,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [2U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [3U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [4U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4661,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 2U))));
    bufp->fullBit(oldp+4662,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] >> 2U))));
    bufp->fullBit(oldp+4663,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [4U] >> 2U))));
    bufp->fullBit(oldp+4664,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [3U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [2U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4665,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [2U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [3U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [4U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4666,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 3U))));
    bufp->fullBit(oldp+4667,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] >> 3U))));
    bufp->fullBit(oldp+4668,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [4U] >> 3U))));
    bufp->fullBit(oldp+4669,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [3U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [2U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4670,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [2U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [3U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [4U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4671,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 4U))));
    bufp->fullBit(oldp+4672,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] >> 4U))));
    bufp->fullBit(oldp+4673,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [4U] >> 4U))));
    bufp->fullBit(oldp+4674,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [3U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [2U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U])) 
                                    >> 4U))));
    bufp->fullBit(oldp+4675,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [2U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [3U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [4U])) 
                                    >> 4U))));
    bufp->fullCData(oldp+4676,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [5U]),5);
    bufp->fullCData(oldp+4677,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [6U]),5);
    bufp->fullCData(oldp+4678,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [7U]),5);
    bufp->fullCData(oldp+4679,((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [5U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [6U] ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [7U]))),5);
    bufp->fullCData(oldp+4680,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                      ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [5U] 
                                                        & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [6U]) 
                                                       | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [6U] 
                                                           | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [5U]) 
                                                          & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [7U])), 1U))),5);
    bufp->fullCData(oldp+4681,(((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [5U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [6U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [6U] | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [5U]) & 
                                          vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [7U]))),5);
    bufp->fullBit(oldp+4682,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [5U])));
    bufp->fullBit(oldp+4683,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [6U])));
    bufp->fullBit(oldp+4684,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [7U])));
    bufp->fullBit(oldp+4685,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [5U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [6U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [6U] 
                                               | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U]) 
                                              & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [7U])))));
    bufp->fullBit(oldp+4686,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [5U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [6U] ^ 
                                            vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [7U])))));
    bufp->fullBit(oldp+4687,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+4688,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [6U] >> 1U))));
    bufp->fullBit(oldp+4689,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [7U] >> 1U))));
    bufp->fullBit(oldp+4690,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [6U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [5U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4691,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [5U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [6U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [7U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4692,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [5U] >> 2U))));
    bufp->fullBit(oldp+4693,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [6U] >> 2U))));
    bufp->fullBit(oldp+4694,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [7U] >> 2U))));
    bufp->fullBit(oldp+4695,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [6U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [5U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4696,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [5U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [6U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [7U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4697,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [5U] >> 3U))));
    bufp->fullBit(oldp+4698,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [6U] >> 3U))));
    bufp->fullBit(oldp+4699,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [7U] >> 3U))));
    bufp->fullBit(oldp+4700,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [6U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [5U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4701,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [5U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [6U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [7U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4702,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [5U] >> 4U))));
    bufp->fullBit(oldp+4703,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [6U] >> 4U))));
    bufp->fullBit(oldp+4704,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [7U] >> 4U))));
    bufp->fullBit(oldp+4705,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [5U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [6U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [6U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [5U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [7U])) 
                                    >> 4U))));
    bufp->fullBit(oldp+4706,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [5U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [6U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [7U])) 
                                    >> 4U))));
    bufp->fullCData(oldp+4707,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0]),5);
    bufp->fullCData(oldp+4708,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1]),5);
    bufp->fullCData(oldp+4709,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2]),5);
    bufp->fullCData(oldp+4710,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3]),5);
    bufp->fullCData(oldp+4711,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4]),5);
    bufp->fullCData(oldp+4712,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5]),5);
    bufp->fullCData(oldp+4713,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),5);
    bufp->fullCData(oldp+4714,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),5);
    bufp->fullCData(oldp+4715,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2]),5);
    bufp->fullCData(oldp+4716,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3]),5);
    bufp->fullCData(oldp+4717,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [0U]),5);
    bufp->fullCData(oldp+4718,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [1U]),5);
    bufp->fullCData(oldp+4719,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [2U]),5);
    bufp->fullCData(oldp+4720,((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U] ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [2U]))),5);
    bufp->fullCData(oldp+4721,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                      ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [0U] 
                                                        & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [1U]) 
                                                       | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [1U] 
                                                           | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [0U]) 
                                                          & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [2U])), 1U))),5);
    bufp->fullCData(oldp+4722,(((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [1U] | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [0U]) & 
                                          vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [2U]))),5);
    bufp->fullBit(oldp+4723,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [0U])));
    bufp->fullBit(oldp+4724,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [1U])));
    bufp->fullBit(oldp+4725,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [2U])));
    bufp->fullBit(oldp+4726,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U]) 
                                              & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U])))));
    bufp->fullBit(oldp+4727,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [1U] ^ 
                                            vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [2U])))));
    bufp->fullBit(oldp+4728,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0U] >> 1U))));
    bufp->fullBit(oldp+4729,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] >> 1U))));
    bufp->fullBit(oldp+4730,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+4731,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4732,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4733,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0U] >> 2U))));
    bufp->fullBit(oldp+4734,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] >> 2U))));
    bufp->fullBit(oldp+4735,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 2U))));
    bufp->fullBit(oldp+4736,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4737,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4738,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0U] >> 3U))));
    bufp->fullBit(oldp+4739,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] >> 3U))));
    bufp->fullBit(oldp+4740,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 3U))));
    bufp->fullBit(oldp+4741,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4742,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4743,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0U] >> 4U))));
    bufp->fullBit(oldp+4744,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] >> 4U))));
    bufp->fullBit(oldp+4745,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 4U))));
    bufp->fullBit(oldp+4746,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                    >> 4U))));
    bufp->fullBit(oldp+4747,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U])) 
                                    >> 4U))));
    bufp->fullCData(oldp+4748,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [3U]),5);
    bufp->fullCData(oldp+4749,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [4U]),5);
    bufp->fullCData(oldp+4750,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [5U]),5);
    bufp->fullCData(oldp+4751,((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [3U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [4U] ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [5U]))),5);
    bufp->fullCData(oldp+4752,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                      ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [3U] 
                                                        & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [4U]) 
                                                       | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [4U] 
                                                           | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [3U]) 
                                                          & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [5U])), 1U))),5);
    bufp->fullCData(oldp+4753,(((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [3U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [4U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [4U] | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [3U]) & 
                                          vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [5U]))),5);
    bufp->fullBit(oldp+4754,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [3U])));
    bufp->fullBit(oldp+4755,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [4U])));
    bufp->fullBit(oldp+4756,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [5U])));
    bufp->fullBit(oldp+4757,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [3U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [4U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [4U] 
                                               | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [3U]) 
                                              & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [5U])))));
    bufp->fullBit(oldp+4758,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [4U] ^ 
                                            vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [5U])))));
    bufp->fullBit(oldp+4759,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+4760,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [4U] >> 1U))));
    bufp->fullBit(oldp+4761,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [5U] >> 1U))));
    bufp->fullBit(oldp+4762,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [3U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4763,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [3U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [4U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [5U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4764,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] >> 2U))));
    bufp->fullBit(oldp+4765,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [4U] >> 2U))));
    bufp->fullBit(oldp+4766,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [5U] >> 2U))));
    bufp->fullBit(oldp+4767,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [3U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4768,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [3U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [4U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [5U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4769,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] >> 3U))));
    bufp->fullBit(oldp+4770,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [4U] >> 3U))));
    bufp->fullBit(oldp+4771,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [5U] >> 3U))));
    bufp->fullBit(oldp+4772,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [3U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4773,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [3U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [4U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [5U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4774,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] >> 4U))));
    bufp->fullBit(oldp+4775,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [4U] >> 4U))));
    bufp->fullBit(oldp+4776,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [5U] >> 4U))));
    bufp->fullBit(oldp+4777,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [3U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [4U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [4U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [3U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [5U])) 
                                    >> 4U))));
    bufp->fullBit(oldp+4778,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [3U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [4U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [5U])) 
                                    >> 4U))));
    bufp->fullCData(oldp+4779,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0]),5);
    bufp->fullCData(oldp+4780,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1]),5);
    bufp->fullCData(oldp+4781,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2]),5);
    bufp->fullCData(oldp+4782,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3]),5);
    bufp->fullCData(oldp+4783,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),5);
    bufp->fullCData(oldp+4784,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),5);
    bufp->fullCData(oldp+4785,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2]),5);
    bufp->fullCData(oldp+4786,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [1U]),5);
    bufp->fullCData(oldp+4787,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [2U]),5);
    bufp->fullCData(oldp+4788,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [3U]),5);
    bufp->fullCData(oldp+4789,((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [1U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [2U] ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [3U]))),5);
    bufp->fullCData(oldp+4790,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                      ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [1U] 
                                                        & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [2U]) 
                                                       | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [2U] 
                                                           | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [1U]) 
                                                          & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [3U])), 1U))),5);
    bufp->fullCData(oldp+4791,(((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [1U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [2U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [2U] | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [1U]) & 
                                          vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [3U]))),5);
    bufp->fullBit(oldp+4792,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [1U])));
    bufp->fullBit(oldp+4793,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [2U])));
    bufp->fullBit(oldp+4794,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [3U])));
    bufp->fullBit(oldp+4795,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [1U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [2U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U] 
                                               | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U]) 
                                              & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [3U])))));
    bufp->fullBit(oldp+4796,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [2U] ^ 
                                            vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [3U])))));
    bufp->fullBit(oldp+4797,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] >> 1U))));
    bufp->fullBit(oldp+4798,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+4799,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] >> 1U))));
    bufp->fullBit(oldp+4800,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [2U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [3U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4801,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [1U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [3U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4802,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] >> 2U))));
    bufp->fullBit(oldp+4803,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 2U))));
    bufp->fullBit(oldp+4804,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] >> 2U))));
    bufp->fullBit(oldp+4805,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [2U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [3U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4806,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [1U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [3U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4807,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] >> 3U))));
    bufp->fullBit(oldp+4808,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 3U))));
    bufp->fullBit(oldp+4809,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] >> 3U))));
    bufp->fullBit(oldp+4810,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [2U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [3U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4811,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [1U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [3U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4812,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] >> 4U))));
    bufp->fullBit(oldp+4813,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 4U))));
    bufp->fullBit(oldp+4814,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [3U] >> 4U))));
    bufp->fullBit(oldp+4815,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [2U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [2U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [3U])) 
                                    >> 4U))));
    bufp->fullBit(oldp+4816,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [1U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [3U])) 
                                    >> 4U))));
    bufp->fullCData(oldp+4817,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0]),5);
    bufp->fullCData(oldp+4818,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1]),5);
    bufp->fullCData(oldp+4819,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2]),5);
    bufp->fullCData(oldp+4820,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),5);
    bufp->fullCData(oldp+4821,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),5);
    bufp->fullCData(oldp+4822,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [0U]),5);
    bufp->fullCData(oldp+4823,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [1U]),5);
    bufp->fullCData(oldp+4824,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                               [2U]),5);
    bufp->fullCData(oldp+4825,((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [1U] ^ vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                        [2U]))),5);
    bufp->fullCData(oldp+4826,((0x1fU & VL_SHIFTL_III(5,5,32, 
                                                      ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [0U] 
                                                        & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                        [1U]) 
                                                       | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [1U] 
                                                           | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                           [0U]) 
                                                          & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                          [2U])), 1U))),5);
    bufp->fullCData(oldp+4827,(((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                 [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [1U] | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [0U]) & 
                                          vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                          [2U]))),5);
    bufp->fullBit(oldp+4828,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [0U])));
    bufp->fullBit(oldp+4829,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [1U])));
    bufp->fullBit(oldp+4830,((1U & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                              [2U])));
    bufp->fullBit(oldp+4831,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [1U] 
                                               | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [0U]) 
                                              & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [2U])))));
    bufp->fullBit(oldp+4832,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [1U] ^ 
                                            vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [2U])))));
    bufp->fullBit(oldp+4833,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0U] >> 1U))));
    bufp->fullBit(oldp+4834,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] >> 1U))));
    bufp->fullBit(oldp+4835,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 1U))));
    bufp->fullBit(oldp+4836,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4837,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U])) 
                                    >> 1U))));
    bufp->fullBit(oldp+4838,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0U] >> 2U))));
    bufp->fullBit(oldp+4839,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] >> 2U))));
    bufp->fullBit(oldp+4840,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 2U))));
    bufp->fullBit(oldp+4841,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4842,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U])) 
                                    >> 2U))));
    bufp->fullBit(oldp+4843,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0U] >> 3U))));
    bufp->fullBit(oldp+4844,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] >> 3U))));
    bufp->fullBit(oldp+4845,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 3U))));
    bufp->fullBit(oldp+4846,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4847,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U])) 
                                    >> 3U))));
    bufp->fullBit(oldp+4848,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [0U] >> 4U))));
    bufp->fullBit(oldp+4849,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [1U] >> 4U))));
    bufp->fullBit(oldp+4850,((1U & (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                    [2U] >> 4U))));
    bufp->fullBit(oldp+4851,((1U & (((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [0U] & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                      [1U]) | ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [1U] 
                                                | vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                                [0U]) 
                                               & vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                               [2U])) 
                                    >> 4U))));
    bufp->fullBit(oldp+4852,((1U & ((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                     [0U] ^ (vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [1U] ^ 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [2U])) 
                                    >> 4U))));
    bufp->fullBit(oldp+4853,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xbU] 
                                            >> 0x3fU)))));
    bufp->fullQData(oldp+4854,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G[0]),64);
    bufp->fullQData(oldp+4856,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G[1]),64);
    bufp->fullQData(oldp+4858,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G[2]),64);
    bufp->fullQData(oldp+4860,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G[3]),64);
    bufp->fullQData(oldp+4862,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G[4]),64);
    bufp->fullQData(oldp+4864,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G[5]),64);
    bufp->fullQData(oldp+4866,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G[6]),64);
    bufp->fullQData(oldp+4868,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G[7]),64);
    bufp->fullQData(oldp+4870,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G[8]),64);
    bufp->fullQData(oldp+4872,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G[9]),64);
    bufp->fullQData(oldp+4874,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G[10]),64);
    bufp->fullQData(oldp+4876,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G[11]),64);
    bufp->fullQData(oldp+4878,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                               [0xbU]),64);
    bufp->fullQData(oldp+4880,(VL_SHIFTL_QQI(64,64,32, 
                                             vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                             [0xbU], 1U)),64);
    bufp->fullBit(oldp+4882,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0xaU)))));
    bufp->fullBit(oldp+4883,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0xbU)))));
    bufp->fullBit(oldp+4884,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0xcU)))));
    bufp->fullBit(oldp+4885,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0xdU)))));
    bufp->fullBit(oldp+4886,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0xeU)))));
    bufp->fullBit(oldp+4887,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0xfU)))));
    bufp->fullBit(oldp+4888,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x10U)))));
    bufp->fullBit(oldp+4889,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x11U)))));
    bufp->fullBit(oldp+4890,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x12U)))));
    bufp->fullBit(oldp+4891,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x13U)))));
    bufp->fullBit(oldp+4892,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                           [0U]))));
    bufp->fullBit(oldp+4893,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 1U)))));
    bufp->fullBit(oldp+4894,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x14U)))));
    bufp->fullBit(oldp+4895,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x15U)))));
    bufp->fullBit(oldp+4896,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x16U)))));
    bufp->fullBit(oldp+4897,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x17U)))));
    bufp->fullBit(oldp+4898,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x18U)))));
    bufp->fullBit(oldp+4899,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x19U)))));
    bufp->fullBit(oldp+4900,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x1aU)))));
    bufp->fullBit(oldp+4901,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x1bU)))));
    bufp->fullBit(oldp+4902,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x1cU)))));
    bufp->fullBit(oldp+4903,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x1dU)))));
    bufp->fullBit(oldp+4904,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x1eU)))));
    bufp->fullBit(oldp+4905,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x1fU)))));
    bufp->fullBit(oldp+4906,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x20U)))));
    bufp->fullBit(oldp+4907,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x21U)))));
    bufp->fullBit(oldp+4908,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x22U)))));
    bufp->fullBit(oldp+4909,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x23U)))));
    bufp->fullBit(oldp+4910,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x24U)))));
    bufp->fullBit(oldp+4911,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x25U)))));
    bufp->fullBit(oldp+4912,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x26U)))));
    bufp->fullBit(oldp+4913,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x27U)))));
    bufp->fullBit(oldp+4914,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 2U)))));
    bufp->fullBit(oldp+4915,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 3U)))));
    bufp->fullBit(oldp+4916,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x28U)))));
    bufp->fullBit(oldp+4917,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x29U)))));
    bufp->fullBit(oldp+4918,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x2aU)))));
    bufp->fullBit(oldp+4919,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x2bU)))));
    bufp->fullBit(oldp+4920,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x2cU)))));
    bufp->fullBit(oldp+4921,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x2dU)))));
    bufp->fullBit(oldp+4922,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x2eU)))));
    bufp->fullBit(oldp+4923,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x2fU)))));
    bufp->fullBit(oldp+4924,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x30U)))));
    bufp->fullBit(oldp+4925,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x31U)))));
    bufp->fullBit(oldp+4926,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x32U)))));
    bufp->fullBit(oldp+4927,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x33U)))));
    bufp->fullBit(oldp+4928,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x34U)))));
    bufp->fullBit(oldp+4929,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x35U)))));
    bufp->fullBit(oldp+4930,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x36U)))));
    bufp->fullBit(oldp+4931,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x37U)))));
    bufp->fullBit(oldp+4932,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x38U)))));
    bufp->fullBit(oldp+4933,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x39U)))));
    bufp->fullBit(oldp+4934,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x3aU)))));
    bufp->fullBit(oldp+4935,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x3bU)))));
    bufp->fullBit(oldp+4936,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 4U)))));
    bufp->fullBit(oldp+4937,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 5U)))));
    bufp->fullBit(oldp+4938,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x3cU)))));
    bufp->fullBit(oldp+4939,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x3dU)))));
    bufp->fullBit(oldp+4940,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x3eU)))));
    bufp->fullBit(oldp+4941,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 0x3fU)))));
    bufp->fullBit(oldp+4942,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 6U)))));
    bufp->fullBit(oldp+4943,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 7U)))));
    bufp->fullBit(oldp+4944,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 8U)))));
    bufp->fullBit(oldp+4945,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0U] >> 9U)))));
    bufp->fullBit(oldp+4946,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 9U)))));
    bufp->fullBit(oldp+4947,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0xbU)))));
    bufp->fullBit(oldp+4948,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0xdU)))));
    bufp->fullBit(oldp+4949,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0xfU)))));
    bufp->fullBit(oldp+4950,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x11U)))));
    bufp->fullBit(oldp+4951,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x13U)))));
    bufp->fullBit(oldp+4952,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x15U)))));
    bufp->fullBit(oldp+4953,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x17U)))));
    bufp->fullBit(oldp+4954,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x19U)))));
    bufp->fullBit(oldp+4955,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x1bU)))));
    bufp->fullBit(oldp+4956,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x1dU)))));
    bufp->fullBit(oldp+4957,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x1fU)))));
    bufp->fullBit(oldp+4958,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x21U)))));
    bufp->fullBit(oldp+4959,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x23U)))));
    bufp->fullBit(oldp+4960,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x25U)))));
    bufp->fullBit(oldp+4961,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x27U)))));
    bufp->fullBit(oldp+4962,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 1U)))));
    bufp->fullBit(oldp+4963,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 3U)))));
    bufp->fullBit(oldp+4964,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x29U)))));
    bufp->fullBit(oldp+4965,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x2bU)))));
    bufp->fullBit(oldp+4966,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x2dU)))));
    bufp->fullBit(oldp+4967,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x2fU)))));
    bufp->fullBit(oldp+4968,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x31U)))));
    bufp->fullBit(oldp+4969,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x33U)))));
    bufp->fullBit(oldp+4970,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x35U)))));
    bufp->fullBit(oldp+4971,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x37U)))));
    bufp->fullBit(oldp+4972,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x39U)))));
    bufp->fullBit(oldp+4973,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x3bU)))));
    bufp->fullBit(oldp+4974,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x3dU)))));
    bufp->fullBit(oldp+4975,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 0x3fU)))));
    bufp->fullBit(oldp+4976,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 5U)))));
    bufp->fullBit(oldp+4977,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [1U] >> 7U)))));
    bufp->fullBit(oldp+4978,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [2U] >> 0xbU)))));
    bufp->fullBit(oldp+4979,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [2U] >> 0xfU)))));
    bufp->fullBit(oldp+4980,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [2U] >> 0x13U)))));
    bufp->fullBit(oldp+4981,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [2U] >> 0x17U)))));
    bufp->fullBit(oldp+4982,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [2U] >> 0x1bU)))));
    bufp->fullBit(oldp+4983,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [2U] >> 0x1fU)))));
    bufp->fullBit(oldp+4984,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [2U] >> 0x23U)))));
    bufp->fullBit(oldp+4985,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [2U] >> 0x27U)))));
    bufp->fullBit(oldp+4986,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [2U] >> 0x2bU)))));
    bufp->fullBit(oldp+4987,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [2U] >> 0x2fU)))));
    bufp->fullBit(oldp+4988,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [2U] >> 0x33U)))));
    bufp->fullBit(oldp+4989,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [2U] >> 0x37U)))));
    bufp->fullBit(oldp+4990,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [2U] >> 0x3bU)))));
    bufp->fullBit(oldp+4991,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [2U] >> 0x3fU)))));
    bufp->fullBit(oldp+4992,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [2U] >> 3U)))));
    bufp->fullBit(oldp+4993,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [2U] >> 7U)))));
    bufp->fullBit(oldp+4994,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [3U] >> 7U)))));
    bufp->fullBit(oldp+4995,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [3U] >> 0xfU)))));
    bufp->fullBit(oldp+4996,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [3U] >> 0x17U)))));
    bufp->fullBit(oldp+4997,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [3U] >> 0x1fU)))));
    bufp->fullBit(oldp+4998,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [3U] >> 0x27U)))));
    bufp->fullBit(oldp+4999,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [3U] >> 0x2fU)))));
    bufp->fullBit(oldp+5000,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [3U] >> 0x37U)))));
    bufp->fullBit(oldp+5001,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [3U] >> 0x3fU)))));
    bufp->fullBit(oldp+5002,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [4U] >> 0xfU)))));
    bufp->fullBit(oldp+5003,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [4U] >> 0x1fU)))));
    bufp->fullBit(oldp+5004,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [4U] >> 0x2fU)))));
    bufp->fullBit(oldp+5005,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [4U] >> 0x3fU)))));
    bufp->fullBit(oldp+5006,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [5U] >> 0x1fU)))));
    bufp->fullBit(oldp+5007,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [5U] >> 0x3fU)))));
    bufp->fullBit(oldp+5008,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0xbU)))));
    bufp->fullBit(oldp+5009,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0xdU)))));
    bufp->fullBit(oldp+5010,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0xfU)))));
    bufp->fullBit(oldp+5011,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x11U)))));
    bufp->fullBit(oldp+5012,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x13U)))));
    bufp->fullBit(oldp+5013,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x15U)))));
    bufp->fullBit(oldp+5014,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x17U)))));
    bufp->fullBit(oldp+5015,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x19U)))));
    bufp->fullBit(oldp+5016,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x1bU)))));
    bufp->fullBit(oldp+5017,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x1dU)))));
    bufp->fullBit(oldp+5018,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x1fU)))));
    bufp->fullBit(oldp+5019,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x21U)))));
    bufp->fullBit(oldp+5020,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x23U)))));
    bufp->fullBit(oldp+5021,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x25U)))));
    bufp->fullBit(oldp+5022,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x27U)))));
    bufp->fullBit(oldp+5023,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x29U)))));
    bufp->fullBit(oldp+5024,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x2bU)))));
    bufp->fullBit(oldp+5025,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x2dU)))));
    bufp->fullBit(oldp+5026,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x2fU)))));
    bufp->fullBit(oldp+5027,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x31U)))));
    bufp->fullBit(oldp+5028,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x33U)))));
    bufp->fullBit(oldp+5029,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x35U)))));
    bufp->fullBit(oldp+5030,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x37U)))));
    bufp->fullBit(oldp+5031,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x39U)))));
    bufp->fullBit(oldp+5032,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 3U)))));
    bufp->fullBit(oldp+5033,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 5U)))));
    bufp->fullBit(oldp+5034,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x3bU)))));
    bufp->fullBit(oldp+5035,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 0x3dU)))));
    bufp->fullBit(oldp+5036,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 7U)))));
    bufp->fullBit(oldp+5037,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [9U] >> 9U)))));
    bufp->fullBit(oldp+5038,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 9U)))));
    bufp->fullBit(oldp+5039,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+5040,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+5041,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+5042,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+5043,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+5044,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+5045,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+5046,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+5047,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+5048,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+5049,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+5050,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+5051,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+5052,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+5053,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+5054,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+5055,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+5056,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+5057,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+5058,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 1U)))));
    bufp->fullBit(oldp+5059,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 2U)))));
    bufp->fullBit(oldp+5060,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+5061,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+5062,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+5063,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+5064,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+5065,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+5066,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+5067,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+5068,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+5069,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+5070,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+5071,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+5072,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+5073,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+5074,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+5075,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+5076,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x2dU)))));
    bufp->fullBit(oldp+5077,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x2eU)))));
    bufp->fullBit(oldp+5078,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x2fU)))));
    bufp->fullBit(oldp+5079,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x30U)))));
    bufp->fullBit(oldp+5080,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 3U)))));
    bufp->fullBit(oldp+5081,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 4U)))));
    bufp->fullBit(oldp+5082,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x31U)))));
    bufp->fullBit(oldp+5083,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x32U)))));
    bufp->fullBit(oldp+5084,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x33U)))));
    bufp->fullBit(oldp+5085,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x34U)))));
    bufp->fullBit(oldp+5086,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x35U)))));
    bufp->fullBit(oldp+5087,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x36U)))));
    bufp->fullBit(oldp+5088,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x37U)))));
    bufp->fullBit(oldp+5089,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x38U)))));
    bufp->fullBit(oldp+5090,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x39U)))));
    bufp->fullBit(oldp+5091,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x3aU)))));
    bufp->fullBit(oldp+5092,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x3bU)))));
    bufp->fullBit(oldp+5093,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x3cU)))));
    bufp->fullBit(oldp+5094,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x3dU)))));
    bufp->fullBit(oldp+5095,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 0x3eU)))));
    bufp->fullBit(oldp+5096,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 5U)))));
    bufp->fullBit(oldp+5097,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 6U)))));
    bufp->fullBit(oldp+5098,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 7U)))));
    bufp->fullBit(oldp+5099,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [0xaU] 
                                            >> 8U)))));
    bufp->fullBit(oldp+5100,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [6U] >> 0x1fU)))));
    bufp->fullBit(oldp+5101,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [6U] >> 0x2fU)))));
    bufp->fullBit(oldp+5102,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [7U] >> 0xfU)))));
    bufp->fullBit(oldp+5103,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [7U] >> 0x17U)))));
    bufp->fullBit(oldp+5104,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [7U] >> 0x1fU)))));
    bufp->fullBit(oldp+5105,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [7U] >> 0x27U)))));
    bufp->fullBit(oldp+5106,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [7U] >> 0x2fU)))));
    bufp->fullBit(oldp+5107,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [7U] >> 0x37U)))));
    bufp->fullBit(oldp+5108,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 7U)))));
    bufp->fullBit(oldp+5109,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0xbU)))));
    bufp->fullBit(oldp+5110,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0xfU)))));
    bufp->fullBit(oldp+5111,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0x13U)))));
    bufp->fullBit(oldp+5112,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0x17U)))));
    bufp->fullBit(oldp+5113,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0x1bU)))));
    bufp->fullBit(oldp+5114,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0x1fU)))));
    bufp->fullBit(oldp+5115,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0x23U)))));
    bufp->fullBit(oldp+5116,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0x27U)))));
    bufp->fullBit(oldp+5117,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0x2bU)))));
    bufp->fullBit(oldp+5118,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0x2fU)))));
    bufp->fullBit(oldp+5119,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0x33U)))));
    bufp->fullBit(oldp+5120,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0x37U)))));
    bufp->fullBit(oldp+5121,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_brent_kung_adder_nbit__DOT__G
                                            [8U] >> 0x3bU)))));
    bufp->fullCData(oldp+5122,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_sum[0]),5);
    bufp->fullCData(oldp+5123,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__neg_sum[1]),5);
    bufp->fullQData(oldp+5124,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg[0]),64);
    bufp->fullQData(oldp+5126,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__op_neg[1]),64);
    bufp->fullBit(oldp+5128,((1U & ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__valid_flag) 
                                    >> 1U))));
    bufp->fullCData(oldp+5129,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__valid_flag),2);
    bufp->fullQData(oldp+5130,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[0]),64);
    bufp->fullQData(oldp+5132,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[1]),64);
    bufp->fullQData(oldp+5134,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[2]),64);
    bufp->fullQData(oldp+5136,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[3]),64);
    bufp->fullQData(oldp+5138,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[4]),64);
    bufp->fullQData(oldp+5140,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[5]),64);
    bufp->fullQData(oldp+5142,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[6]),64);
    bufp->fullQData(oldp+5144,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[7]),64);
    bufp->fullQData(oldp+5146,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[8]),64);
    bufp->fullQData(oldp+5148,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[9]),64);
    bufp->fullQData(oldp+5150,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[10]),64);
    bufp->fullQData(oldp+5152,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[11]),64);
    bufp->fullQData(oldp+5154,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[12]),64);
    bufp->fullQData(oldp+5156,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[13]),64);
    bufp->fullQData(oldp+5158,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[14]),64);
    bufp->fullQData(oldp+5160,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[15]),64);
    bufp->fullQData(oldp+5162,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[16]),64);
    bufp->fullQData(oldp+5164,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[17]),64);
    bufp->fullQData(oldp+5166,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg[18]),64);
    bufp->fullQData(oldp+5168,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_adder_reg[0]),64);
    bufp->fullQData(oldp+5170,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_adder_reg[1]),64);
    bufp->fullIData(oldp+5172,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__OP_ADDER__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+5173,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__OP_GENERATE__DOT__unnamedblk1__DOT__i),32);
    bufp->fullQData(oldp+5174,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_adder_reg
                               [0U]),64);
    bufp->fullQData(oldp+5176,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_adder_reg
                               [1U]),64);
    bufp->fullQData(oldp+5178,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0]),64);
    bufp->fullQData(oldp+5180,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1]),64);
    bufp->fullQData(oldp+5182,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2]),64);
    bufp->fullQData(oldp+5184,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3]),64);
    bufp->fullQData(oldp+5186,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[4]),64);
    bufp->fullQData(oldp+5188,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[5]),64);
    bufp->fullQData(oldp+5190,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[6]),64);
    bufp->fullQData(oldp+5192,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[7]),64);
    bufp->fullQData(oldp+5194,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[8]),64);
    bufp->fullQData(oldp+5196,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[9]),64);
    bufp->fullQData(oldp+5198,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[10]),64);
    bufp->fullQData(oldp+5200,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[11]),64);
    bufp->fullQData(oldp+5202,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[12]),64);
    bufp->fullQData(oldp+5204,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                               [1U]),64);
    bufp->fullQData(oldp+5206,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                               [2U]),64);
    bufp->fullQData(oldp+5208,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                               [3U]),64);
    bufp->fullQData(oldp+5210,(vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit.out_op1),64);
    bufp->fullQData(oldp+5212,(VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U)),64);
    bufp->fullQData(oldp+5214,(vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__1__KET____DOT__u_op_3_to_2_nbit.__PVT__cout),64);
    bufp->fullBit(oldp+5216,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                           [1U]))));
    bufp->fullBit(oldp+5217,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                           [2U]))));
    bufp->fullBit(oldp+5218,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                           [3U]))));
    bufp->fullBit(oldp+5219,((1U & (((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U]) 
                                     & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                               [2U])) 
                                    | (((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U]) 
                                        | (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [1U])) 
                                       & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [3U]))))));
    bufp->fullBit(oldp+5220,((1U & ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U]) ^ 
                                    ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [2U]) 
                                     ^ (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                               [3U]))))));
    bufp->fullBit(oldp+5221,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0xaU)))));
    bufp->fullBit(oldp+5222,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0xaU)))));
    bufp->fullBit(oldp+5223,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0xaU)))));
    bufp->fullBit(oldp+5224,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0xaU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0xaU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0xaU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0xaU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+5225,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0xaU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0xaU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+5226,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0xbU)))));
    bufp->fullBit(oldp+5227,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0xbU)))));
    bufp->fullBit(oldp+5228,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0xbU)))));
    bufp->fullBit(oldp+5229,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0xbU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0xbU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0xbU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0xbU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+5230,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0xbU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0xbU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+5231,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0xcU)))));
    bufp->fullBit(oldp+5232,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0xcU)))));
    bufp->fullBit(oldp+5233,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0xcU)))));
    bufp->fullBit(oldp+5234,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0xcU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0xcU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0xcU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0xcU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+5235,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0xcU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0xcU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+5236,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0xdU)))));
    bufp->fullBit(oldp+5237,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0xdU)))));
    bufp->fullBit(oldp+5238,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0xdU)))));
    bufp->fullBit(oldp+5239,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0xdU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0xdU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0xdU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0xdU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+5240,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0xdU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0xdU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+5241,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0xeU)))));
    bufp->fullBit(oldp+5242,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0xeU)))));
    bufp->fullBit(oldp+5243,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0xeU)))));
    bufp->fullBit(oldp+5244,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0xeU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0xeU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0xeU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0xeU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+5245,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0xeU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0xeU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+5246,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0xfU)))));
    bufp->fullBit(oldp+5247,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0xfU)))));
    bufp->fullBit(oldp+5248,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0xfU)))));
    bufp->fullBit(oldp+5249,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0xfU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0xfU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0xfU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0xfU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+5250,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0xfU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0xfU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+5251,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x10U)))));
    bufp->fullBit(oldp+5252,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x10U)))));
    bufp->fullBit(oldp+5253,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x10U)))));
    bufp->fullBit(oldp+5254,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x10U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x10U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x10U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x10U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+5255,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x10U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x10U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+5256,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x11U)))));
    bufp->fullBit(oldp+5257,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x11U)))));
    bufp->fullBit(oldp+5258,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x11U)))));
    bufp->fullBit(oldp+5259,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x11U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x11U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x11U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x11U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+5260,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x11U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x11U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+5261,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x12U)))));
    bufp->fullBit(oldp+5262,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x12U)))));
    bufp->fullBit(oldp+5263,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x12U)))));
    bufp->fullBit(oldp+5264,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x12U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x12U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x12U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x12U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+5265,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x12U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x12U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+5266,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x13U)))));
    bufp->fullBit(oldp+5267,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x13U)))));
    bufp->fullBit(oldp+5268,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x13U)))));
    bufp->fullBit(oldp+5269,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x13U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x13U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x13U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x13U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+5270,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x13U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x13U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+5271,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 1U)))));
    bufp->fullBit(oldp+5272,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 1U)))));
    bufp->fullBit(oldp+5273,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 1U)))));
    bufp->fullBit(oldp+5274,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 1U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 1U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 1U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 1U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+5275,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 1U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 1U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+5276,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x14U)))));
    bufp->fullBit(oldp+5277,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x14U)))));
    bufp->fullBit(oldp+5278,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x14U)))));
    bufp->fullBit(oldp+5279,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x14U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x14U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x14U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x14U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+5280,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x14U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x14U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+5281,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x15U)))));
    bufp->fullBit(oldp+5282,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x15U)))));
    bufp->fullBit(oldp+5283,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x15U)))));
    bufp->fullBit(oldp+5284,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x15U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x15U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x15U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x15U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+5285,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x15U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x15U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+5286,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x16U)))));
    bufp->fullBit(oldp+5287,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x16U)))));
    bufp->fullBit(oldp+5288,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x16U)))));
    bufp->fullBit(oldp+5289,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x16U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x16U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x16U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x16U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+5290,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x16U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x16U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+5291,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x17U)))));
    bufp->fullBit(oldp+5292,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x17U)))));
    bufp->fullBit(oldp+5293,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x17U)))));
    bufp->fullBit(oldp+5294,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x17U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x17U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x17U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x17U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+5295,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x17U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x17U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+5296,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x18U)))));
    bufp->fullBit(oldp+5297,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x18U)))));
    bufp->fullBit(oldp+5298,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x18U)))));
    bufp->fullBit(oldp+5299,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x18U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x18U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x18U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x18U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+5300,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x18U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x18U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+5301,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x19U)))));
    bufp->fullBit(oldp+5302,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x19U)))));
    bufp->fullBit(oldp+5303,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x19U)))));
    bufp->fullBit(oldp+5304,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x19U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x19U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x19U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x19U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+5305,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x19U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x19U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+5306,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x1aU)))));
    bufp->fullBit(oldp+5307,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x1aU)))));
    bufp->fullBit(oldp+5308,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x1aU)))));
    bufp->fullBit(oldp+5309,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x1aU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x1aU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x1aU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x1aU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+5310,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x1aU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x1aU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+5311,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x1bU)))));
    bufp->fullBit(oldp+5312,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x1bU)))));
    bufp->fullBit(oldp+5313,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x1bU)))));
    bufp->fullBit(oldp+5314,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x1bU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x1bU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x1bU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x1bU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+5315,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x1bU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x1bU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+5316,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x1cU)))));
    bufp->fullBit(oldp+5317,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x1cU)))));
    bufp->fullBit(oldp+5318,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x1cU)))));
    bufp->fullBit(oldp+5319,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x1cU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x1cU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x1cU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x1cU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+5320,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x1cU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x1cU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+5321,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x1dU)))));
    bufp->fullBit(oldp+5322,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x1dU)))));
    bufp->fullBit(oldp+5323,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x1dU)))));
    bufp->fullBit(oldp+5324,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x1dU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x1dU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x1dU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x1dU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+5325,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x1dU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x1dU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+5326,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 2U)))));
    bufp->fullBit(oldp+5327,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 2U)))));
    bufp->fullBit(oldp+5328,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 2U)))));
    bufp->fullBit(oldp+5329,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 2U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 2U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 2U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 2U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+5330,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 2U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 2U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+5331,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x1eU)))));
    bufp->fullBit(oldp+5332,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x1eU)))));
    bufp->fullBit(oldp+5333,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x1eU)))));
    bufp->fullBit(oldp+5334,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x1eU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x1eU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x1eU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x1eU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+5335,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x1eU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x1eU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+5336,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x1fU)))));
    bufp->fullBit(oldp+5337,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x1fU)))));
    bufp->fullBit(oldp+5338,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x1fU)))));
    bufp->fullBit(oldp+5339,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x1fU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x1fU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x1fU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x1fU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+5340,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x1fU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x1fU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+5341,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x20U)))));
    bufp->fullBit(oldp+5342,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x20U)))));
    bufp->fullBit(oldp+5343,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x20U)))));
    bufp->fullBit(oldp+5344,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x20U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x20U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x20U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x20U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+5345,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x20U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x20U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+5346,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x21U)))));
    bufp->fullBit(oldp+5347,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x21U)))));
    bufp->fullBit(oldp+5348,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x21U)))));
    bufp->fullBit(oldp+5349,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x21U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x21U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x21U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x21U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+5350,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x21U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x21U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+5351,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x22U)))));
    bufp->fullBit(oldp+5352,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x22U)))));
    bufp->fullBit(oldp+5353,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x22U)))));
    bufp->fullBit(oldp+5354,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x22U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x22U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x22U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x22U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+5355,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x22U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x22U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+5356,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x23U)))));
    bufp->fullBit(oldp+5357,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x23U)))));
    bufp->fullBit(oldp+5358,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x23U)))));
    bufp->fullBit(oldp+5359,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x23U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x23U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x23U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x23U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+5360,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x23U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x23U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+5361,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x24U)))));
    bufp->fullBit(oldp+5362,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x24U)))));
    bufp->fullBit(oldp+5363,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x24U)))));
    bufp->fullBit(oldp+5364,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x24U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x24U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x24U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x24U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+5365,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x24U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x24U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+5366,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x25U)))));
    bufp->fullBit(oldp+5367,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x25U)))));
    bufp->fullBit(oldp+5368,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x25U)))));
    bufp->fullBit(oldp+5369,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x25U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x25U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x25U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x25U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+5370,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x25U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x25U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+5371,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x26U)))));
    bufp->fullBit(oldp+5372,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x26U)))));
    bufp->fullBit(oldp+5373,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x26U)))));
    bufp->fullBit(oldp+5374,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x26U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x26U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x26U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x26U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+5375,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x26U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x26U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+5376,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x27U)))));
    bufp->fullBit(oldp+5377,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x27U)))));
    bufp->fullBit(oldp+5378,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x27U)))));
    bufp->fullBit(oldp+5379,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x27U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x27U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x27U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x27U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+5380,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x27U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x27U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+5381,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 3U)))));
    bufp->fullBit(oldp+5382,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 3U)))));
    bufp->fullBit(oldp+5383,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 3U)))));
    bufp->fullBit(oldp+5384,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 3U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 3U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 3U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 3U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+5385,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 3U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+5386,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x28U)))));
    bufp->fullBit(oldp+5387,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x28U)))));
    bufp->fullBit(oldp+5388,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x28U)))));
    bufp->fullBit(oldp+5389,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x28U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x28U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x28U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x28U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+5390,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x28U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x28U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+5391,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x29U)))));
    bufp->fullBit(oldp+5392,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x29U)))));
    bufp->fullBit(oldp+5393,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x29U)))));
    bufp->fullBit(oldp+5394,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x29U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x29U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x29U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x29U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+5395,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x29U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x29U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+5396,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x2aU)))));
    bufp->fullBit(oldp+5397,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x2aU)))));
    bufp->fullBit(oldp+5398,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x2aU)))));
    bufp->fullBit(oldp+5399,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x2aU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x2aU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x2aU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x2aU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+5400,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x2aU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x2aU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+5401,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x2bU)))));
    bufp->fullBit(oldp+5402,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x2bU)))));
    bufp->fullBit(oldp+5403,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x2bU)))));
    bufp->fullBit(oldp+5404,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x2bU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x2bU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x2bU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x2bU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+5405,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x2bU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x2bU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+5406,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x2cU)))));
    bufp->fullBit(oldp+5407,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x2cU)))));
    bufp->fullBit(oldp+5408,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x2cU)))));
    bufp->fullBit(oldp+5409,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x2cU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x2cU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x2cU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x2cU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+5410,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x2cU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x2cU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+5411,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x2dU)))));
    bufp->fullBit(oldp+5412,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x2dU)))));
    bufp->fullBit(oldp+5413,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x2dU)))));
    bufp->fullBit(oldp+5414,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x2dU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x2dU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x2dU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x2dU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+5415,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x2dU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x2dU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+5416,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x2eU)))));
    bufp->fullBit(oldp+5417,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x2eU)))));
    bufp->fullBit(oldp+5418,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x2eU)))));
    bufp->fullBit(oldp+5419,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x2eU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x2eU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x2eU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x2eU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+5420,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x2eU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x2eU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+5421,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x2fU)))));
    bufp->fullBit(oldp+5422,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x2fU)))));
    bufp->fullBit(oldp+5423,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x2fU)))));
    bufp->fullBit(oldp+5424,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x2fU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x2fU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x2fU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x2fU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+5425,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x2fU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x2fU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+5426,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x30U)))));
    bufp->fullBit(oldp+5427,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x30U)))));
    bufp->fullBit(oldp+5428,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x30U)))));
    bufp->fullBit(oldp+5429,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x30U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x30U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x30U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x30U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+5430,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x30U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x30U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+5431,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x31U)))));
    bufp->fullBit(oldp+5432,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x31U)))));
    bufp->fullBit(oldp+5433,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x31U)))));
    bufp->fullBit(oldp+5434,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x31U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x31U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x31U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x31U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+5435,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x31U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x31U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+5436,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 4U)))));
    bufp->fullBit(oldp+5437,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 4U)))));
    bufp->fullBit(oldp+5438,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 4U)))));
    bufp->fullBit(oldp+5439,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 4U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 4U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 4U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 4U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+5440,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 4U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 4U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+5441,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x32U)))));
    bufp->fullBit(oldp+5442,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x32U)))));
    bufp->fullBit(oldp+5443,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x32U)))));
    bufp->fullBit(oldp+5444,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x32U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x32U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x32U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x32U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+5445,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x32U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x32U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+5446,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x33U)))));
    bufp->fullBit(oldp+5447,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x33U)))));
    bufp->fullBit(oldp+5448,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x33U)))));
    bufp->fullBit(oldp+5449,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x33U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x33U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x33U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x33U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+5450,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x33U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x33U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+5451,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x34U)))));
    bufp->fullBit(oldp+5452,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x34U)))));
    bufp->fullBit(oldp+5453,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x34U)))));
    bufp->fullBit(oldp+5454,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x34U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x34U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x34U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x34U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+5455,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x34U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x34U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+5456,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x35U)))));
    bufp->fullBit(oldp+5457,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x35U)))));
    bufp->fullBit(oldp+5458,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x35U)))));
    bufp->fullBit(oldp+5459,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x35U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x35U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x35U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x35U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+5460,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x35U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x35U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+5461,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x36U)))));
    bufp->fullBit(oldp+5462,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x36U)))));
    bufp->fullBit(oldp+5463,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x36U)))));
    bufp->fullBit(oldp+5464,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x36U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x36U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x36U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x36U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+5465,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x36U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x36U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+5466,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x37U)))));
    bufp->fullBit(oldp+5467,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x37U)))));
    bufp->fullBit(oldp+5468,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x37U)))));
    bufp->fullBit(oldp+5469,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x37U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x37U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x37U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x37U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+5470,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x37U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x37U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+5471,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x38U)))));
    bufp->fullBit(oldp+5472,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x38U)))));
    bufp->fullBit(oldp+5473,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x38U)))));
    bufp->fullBit(oldp+5474,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x38U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x38U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x38U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x38U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+5475,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x38U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x38U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+5476,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x39U)))));
    bufp->fullBit(oldp+5477,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x39U)))));
    bufp->fullBit(oldp+5478,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x39U)))));
    bufp->fullBit(oldp+5479,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x39U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x39U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x39U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x39U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+5480,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x39U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x39U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+5481,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x3aU)))));
    bufp->fullBit(oldp+5482,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x3aU)))));
    bufp->fullBit(oldp+5483,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x3aU)))));
    bufp->fullBit(oldp+5484,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x3aU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x3aU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x3aU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x3aU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+5485,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x3aU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x3aU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+5486,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x3bU)))));
    bufp->fullBit(oldp+5487,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x3bU)))));
    bufp->fullBit(oldp+5488,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x3bU)))));
    bufp->fullBit(oldp+5489,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x3bU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x3bU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x3bU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x3bU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+5490,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x3bU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x3bU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+5491,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 5U)))));
    bufp->fullBit(oldp+5492,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 5U)))));
    bufp->fullBit(oldp+5493,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 5U)))));
    bufp->fullBit(oldp+5494,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 5U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 5U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 5U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 5U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+5495,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 5U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 5U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+5496,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x3cU)))));
    bufp->fullBit(oldp+5497,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x3cU)))));
    bufp->fullBit(oldp+5498,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x3cU)))));
    bufp->fullBit(oldp+5499,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x3cU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x3cU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x3cU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x3cU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+5500,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x3cU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x3cU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+5501,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x3dU)))));
    bufp->fullBit(oldp+5502,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x3dU)))));
    bufp->fullBit(oldp+5503,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x3dU)))));
    bufp->fullBit(oldp+5504,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x3dU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x3dU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x3dU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x3dU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+5505,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x3dU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x3dU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+5506,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x3eU)))));
    bufp->fullBit(oldp+5507,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x3eU)))));
    bufp->fullBit(oldp+5508,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x3eU)))));
    bufp->fullBit(oldp+5509,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x3eU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x3eU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x3eU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x3eU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x3eU)))))));
    bufp->fullBit(oldp+5510,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x3eU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x3eU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x3eU)))))));
    bufp->fullBit(oldp+5511,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 0x3fU)))));
    bufp->fullBit(oldp+5512,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 0x3fU)))));
    bufp->fullBit(oldp+5513,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 0x3fU)))));
    bufp->fullBit(oldp+5514,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 0x3fU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x3fU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 0x3fU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 0x3fU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+5515,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 0x3fU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 0x3fU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+5516,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 6U)))));
    bufp->fullBit(oldp+5517,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 6U)))));
    bufp->fullBit(oldp+5518,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 6U)))));
    bufp->fullBit(oldp+5519,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 6U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 6U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 6U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 6U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+5520,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 6U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+5521,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 7U)))));
    bufp->fullBit(oldp+5522,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 7U)))));
    bufp->fullBit(oldp+5523,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 7U)))));
    bufp->fullBit(oldp+5524,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 7U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 7U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 7U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 7U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+5525,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 7U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 7U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+5526,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 8U)))));
    bufp->fullBit(oldp+5527,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 8U)))));
    bufp->fullBit(oldp+5528,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 8U)))));
    bufp->fullBit(oldp+5529,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 8U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 8U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 8U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 8U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+5530,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 8U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 8U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+5531,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [1U] >> 9U)))));
    bufp->fullBit(oldp+5532,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [2U] >> 9U)))));
    bufp->fullBit(oldp+5533,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [3U] >> 9U)))));
    bufp->fullBit(oldp+5534,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [1U] 
                                              >> 9U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 9U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [2U] 
                                                 >> 9U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [1U] 
                                                   >> 9U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+5535,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [1U] >> 9U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [2U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [3U] 
                                                  >> 9U)))))));
    bufp->fullQData(oldp+5536,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                               [4U]),64);
    bufp->fullQData(oldp+5538,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                               [5U]),64);
    bufp->fullQData(oldp+5540,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                               [6U]),64);
    bufp->fullQData(oldp+5542,(vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit.out_op1),64);
    bufp->fullQData(oldp+5544,(VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U)),64);
    bufp->fullQData(oldp+5546,(vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__4__KET____DOT__u_op_3_to_2_nbit.__PVT__cout),64);
    bufp->fullBit(oldp+5548,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                           [4U]))));
    bufp->fullBit(oldp+5549,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                           [5U]))));
    bufp->fullBit(oldp+5550,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                           [6U]))));
    bufp->fullBit(oldp+5551,((1U & (((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U]) 
                                     & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                               [5U])) 
                                    | (((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U]) 
                                        | (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [4U])) 
                                       & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [6U]))))));
    bufp->fullBit(oldp+5552,((1U & ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U]) ^ 
                                    ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [5U]) 
                                     ^ (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                               [6U]))))));
    bufp->fullBit(oldp+5553,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0xaU)))));
    bufp->fullBit(oldp+5554,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0xaU)))));
    bufp->fullBit(oldp+5555,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0xaU)))));
    bufp->fullBit(oldp+5556,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0xaU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0xaU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0xaU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0xaU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+5557,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0xaU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0xaU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+5558,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0xbU)))));
    bufp->fullBit(oldp+5559,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0xbU)))));
    bufp->fullBit(oldp+5560,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0xbU)))));
    bufp->fullBit(oldp+5561,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0xbU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0xbU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0xbU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0xbU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+5562,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0xbU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0xbU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+5563,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0xcU)))));
    bufp->fullBit(oldp+5564,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0xcU)))));
    bufp->fullBit(oldp+5565,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0xcU)))));
    bufp->fullBit(oldp+5566,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0xcU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0xcU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0xcU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0xcU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+5567,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0xcU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0xcU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+5568,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0xdU)))));
    bufp->fullBit(oldp+5569,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0xdU)))));
    bufp->fullBit(oldp+5570,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0xdU)))));
    bufp->fullBit(oldp+5571,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0xdU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0xdU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0xdU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0xdU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+5572,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0xdU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0xdU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+5573,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0xeU)))));
    bufp->fullBit(oldp+5574,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0xeU)))));
    bufp->fullBit(oldp+5575,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0xeU)))));
    bufp->fullBit(oldp+5576,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0xeU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0xeU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0xeU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0xeU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+5577,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0xeU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0xeU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+5578,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0xfU)))));
    bufp->fullBit(oldp+5579,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0xfU)))));
    bufp->fullBit(oldp+5580,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0xfU)))));
    bufp->fullBit(oldp+5581,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0xfU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0xfU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0xfU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0xfU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+5582,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0xfU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0xfU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+5583,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x10U)))));
    bufp->fullBit(oldp+5584,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x10U)))));
    bufp->fullBit(oldp+5585,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x10U)))));
    bufp->fullBit(oldp+5586,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x10U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x10U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x10U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x10U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+5587,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x10U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x10U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+5588,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x11U)))));
    bufp->fullBit(oldp+5589,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x11U)))));
    bufp->fullBit(oldp+5590,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x11U)))));
    bufp->fullBit(oldp+5591,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x11U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x11U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x11U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x11U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+5592,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x11U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x11U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+5593,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x12U)))));
    bufp->fullBit(oldp+5594,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x12U)))));
    bufp->fullBit(oldp+5595,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x12U)))));
    bufp->fullBit(oldp+5596,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x12U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x12U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x12U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x12U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+5597,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x12U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x12U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+5598,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x13U)))));
    bufp->fullBit(oldp+5599,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x13U)))));
    bufp->fullBit(oldp+5600,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x13U)))));
    bufp->fullBit(oldp+5601,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x13U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x13U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x13U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x13U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+5602,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x13U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x13U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+5603,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 1U)))));
    bufp->fullBit(oldp+5604,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 1U)))));
    bufp->fullBit(oldp+5605,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 1U)))));
    bufp->fullBit(oldp+5606,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 1U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 1U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 1U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 1U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+5607,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 1U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 1U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+5608,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x14U)))));
    bufp->fullBit(oldp+5609,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x14U)))));
    bufp->fullBit(oldp+5610,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x14U)))));
    bufp->fullBit(oldp+5611,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x14U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x14U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x14U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x14U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+5612,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x14U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x14U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+5613,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x15U)))));
    bufp->fullBit(oldp+5614,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x15U)))));
    bufp->fullBit(oldp+5615,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x15U)))));
    bufp->fullBit(oldp+5616,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x15U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x15U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x15U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x15U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+5617,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x15U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x15U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+5618,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x16U)))));
    bufp->fullBit(oldp+5619,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x16U)))));
    bufp->fullBit(oldp+5620,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x16U)))));
    bufp->fullBit(oldp+5621,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x16U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x16U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x16U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x16U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+5622,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x16U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x16U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+5623,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x17U)))));
    bufp->fullBit(oldp+5624,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x17U)))));
    bufp->fullBit(oldp+5625,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x17U)))));
    bufp->fullBit(oldp+5626,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x17U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x17U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x17U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x17U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+5627,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x17U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x17U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+5628,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x18U)))));
    bufp->fullBit(oldp+5629,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x18U)))));
    bufp->fullBit(oldp+5630,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x18U)))));
    bufp->fullBit(oldp+5631,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x18U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x18U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x18U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x18U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+5632,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x18U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x18U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+5633,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x19U)))));
    bufp->fullBit(oldp+5634,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x19U)))));
    bufp->fullBit(oldp+5635,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x19U)))));
    bufp->fullBit(oldp+5636,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x19U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x19U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x19U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x19U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+5637,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x19U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x19U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+5638,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x1aU)))));
    bufp->fullBit(oldp+5639,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x1aU)))));
    bufp->fullBit(oldp+5640,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x1aU)))));
    bufp->fullBit(oldp+5641,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x1aU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x1aU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x1aU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x1aU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+5642,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x1aU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x1aU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+5643,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x1bU)))));
    bufp->fullBit(oldp+5644,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x1bU)))));
    bufp->fullBit(oldp+5645,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x1bU)))));
    bufp->fullBit(oldp+5646,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x1bU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x1bU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x1bU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x1bU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+5647,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x1bU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x1bU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+5648,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x1cU)))));
    bufp->fullBit(oldp+5649,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x1cU)))));
    bufp->fullBit(oldp+5650,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x1cU)))));
    bufp->fullBit(oldp+5651,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x1cU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x1cU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x1cU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x1cU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+5652,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x1cU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x1cU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+5653,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x1dU)))));
    bufp->fullBit(oldp+5654,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x1dU)))));
    bufp->fullBit(oldp+5655,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x1dU)))));
    bufp->fullBit(oldp+5656,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x1dU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x1dU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x1dU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x1dU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+5657,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x1dU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x1dU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+5658,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 2U)))));
    bufp->fullBit(oldp+5659,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 2U)))));
    bufp->fullBit(oldp+5660,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 2U)))));
    bufp->fullBit(oldp+5661,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 2U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 2U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 2U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 2U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+5662,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 2U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 2U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+5663,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x1eU)))));
    bufp->fullBit(oldp+5664,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x1eU)))));
    bufp->fullBit(oldp+5665,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x1eU)))));
    bufp->fullBit(oldp+5666,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x1eU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x1eU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x1eU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x1eU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+5667,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x1eU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x1eU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+5668,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x1fU)))));
    bufp->fullBit(oldp+5669,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x1fU)))));
    bufp->fullBit(oldp+5670,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x1fU)))));
    bufp->fullBit(oldp+5671,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x1fU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x1fU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x1fU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x1fU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+5672,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x1fU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x1fU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+5673,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x20U)))));
    bufp->fullBit(oldp+5674,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x20U)))));
    bufp->fullBit(oldp+5675,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x20U)))));
    bufp->fullBit(oldp+5676,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x20U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x20U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x20U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x20U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+5677,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x20U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x20U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+5678,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x21U)))));
    bufp->fullBit(oldp+5679,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x21U)))));
    bufp->fullBit(oldp+5680,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x21U)))));
    bufp->fullBit(oldp+5681,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x21U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x21U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x21U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x21U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+5682,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x21U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x21U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+5683,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x22U)))));
    bufp->fullBit(oldp+5684,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x22U)))));
    bufp->fullBit(oldp+5685,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x22U)))));
    bufp->fullBit(oldp+5686,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x22U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x22U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x22U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x22U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+5687,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x22U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x22U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+5688,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x23U)))));
    bufp->fullBit(oldp+5689,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x23U)))));
    bufp->fullBit(oldp+5690,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x23U)))));
    bufp->fullBit(oldp+5691,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x23U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x23U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x23U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x23U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+5692,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x23U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x23U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+5693,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x24U)))));
    bufp->fullBit(oldp+5694,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x24U)))));
    bufp->fullBit(oldp+5695,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x24U)))));
    bufp->fullBit(oldp+5696,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x24U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x24U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x24U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x24U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+5697,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x24U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x24U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+5698,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x25U)))));
    bufp->fullBit(oldp+5699,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x25U)))));
    bufp->fullBit(oldp+5700,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x25U)))));
    bufp->fullBit(oldp+5701,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x25U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x25U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x25U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x25U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+5702,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x25U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x25U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+5703,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x26U)))));
    bufp->fullBit(oldp+5704,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x26U)))));
    bufp->fullBit(oldp+5705,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x26U)))));
    bufp->fullBit(oldp+5706,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x26U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x26U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x26U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x26U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+5707,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x26U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x26U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+5708,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x27U)))));
    bufp->fullBit(oldp+5709,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x27U)))));
    bufp->fullBit(oldp+5710,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x27U)))));
    bufp->fullBit(oldp+5711,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x27U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x27U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x27U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x27U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+5712,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x27U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x27U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+5713,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 3U)))));
    bufp->fullBit(oldp+5714,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 3U)))));
    bufp->fullBit(oldp+5715,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 3U)))));
    bufp->fullBit(oldp+5716,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 3U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 3U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 3U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 3U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+5717,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 3U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 3U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+5718,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x28U)))));
    bufp->fullBit(oldp+5719,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x28U)))));
    bufp->fullBit(oldp+5720,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x28U)))));
    bufp->fullBit(oldp+5721,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x28U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x28U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x28U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x28U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+5722,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x28U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x28U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+5723,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x29U)))));
    bufp->fullBit(oldp+5724,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x29U)))));
    bufp->fullBit(oldp+5725,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x29U)))));
    bufp->fullBit(oldp+5726,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x29U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x29U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x29U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x29U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+5727,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x29U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x29U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+5728,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x2aU)))));
    bufp->fullBit(oldp+5729,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x2aU)))));
    bufp->fullBit(oldp+5730,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x2aU)))));
    bufp->fullBit(oldp+5731,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x2aU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x2aU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x2aU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x2aU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+5732,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x2aU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x2aU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+5733,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x2bU)))));
    bufp->fullBit(oldp+5734,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x2bU)))));
    bufp->fullBit(oldp+5735,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x2bU)))));
    bufp->fullBit(oldp+5736,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x2bU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x2bU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x2bU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x2bU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+5737,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x2bU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x2bU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+5738,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x2cU)))));
    bufp->fullBit(oldp+5739,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x2cU)))));
    bufp->fullBit(oldp+5740,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x2cU)))));
    bufp->fullBit(oldp+5741,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x2cU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x2cU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x2cU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x2cU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+5742,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x2cU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x2cU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+5743,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x2dU)))));
    bufp->fullBit(oldp+5744,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x2dU)))));
    bufp->fullBit(oldp+5745,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x2dU)))));
    bufp->fullBit(oldp+5746,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x2dU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x2dU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x2dU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x2dU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+5747,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x2dU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x2dU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+5748,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x2eU)))));
    bufp->fullBit(oldp+5749,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x2eU)))));
    bufp->fullBit(oldp+5750,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x2eU)))));
    bufp->fullBit(oldp+5751,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x2eU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x2eU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x2eU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x2eU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+5752,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x2eU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x2eU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+5753,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x2fU)))));
    bufp->fullBit(oldp+5754,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x2fU)))));
    bufp->fullBit(oldp+5755,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x2fU)))));
    bufp->fullBit(oldp+5756,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x2fU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x2fU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x2fU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x2fU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+5757,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x2fU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x2fU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+5758,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x30U)))));
    bufp->fullBit(oldp+5759,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x30U)))));
    bufp->fullBit(oldp+5760,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x30U)))));
    bufp->fullBit(oldp+5761,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x30U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x30U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x30U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x30U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+5762,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x30U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x30U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+5763,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x31U)))));
    bufp->fullBit(oldp+5764,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x31U)))));
    bufp->fullBit(oldp+5765,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x31U)))));
    bufp->fullBit(oldp+5766,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x31U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x31U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x31U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x31U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+5767,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x31U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x31U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+5768,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 4U)))));
    bufp->fullBit(oldp+5769,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 4U)))));
    bufp->fullBit(oldp+5770,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 4U)))));
    bufp->fullBit(oldp+5771,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 4U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 4U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 4U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 4U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+5772,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 4U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 4U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+5773,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x32U)))));
    bufp->fullBit(oldp+5774,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x32U)))));
    bufp->fullBit(oldp+5775,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x32U)))));
    bufp->fullBit(oldp+5776,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x32U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x32U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x32U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x32U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+5777,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x32U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x32U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+5778,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x33U)))));
    bufp->fullBit(oldp+5779,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x33U)))));
    bufp->fullBit(oldp+5780,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x33U)))));
    bufp->fullBit(oldp+5781,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x33U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x33U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x33U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x33U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+5782,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x33U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x33U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+5783,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x34U)))));
    bufp->fullBit(oldp+5784,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x34U)))));
    bufp->fullBit(oldp+5785,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x34U)))));
    bufp->fullBit(oldp+5786,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x34U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x34U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x34U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x34U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+5787,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x34U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x34U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+5788,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x35U)))));
    bufp->fullBit(oldp+5789,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x35U)))));
    bufp->fullBit(oldp+5790,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x35U)))));
    bufp->fullBit(oldp+5791,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x35U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x35U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x35U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x35U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+5792,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x35U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x35U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+5793,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x36U)))));
    bufp->fullBit(oldp+5794,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x36U)))));
    bufp->fullBit(oldp+5795,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x36U)))));
    bufp->fullBit(oldp+5796,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x36U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x36U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x36U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x36U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+5797,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x36U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x36U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+5798,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x37U)))));
    bufp->fullBit(oldp+5799,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x37U)))));
    bufp->fullBit(oldp+5800,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x37U)))));
    bufp->fullBit(oldp+5801,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x37U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x37U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x37U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x37U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+5802,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x37U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x37U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+5803,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x38U)))));
    bufp->fullBit(oldp+5804,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x38U)))));
    bufp->fullBit(oldp+5805,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x38U)))));
    bufp->fullBit(oldp+5806,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x38U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x38U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x38U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x38U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+5807,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x38U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x38U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+5808,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x39U)))));
    bufp->fullBit(oldp+5809,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x39U)))));
    bufp->fullBit(oldp+5810,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x39U)))));
    bufp->fullBit(oldp+5811,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x39U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x39U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x39U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x39U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+5812,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x39U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x39U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+5813,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x3aU)))));
    bufp->fullBit(oldp+5814,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x3aU)))));
    bufp->fullBit(oldp+5815,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x3aU)))));
    bufp->fullBit(oldp+5816,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x3aU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x3aU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x3aU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x3aU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+5817,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x3aU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x3aU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+5818,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x3bU)))));
    bufp->fullBit(oldp+5819,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x3bU)))));
    bufp->fullBit(oldp+5820,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x3bU)))));
    bufp->fullBit(oldp+5821,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x3bU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x3bU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x3bU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x3bU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+5822,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x3bU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x3bU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+5823,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 5U)))));
    bufp->fullBit(oldp+5824,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 5U)))));
    bufp->fullBit(oldp+5825,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 5U)))));
    bufp->fullBit(oldp+5826,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 5U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 5U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 5U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 5U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+5827,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 5U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 5U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+5828,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x3cU)))));
    bufp->fullBit(oldp+5829,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x3cU)))));
    bufp->fullBit(oldp+5830,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x3cU)))));
    bufp->fullBit(oldp+5831,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x3cU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x3cU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x3cU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x3cU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+5832,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x3cU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x3cU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+5833,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x3dU)))));
    bufp->fullBit(oldp+5834,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x3dU)))));
    bufp->fullBit(oldp+5835,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x3dU)))));
    bufp->fullBit(oldp+5836,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x3dU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x3dU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x3dU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x3dU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+5837,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x3dU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x3dU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+5838,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x3eU)))));
    bufp->fullBit(oldp+5839,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x3eU)))));
    bufp->fullBit(oldp+5840,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x3eU)))));
    bufp->fullBit(oldp+5841,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x3eU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x3eU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x3eU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x3eU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x3eU)))))));
    bufp->fullBit(oldp+5842,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x3eU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x3eU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x3eU)))))));
    bufp->fullBit(oldp+5843,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 0x3fU)))));
    bufp->fullBit(oldp+5844,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 0x3fU)))));
    bufp->fullBit(oldp+5845,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 0x3fU)))));
    bufp->fullBit(oldp+5846,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 0x3fU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x3fU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 0x3fU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 0x3fU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+5847,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 0x3fU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 0x3fU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+5848,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 6U)))));
    bufp->fullBit(oldp+5849,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 6U)))));
    bufp->fullBit(oldp+5850,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 6U)))));
    bufp->fullBit(oldp+5851,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 6U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 6U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 6U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 6U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+5852,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 6U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 6U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+5853,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 7U)))));
    bufp->fullBit(oldp+5854,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 7U)))));
    bufp->fullBit(oldp+5855,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 7U)))));
    bufp->fullBit(oldp+5856,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 7U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 7U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 7U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 7U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+5857,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 7U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 7U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+5858,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 8U)))));
    bufp->fullBit(oldp+5859,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 8U)))));
    bufp->fullBit(oldp+5860,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 8U)))));
    bufp->fullBit(oldp+5861,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 8U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 8U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 8U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 8U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+5862,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 8U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 8U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+5863,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [4U] >> 9U)))));
    bufp->fullBit(oldp+5864,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [5U] >> 9U)))));
    bufp->fullBit(oldp+5865,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [6U] >> 9U)))));
    bufp->fullBit(oldp+5866,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [4U] 
                                              >> 9U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 9U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [5U] 
                                                 >> 9U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [4U] 
                                                   >> 9U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+5867,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [4U] >> 9U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [5U] 
                                                >> 9U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [6U] 
                                                  >> 9U)))))));
    bufp->fullQData(oldp+5868,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                               [7U]),64);
    bufp->fullQData(oldp+5870,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                               [8U]),64);
    bufp->fullQData(oldp+5872,(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                               [9U]),64);
    bufp->fullQData(oldp+5874,(vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit.out_op1),64);
    bufp->fullQData(oldp+5876,(VL_SHIFTL_QQI(64,64,32, vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit.__PVT__cout, 1U)),64);
    bufp->fullQData(oldp+5878,(vlSymsp->TOP__tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__DOT__genblk1__BRA__7__KET____DOT__u_op_3_to_2_nbit.__PVT__cout),64);
    bufp->fullBit(oldp+5880,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                           [7U]))));
    bufp->fullBit(oldp+5881,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                           [8U]))));
    bufp->fullBit(oldp+5882,((1U & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                           [9U]))));
    bufp->fullBit(oldp+5883,((1U & (((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U]) 
                                     & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                               [8U])) 
                                    | (((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U]) 
                                        | (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [7U])) 
                                       & (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [9U]))))));
    bufp->fullBit(oldp+5884,((1U & ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U]) ^ 
                                    ((IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [8U]) 
                                     ^ (IData)(vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                               [9U]))))));
    bufp->fullBit(oldp+5885,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0xaU)))));
    bufp->fullBit(oldp+5886,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0xaU)))));
    bufp->fullBit(oldp+5887,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0xaU)))));
    bufp->fullBit(oldp+5888,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0xaU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0xaU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0xaU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0xaU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+5889,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0xaU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0xaU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+5890,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0xbU)))));
    bufp->fullBit(oldp+5891,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0xbU)))));
    bufp->fullBit(oldp+5892,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0xbU)))));
    bufp->fullBit(oldp+5893,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0xbU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0xbU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0xbU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0xbU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+5894,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0xbU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0xbU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+5895,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0xcU)))));
    bufp->fullBit(oldp+5896,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0xcU)))));
    bufp->fullBit(oldp+5897,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0xcU)))));
    bufp->fullBit(oldp+5898,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0xcU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0xcU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0xcU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0xcU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+5899,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0xcU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0xcU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+5900,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0xdU)))));
    bufp->fullBit(oldp+5901,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0xdU)))));
    bufp->fullBit(oldp+5902,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0xdU)))));
    bufp->fullBit(oldp+5903,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0xdU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0xdU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0xdU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0xdU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+5904,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0xdU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0xdU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+5905,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0xeU)))));
    bufp->fullBit(oldp+5906,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0xeU)))));
    bufp->fullBit(oldp+5907,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0xeU)))));
    bufp->fullBit(oldp+5908,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0xeU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0xeU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0xeU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0xeU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+5909,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0xeU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0xeU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+5910,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0xfU)))));
    bufp->fullBit(oldp+5911,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0xfU)))));
    bufp->fullBit(oldp+5912,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0xfU)))));
    bufp->fullBit(oldp+5913,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0xfU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0xfU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0xfU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0xfU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+5914,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0xfU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0xfU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+5915,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x10U)))));
    bufp->fullBit(oldp+5916,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x10U)))));
    bufp->fullBit(oldp+5917,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x10U)))));
    bufp->fullBit(oldp+5918,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x10U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x10U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x10U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x10U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+5919,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x10U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x10U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+5920,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x11U)))));
    bufp->fullBit(oldp+5921,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x11U)))));
    bufp->fullBit(oldp+5922,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x11U)))));
    bufp->fullBit(oldp+5923,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x11U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x11U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x11U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x11U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+5924,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x11U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x11U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+5925,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x12U)))));
    bufp->fullBit(oldp+5926,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x12U)))));
    bufp->fullBit(oldp+5927,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x12U)))));
    bufp->fullBit(oldp+5928,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x12U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x12U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x12U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x12U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+5929,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x12U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x12U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+5930,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x13U)))));
    bufp->fullBit(oldp+5931,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x13U)))));
    bufp->fullBit(oldp+5932,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x13U)))));
    bufp->fullBit(oldp+5933,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x13U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x13U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x13U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x13U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+5934,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x13U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x13U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+5935,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 1U)))));
    bufp->fullBit(oldp+5936,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 1U)))));
    bufp->fullBit(oldp+5937,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 1U)))));
    bufp->fullBit(oldp+5938,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 1U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 1U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 1U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 1U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+5939,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 1U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 1U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+5940,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x14U)))));
    bufp->fullBit(oldp+5941,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x14U)))));
    bufp->fullBit(oldp+5942,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x14U)))));
    bufp->fullBit(oldp+5943,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x14U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x14U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x14U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x14U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+5944,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x14U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x14U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+5945,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x15U)))));
    bufp->fullBit(oldp+5946,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x15U)))));
    bufp->fullBit(oldp+5947,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x15U)))));
    bufp->fullBit(oldp+5948,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x15U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x15U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x15U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x15U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+5949,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x15U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x15U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+5950,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x16U)))));
    bufp->fullBit(oldp+5951,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x16U)))));
    bufp->fullBit(oldp+5952,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x16U)))));
    bufp->fullBit(oldp+5953,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x16U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x16U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x16U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x16U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+5954,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x16U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x16U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+5955,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x17U)))));
    bufp->fullBit(oldp+5956,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x17U)))));
    bufp->fullBit(oldp+5957,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x17U)))));
    bufp->fullBit(oldp+5958,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x17U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x17U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x17U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x17U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+5959,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x17U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x17U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+5960,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x18U)))));
    bufp->fullBit(oldp+5961,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x18U)))));
    bufp->fullBit(oldp+5962,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x18U)))));
    bufp->fullBit(oldp+5963,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x18U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x18U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x18U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x18U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+5964,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x18U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x18U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+5965,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x19U)))));
    bufp->fullBit(oldp+5966,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x19U)))));
    bufp->fullBit(oldp+5967,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x19U)))));
    bufp->fullBit(oldp+5968,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x19U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x19U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x19U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x19U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+5969,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x19U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x19U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+5970,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x1aU)))));
    bufp->fullBit(oldp+5971,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x1aU)))));
    bufp->fullBit(oldp+5972,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x1aU)))));
    bufp->fullBit(oldp+5973,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x1aU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x1aU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x1aU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x1aU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+5974,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x1aU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x1aU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+5975,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x1bU)))));
    bufp->fullBit(oldp+5976,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x1bU)))));
    bufp->fullBit(oldp+5977,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x1bU)))));
    bufp->fullBit(oldp+5978,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x1bU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x1bU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x1bU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x1bU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+5979,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x1bU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x1bU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+5980,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x1cU)))));
    bufp->fullBit(oldp+5981,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x1cU)))));
    bufp->fullBit(oldp+5982,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x1cU)))));
    bufp->fullBit(oldp+5983,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x1cU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x1cU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x1cU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x1cU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+5984,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x1cU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x1cU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+5985,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x1dU)))));
    bufp->fullBit(oldp+5986,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x1dU)))));
    bufp->fullBit(oldp+5987,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x1dU)))));
    bufp->fullBit(oldp+5988,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x1dU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x1dU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x1dU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x1dU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+5989,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x1dU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x1dU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+5990,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 2U)))));
    bufp->fullBit(oldp+5991,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 2U)))));
    bufp->fullBit(oldp+5992,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 2U)))));
    bufp->fullBit(oldp+5993,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 2U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 2U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 2U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 2U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+5994,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 2U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 2U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+5995,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x1eU)))));
    bufp->fullBit(oldp+5996,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x1eU)))));
    bufp->fullBit(oldp+5997,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x1eU)))));
    bufp->fullBit(oldp+5998,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x1eU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x1eU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x1eU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x1eU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+5999,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x1eU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x1eU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+6000,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x1fU)))));
    bufp->fullBit(oldp+6001,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x1fU)))));
    bufp->fullBit(oldp+6002,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x1fU)))));
    bufp->fullBit(oldp+6003,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x1fU)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x1fU))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x1fU)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x1fU))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+6004,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x1fU)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x1fU)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+6005,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x20U)))));
    bufp->fullBit(oldp+6006,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x20U)))));
    bufp->fullBit(oldp+6007,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x20U)))));
    bufp->fullBit(oldp+6008,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x20U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x20U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x20U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x20U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+6009,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x20U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x20U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+6010,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x21U)))));
    bufp->fullBit(oldp+6011,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x21U)))));
    bufp->fullBit(oldp+6012,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x21U)))));
    bufp->fullBit(oldp+6013,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x21U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x21U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x21U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x21U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+6014,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x21U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x21U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+6015,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x22U)))));
    bufp->fullBit(oldp+6016,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x22U)))));
    bufp->fullBit(oldp+6017,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x22U)))));
    bufp->fullBit(oldp+6018,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x22U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x22U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x22U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x22U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+6019,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x22U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x22U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+6020,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [7U] >> 0x23U)))));
    bufp->fullBit(oldp+6021,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [8U] >> 0x23U)))));
    bufp->fullBit(oldp+6022,((1U & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                            [9U] >> 0x23U)))));
    bufp->fullBit(oldp+6023,((1U & (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                              [7U] 
                                              >> 0x23U)) 
                                     & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x23U))) 
                                    | (((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                 [8U] 
                                                 >> 0x23U)) 
                                        | (IData)((
                                                   vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                   [7U] 
                                                   >> 0x23U))) 
                                       & (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+6024,((1U & ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                             [7U] >> 0x23U)) 
                                    ^ ((IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                [8U] 
                                                >> 0x23U)) 
                                       ^ (IData)((vlSelfRef.tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__op_generate_reg
                                                  [9U] 
                                                  >> 0x23U)))))));
}
