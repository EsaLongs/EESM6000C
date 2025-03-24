// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fir.h for the primary calling header

#include "Vtb_fir__pch.h"
#include "Vtb_fir___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_fir___024root___eval_initial__TOP__Vtiming__0(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__axis_clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "src/tb_fir.sv", 
                                             160);
        vlSelfRef.tb_fir__DOT__axis_clk = (1U & (~ (IData)(vlSelfRef.tb_fir__DOT__axis_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_fir___024root___eval_initial__TOP__Vtiming__1(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__axis_rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         167);
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         168);
    vlSelfRef.tb_fir__DOT__axis_rst_n = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_fir___024root___eval_initial__TOP__Vtiming__2(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_fir__DOT__ss__0__in1;
    __Vtask_tb_fir__DOT__ss__0__in1 = 0;
    IData/*31:0*/ __Vtask_tb_fir__DOT__config_read_check__1__addr;
    __Vtask_tb_fir__DOT__config_read_check__1__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir__DOT__config_read_check__1__exp_data;
    __Vtask_tb_fir__DOT__config_read_check__1__exp_data = 0;
    IData/*31:0*/ __Vtask_tb_fir__DOT__config_read_check__1__mask;
    __Vtask_tb_fir__DOT__config_read_check__1__mask = 0;
    IData/*31:0*/ __Vtask_tb_fir__DOT__ss__2__in1;
    __Vtask_tb_fir__DOT__ss__2__in1 = 0;
    // Body
    while ((1U & (~ (IData)(vlSelfRef.tb_fir__DOT__axis_rst_n)))) {
        co_await vlSelfRef.__VtrigSched_h4138e8c0__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_fir.axis_rst_n)", 
                                                             "src/tb_fir.sv", 
                                                             205);
    }
    VL_WRITEF_NX("------------Start simulation-----------\n",0);
    vlSelfRef.tb_fir__DOT__ss_tvalid = 1U;
    VL_WRITEF_NX("----Start the data input(AXI-Stream)----\n",0);
    vlSelfRef.tb_fir__DOT__i = 0U;
    while ((vlSelfRef.tb_fir__DOT__i < (vlSelfRef.tb_fir__DOT__data_length 
                                        - (IData)(1U)))) {
        vlSelfRef.tb_fir__DOT__ss_tlast = 0U;
        __Vtask_tb_fir__DOT__ss__0__in1 = ((0x257U 
                                            >= (0x3ffU 
                                                & vlSelfRef.tb_fir__DOT__i))
                                            ? vlSelfRef.tb_fir__DOT__Din_list
                                           [(0x3ffU 
                                             & vlSelfRef.tb_fir__DOT__i)]
                                            : 0U);
        vlSelfRef.tb_fir__DOT__ss_tvalid = 1U;
        vlSelfRef.tb_fir__DOT__ss_tdata = __Vtask_tb_fir__DOT__ss__0__in1;
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             339);
        while ((1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__one_round_finish) 
                         | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_clr_exit_en))))) {
            co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_fir.axis_clk)", 
                                                                 "src/tb_fir.sv", 
                                                                 341);
        }
        vlSelfRef.tb_fir__DOT__i = ((IData)(1U) + vlSelfRef.tb_fir__DOT__i);
    }
    __Vtask_tb_fir__DOT__config_read_check__1__mask = 0xfU;
    __Vtask_tb_fir__DOT__config_read_check__1__exp_data = 0U;
    __Vtask_tb_fir__DOT__config_read_check__1__addr = 0U;
    vlSelfRef.tb_fir__DOT__araddr = __Vtask_tb_fir__DOT__config_read_check__1__addr;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         319);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         320);
    vlSelfRef.tb_fir__DOT__arvalid = 1U;
    vlSelfRef.tb_fir__DOT__rready = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         322);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))) 
                     | (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             323);
    }
    if ((((((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                        & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
            & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
               & vlSelfRef.tb_fir__DOT__tap_Do)) | 
           ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                               << 1U) | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                               & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                 & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))) 
          & __Vtask_tb_fir__DOT__config_read_check__1__mask) 
         != (__Vtask_tb_fir__DOT__config_read_check__1__exp_data 
             & __Vtask_tb_fir__DOT__config_read_check__1__mask))) {
        VL_WRITEF_NX("ERROR: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__1__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
        vlSelfRef.tb_fir__DOT__error_coef = 1U;
    } else {
        VL_WRITEF_NX("OK: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__1__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
    }
    vlSelfRef.tb_fir__DOT__ss_tlast = 1U;
    __Vtask_tb_fir__DOT__ss__2__in1 = vlSelfRef.tb_fir__DOT__Din_list
        [0x257U];
    vlSelfRef.tb_fir__DOT__ss_tvalid = 1U;
    vlSelfRef.tb_fir__DOT__ss_tdata = __Vtask_tb_fir__DOT__ss__2__in1;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         339);
    while ((1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__one_round_finish) 
                     | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_clr_exit_en))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             341);
    }
    VL_WRITEF_NX("------End the data input(AXI-Stream)------\n",0);
}

VL_INLINE_OPT VlCoroutine Vtb_fir___024root___eval_initial__TOP__Vtiming__4(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___eval_initial__TOP__Vtiming__4\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_fir__DOT__config_write__6__addr;
    __Vtask_tb_fir__DOT__config_write__6__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir__DOT__config_write__6__data;
    __Vtask_tb_fir__DOT__config_write__6__data = 0;
    IData/*31:0*/ __Vtask_tb_fir__DOT__config_write__7__addr;
    __Vtask_tb_fir__DOT__config_write__7__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir__DOT__config_write__7__data;
    __Vtask_tb_fir__DOT__config_write__7__data = 0;
    IData/*31:0*/ __Vtask_tb_fir__DOT__config_write__8__addr;
    __Vtask_tb_fir__DOT__config_write__8__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir__DOT__config_write__8__data;
    __Vtask_tb_fir__DOT__config_write__8__data = 0;
    IData/*31:0*/ __Vtask_tb_fir__DOT__config_read_check__9__addr;
    __Vtask_tb_fir__DOT__config_read_check__9__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir__DOT__config_read_check__9__exp_data;
    __Vtask_tb_fir__DOT__config_read_check__9__exp_data = 0;
    IData/*31:0*/ __Vtask_tb_fir__DOT__config_read_check__9__mask;
    __Vtask_tb_fir__DOT__config_read_check__9__mask = 0;
    IData/*31:0*/ __Vtask_tb_fir__DOT__config_write__10__addr;
    __Vtask_tb_fir__DOT__config_write__10__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir__DOT__config_write__10__data;
    __Vtask_tb_fir__DOT__config_write__10__data = 0;
    // Body
    while ((1U & (~ (IData)(vlSelfRef.tb_fir__DOT__axis_rst_n)))) {
        co_await vlSelfRef.__VtrigSched_h4138e8c0__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_fir.axis_rst_n)", 
                                                             "src/tb_fir.sv", 
                                                             251);
    }
    vlSelfRef.tb_fir__DOT__error_coef = 0U;
    VL_WRITEF_NX("----Start the coefficient input(AXI-lite)----\n",0);
    __Vtask_tb_fir__DOT__config_write__6__data = 0xbU;
    __Vtask_tb_fir__DOT__config_write__6__addr = 0x10000000U;
    vlSelfRef.tb_fir__DOT__awaddr = __Vtask_tb_fir__DOT__config_write__6__addr;
    vlSelfRef.tb_fir__DOT__wdata = __Vtask_tb_fir__DOT__config_write__6__data;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         296);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         297);
    vlSelfRef.tb_fir__DOT__awvalid = 1U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         299);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready) 
                      & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
                         | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid))) 
                     | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                         & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))) 
                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             300);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         301);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         303);
    while ((1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                     & ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                        | (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             304);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         305);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    __Vtask_tb_fir__DOT__config_write__7__data = vlSelfRef.tb_fir__DOT__data_length;
    __Vtask_tb_fir__DOT__config_write__7__addr = 0x20000000U;
    vlSelfRef.tb_fir__DOT__awaddr = __Vtask_tb_fir__DOT__config_write__7__addr;
    vlSelfRef.tb_fir__DOT__wdata = __Vtask_tb_fir__DOT__config_write__7__data;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         296);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         297);
    vlSelfRef.tb_fir__DOT__awvalid = 1U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         299);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready) 
                      & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
                         | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid))) 
                     | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                         & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))) 
                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             300);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         301);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         303);
    while ((1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                     & ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                        | (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             304);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         305);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    __Vtask_tb_fir__DOT__config_write__8__data = vlSelfRef.tb_fir__DOT__coef
        [0U];
    __Vtask_tb_fir__DOT__config_write__8__addr = 0x30000000U;
    vlSelfRef.tb_fir__DOT__awaddr = __Vtask_tb_fir__DOT__config_write__8__addr;
    vlSelfRef.tb_fir__DOT__wdata = __Vtask_tb_fir__DOT__config_write__8__data;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         296);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         297);
    vlSelfRef.tb_fir__DOT__awvalid = 1U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         299);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready) 
                      & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
                         | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid))) 
                     | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                         & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))) 
                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             300);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         301);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         303);
    while ((1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                     & ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                        | (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             304);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         305);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__k = 1U;
    __Vtask_tb_fir__DOT__config_write__8__data = vlSelfRef.tb_fir__DOT__coef
        [1U];
    __Vtask_tb_fir__DOT__config_write__8__addr = 0x30000004U;
    vlSelfRef.tb_fir__DOT__awaddr = __Vtask_tb_fir__DOT__config_write__8__addr;
    vlSelfRef.tb_fir__DOT__wdata = __Vtask_tb_fir__DOT__config_write__8__data;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         296);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         297);
    vlSelfRef.tb_fir__DOT__awvalid = 1U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         299);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready) 
                      & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
                         | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid))) 
                     | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                         & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))) 
                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             300);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         301);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         303);
    while ((1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                     & ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                        | (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             304);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         305);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__k = 2U;
    __Vtask_tb_fir__DOT__config_write__8__data = vlSelfRef.tb_fir__DOT__coef
        [2U];
    __Vtask_tb_fir__DOT__config_write__8__addr = 0x30000008U;
    vlSelfRef.tb_fir__DOT__awaddr = __Vtask_tb_fir__DOT__config_write__8__addr;
    vlSelfRef.tb_fir__DOT__wdata = __Vtask_tb_fir__DOT__config_write__8__data;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         296);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         297);
    vlSelfRef.tb_fir__DOT__awvalid = 1U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         299);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready) 
                      & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
                         | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid))) 
                     | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                         & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))) 
                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             300);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         301);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         303);
    while ((1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                     & ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                        | (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             304);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         305);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__k = 3U;
    __Vtask_tb_fir__DOT__config_write__8__data = vlSelfRef.tb_fir__DOT__coef
        [3U];
    __Vtask_tb_fir__DOT__config_write__8__addr = 0x3000000cU;
    vlSelfRef.tb_fir__DOT__awaddr = __Vtask_tb_fir__DOT__config_write__8__addr;
    vlSelfRef.tb_fir__DOT__wdata = __Vtask_tb_fir__DOT__config_write__8__data;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         296);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         297);
    vlSelfRef.tb_fir__DOT__awvalid = 1U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         299);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready) 
                      & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
                         | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid))) 
                     | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                         & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))) 
                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             300);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         301);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         303);
    while ((1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                     & ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                        | (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             304);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         305);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__k = 4U;
    __Vtask_tb_fir__DOT__config_write__8__data = vlSelfRef.tb_fir__DOT__coef
        [4U];
    __Vtask_tb_fir__DOT__config_write__8__addr = 0x30000010U;
    vlSelfRef.tb_fir__DOT__awaddr = __Vtask_tb_fir__DOT__config_write__8__addr;
    vlSelfRef.tb_fir__DOT__wdata = __Vtask_tb_fir__DOT__config_write__8__data;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         296);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         297);
    vlSelfRef.tb_fir__DOT__awvalid = 1U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         299);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready) 
                      & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
                         | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid))) 
                     | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                         & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))) 
                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             300);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         301);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         303);
    while ((1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                     & ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                        | (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             304);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         305);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__k = 5U;
    __Vtask_tb_fir__DOT__config_write__8__data = vlSelfRef.tb_fir__DOT__coef
        [5U];
    __Vtask_tb_fir__DOT__config_write__8__addr = 0x30000014U;
    vlSelfRef.tb_fir__DOT__awaddr = __Vtask_tb_fir__DOT__config_write__8__addr;
    vlSelfRef.tb_fir__DOT__wdata = __Vtask_tb_fir__DOT__config_write__8__data;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         296);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         297);
    vlSelfRef.tb_fir__DOT__awvalid = 1U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         299);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready) 
                      & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
                         | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid))) 
                     | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                         & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))) 
                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             300);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         301);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         303);
    while ((1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                     & ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                        | (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             304);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         305);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__k = 6U;
    __Vtask_tb_fir__DOT__config_write__8__data = vlSelfRef.tb_fir__DOT__coef
        [6U];
    __Vtask_tb_fir__DOT__config_write__8__addr = 0x30000018U;
    vlSelfRef.tb_fir__DOT__awaddr = __Vtask_tb_fir__DOT__config_write__8__addr;
    vlSelfRef.tb_fir__DOT__wdata = __Vtask_tb_fir__DOT__config_write__8__data;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         296);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         297);
    vlSelfRef.tb_fir__DOT__awvalid = 1U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         299);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready) 
                      & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
                         | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid))) 
                     | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                         & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))) 
                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             300);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         301);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         303);
    while ((1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                     & ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                        | (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             304);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         305);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__k = 7U;
    __Vtask_tb_fir__DOT__config_write__8__data = vlSelfRef.tb_fir__DOT__coef
        [7U];
    __Vtask_tb_fir__DOT__config_write__8__addr = 0x3000001cU;
    vlSelfRef.tb_fir__DOT__awaddr = __Vtask_tb_fir__DOT__config_write__8__addr;
    vlSelfRef.tb_fir__DOT__wdata = __Vtask_tb_fir__DOT__config_write__8__data;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         296);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         297);
    vlSelfRef.tb_fir__DOT__awvalid = 1U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         299);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready) 
                      & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
                         | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid))) 
                     | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                         & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))) 
                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             300);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         301);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         303);
    while ((1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                     & ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                        | (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             304);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         305);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__k = 8U;
    __Vtask_tb_fir__DOT__config_write__8__data = vlSelfRef.tb_fir__DOT__coef
        [8U];
    __Vtask_tb_fir__DOT__config_write__8__addr = 0x30000020U;
    vlSelfRef.tb_fir__DOT__awaddr = __Vtask_tb_fir__DOT__config_write__8__addr;
    vlSelfRef.tb_fir__DOT__wdata = __Vtask_tb_fir__DOT__config_write__8__data;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         296);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         297);
    vlSelfRef.tb_fir__DOT__awvalid = 1U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         299);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready) 
                      & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
                         | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid))) 
                     | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                         & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))) 
                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             300);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         301);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         303);
    while ((1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                     & ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                        | (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             304);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         305);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__k = 9U;
    __Vtask_tb_fir__DOT__config_write__8__data = vlSelfRef.tb_fir__DOT__coef
        [9U];
    __Vtask_tb_fir__DOT__config_write__8__addr = 0x30000024U;
    vlSelfRef.tb_fir__DOT__awaddr = __Vtask_tb_fir__DOT__config_write__8__addr;
    vlSelfRef.tb_fir__DOT__wdata = __Vtask_tb_fir__DOT__config_write__8__data;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         296);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         297);
    vlSelfRef.tb_fir__DOT__awvalid = 1U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         299);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready) 
                      & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
                         | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid))) 
                     | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                         & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))) 
                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             300);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         301);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         303);
    while ((1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                     & ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                        | (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             304);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         305);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__k = 0xaU;
    __Vtask_tb_fir__DOT__config_write__8__data = vlSelfRef.tb_fir__DOT__coef
        [0xaU];
    __Vtask_tb_fir__DOT__config_write__8__addr = 0x30000028U;
    vlSelfRef.tb_fir__DOT__awaddr = __Vtask_tb_fir__DOT__config_write__8__addr;
    vlSelfRef.tb_fir__DOT__wdata = __Vtask_tb_fir__DOT__config_write__8__data;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         296);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         297);
    vlSelfRef.tb_fir__DOT__awvalid = 1U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         299);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready) 
                      & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
                         | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid))) 
                     | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                         & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))) 
                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             300);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         301);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         303);
    while ((1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                     & ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                        | (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             304);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         305);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__k = 0xbU;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    VL_WRITEF_NX(" Check Coefficient ...\n",0);
    __Vtask_tb_fir__DOT__config_read_check__9__mask = 0xffffffffU;
    __Vtask_tb_fir__DOT__config_read_check__9__exp_data 
        = vlSelfRef.tb_fir__DOT__coef[0U];
    __Vtask_tb_fir__DOT__config_read_check__9__addr = 0x30000000U;
    vlSelfRef.tb_fir__DOT__araddr = __Vtask_tb_fir__DOT__config_read_check__9__addr;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         319);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         320);
    vlSelfRef.tb_fir__DOT__arvalid = 1U;
    vlSelfRef.tb_fir__DOT__rready = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         322);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))) 
                     | (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             323);
    }
    if ((((((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                        & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
            & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
               & vlSelfRef.tb_fir__DOT__tap_Do)) | 
           ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                               << 1U) | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                               & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                 & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))) 
          & __Vtask_tb_fir__DOT__config_read_check__9__mask) 
         != (__Vtask_tb_fir__DOT__config_read_check__9__exp_data 
             & __Vtask_tb_fir__DOT__config_read_check__9__mask))) {
        VL_WRITEF_NX("ERROR: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
        vlSelfRef.tb_fir__DOT__error_coef = 1U;
    } else {
        VL_WRITEF_NX("OK: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
    }
    vlSelfRef.tb_fir__DOT__k = 1U;
    __Vtask_tb_fir__DOT__config_read_check__9__mask = 0xffffffffU;
    __Vtask_tb_fir__DOT__config_read_check__9__exp_data 
        = vlSelfRef.tb_fir__DOT__coef[1U];
    __Vtask_tb_fir__DOT__config_read_check__9__addr = 0x30000004U;
    vlSelfRef.tb_fir__DOT__araddr = __Vtask_tb_fir__DOT__config_read_check__9__addr;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         319);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         320);
    vlSelfRef.tb_fir__DOT__arvalid = 1U;
    vlSelfRef.tb_fir__DOT__rready = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         322);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))) 
                     | (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             323);
    }
    if ((((((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                        & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
            & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
               & vlSelfRef.tb_fir__DOT__tap_Do)) | 
           ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                               << 1U) | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                               & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                 & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))) 
          & __Vtask_tb_fir__DOT__config_read_check__9__mask) 
         != (__Vtask_tb_fir__DOT__config_read_check__9__exp_data 
             & __Vtask_tb_fir__DOT__config_read_check__9__mask))) {
        VL_WRITEF_NX("ERROR: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
        vlSelfRef.tb_fir__DOT__error_coef = 1U;
    } else {
        VL_WRITEF_NX("OK: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
    }
    vlSelfRef.tb_fir__DOT__k = 2U;
    __Vtask_tb_fir__DOT__config_read_check__9__mask = 0xffffffffU;
    __Vtask_tb_fir__DOT__config_read_check__9__exp_data 
        = vlSelfRef.tb_fir__DOT__coef[2U];
    __Vtask_tb_fir__DOT__config_read_check__9__addr = 0x30000008U;
    vlSelfRef.tb_fir__DOT__araddr = __Vtask_tb_fir__DOT__config_read_check__9__addr;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         319);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         320);
    vlSelfRef.tb_fir__DOT__arvalid = 1U;
    vlSelfRef.tb_fir__DOT__rready = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         322);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))) 
                     | (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             323);
    }
    if ((((((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                        & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
            & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
               & vlSelfRef.tb_fir__DOT__tap_Do)) | 
           ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                               << 1U) | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                               & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                 & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))) 
          & __Vtask_tb_fir__DOT__config_read_check__9__mask) 
         != (__Vtask_tb_fir__DOT__config_read_check__9__exp_data 
             & __Vtask_tb_fir__DOT__config_read_check__9__mask))) {
        VL_WRITEF_NX("ERROR: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
        vlSelfRef.tb_fir__DOT__error_coef = 1U;
    } else {
        VL_WRITEF_NX("OK: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
    }
    vlSelfRef.tb_fir__DOT__k = 3U;
    __Vtask_tb_fir__DOT__config_read_check__9__mask = 0xffffffffU;
    __Vtask_tb_fir__DOT__config_read_check__9__exp_data 
        = vlSelfRef.tb_fir__DOT__coef[3U];
    __Vtask_tb_fir__DOT__config_read_check__9__addr = 0x3000000cU;
    vlSelfRef.tb_fir__DOT__araddr = __Vtask_tb_fir__DOT__config_read_check__9__addr;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         319);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         320);
    vlSelfRef.tb_fir__DOT__arvalid = 1U;
    vlSelfRef.tb_fir__DOT__rready = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         322);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))) 
                     | (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             323);
    }
    if ((((((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                        & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
            & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
               & vlSelfRef.tb_fir__DOT__tap_Do)) | 
           ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                               << 1U) | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                               & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                 & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))) 
          & __Vtask_tb_fir__DOT__config_read_check__9__mask) 
         != (__Vtask_tb_fir__DOT__config_read_check__9__exp_data 
             & __Vtask_tb_fir__DOT__config_read_check__9__mask))) {
        VL_WRITEF_NX("ERROR: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
        vlSelfRef.tb_fir__DOT__error_coef = 1U;
    } else {
        VL_WRITEF_NX("OK: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
    }
    vlSelfRef.tb_fir__DOT__k = 4U;
    __Vtask_tb_fir__DOT__config_read_check__9__mask = 0xffffffffU;
    __Vtask_tb_fir__DOT__config_read_check__9__exp_data 
        = vlSelfRef.tb_fir__DOT__coef[4U];
    __Vtask_tb_fir__DOT__config_read_check__9__addr = 0x30000010U;
    vlSelfRef.tb_fir__DOT__araddr = __Vtask_tb_fir__DOT__config_read_check__9__addr;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         319);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         320);
    vlSelfRef.tb_fir__DOT__arvalid = 1U;
    vlSelfRef.tb_fir__DOT__rready = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         322);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))) 
                     | (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             323);
    }
    if ((((((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                        & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
            & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
               & vlSelfRef.tb_fir__DOT__tap_Do)) | 
           ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                               << 1U) | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                               & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                 & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))) 
          & __Vtask_tb_fir__DOT__config_read_check__9__mask) 
         != (__Vtask_tb_fir__DOT__config_read_check__9__exp_data 
             & __Vtask_tb_fir__DOT__config_read_check__9__mask))) {
        VL_WRITEF_NX("ERROR: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
        vlSelfRef.tb_fir__DOT__error_coef = 1U;
    } else {
        VL_WRITEF_NX("OK: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
    }
    vlSelfRef.tb_fir__DOT__k = 5U;
    __Vtask_tb_fir__DOT__config_read_check__9__mask = 0xffffffffU;
    __Vtask_tb_fir__DOT__config_read_check__9__exp_data 
        = vlSelfRef.tb_fir__DOT__coef[5U];
    __Vtask_tb_fir__DOT__config_read_check__9__addr = 0x30000014U;
    vlSelfRef.tb_fir__DOT__araddr = __Vtask_tb_fir__DOT__config_read_check__9__addr;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         319);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         320);
    vlSelfRef.tb_fir__DOT__arvalid = 1U;
    vlSelfRef.tb_fir__DOT__rready = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         322);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))) 
                     | (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             323);
    }
    if ((((((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                        & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
            & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
               & vlSelfRef.tb_fir__DOT__tap_Do)) | 
           ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                               << 1U) | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                               & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                 & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))) 
          & __Vtask_tb_fir__DOT__config_read_check__9__mask) 
         != (__Vtask_tb_fir__DOT__config_read_check__9__exp_data 
             & __Vtask_tb_fir__DOT__config_read_check__9__mask))) {
        VL_WRITEF_NX("ERROR: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
        vlSelfRef.tb_fir__DOT__error_coef = 1U;
    } else {
        VL_WRITEF_NX("OK: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
    }
    vlSelfRef.tb_fir__DOT__k = 6U;
    __Vtask_tb_fir__DOT__config_read_check__9__mask = 0xffffffffU;
    __Vtask_tb_fir__DOT__config_read_check__9__exp_data 
        = vlSelfRef.tb_fir__DOT__coef[6U];
    __Vtask_tb_fir__DOT__config_read_check__9__addr = 0x30000018U;
    vlSelfRef.tb_fir__DOT__araddr = __Vtask_tb_fir__DOT__config_read_check__9__addr;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         319);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         320);
    vlSelfRef.tb_fir__DOT__arvalid = 1U;
    vlSelfRef.tb_fir__DOT__rready = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         322);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))) 
                     | (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             323);
    }
    if ((((((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                        & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
            & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
               & vlSelfRef.tb_fir__DOT__tap_Do)) | 
           ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                               << 1U) | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                               & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                 & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))) 
          & __Vtask_tb_fir__DOT__config_read_check__9__mask) 
         != (__Vtask_tb_fir__DOT__config_read_check__9__exp_data 
             & __Vtask_tb_fir__DOT__config_read_check__9__mask))) {
        VL_WRITEF_NX("ERROR: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
        vlSelfRef.tb_fir__DOT__error_coef = 1U;
    } else {
        VL_WRITEF_NX("OK: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
    }
    vlSelfRef.tb_fir__DOT__k = 7U;
    __Vtask_tb_fir__DOT__config_read_check__9__mask = 0xffffffffU;
    __Vtask_tb_fir__DOT__config_read_check__9__exp_data 
        = vlSelfRef.tb_fir__DOT__coef[7U];
    __Vtask_tb_fir__DOT__config_read_check__9__addr = 0x3000001cU;
    vlSelfRef.tb_fir__DOT__araddr = __Vtask_tb_fir__DOT__config_read_check__9__addr;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         319);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         320);
    vlSelfRef.tb_fir__DOT__arvalid = 1U;
    vlSelfRef.tb_fir__DOT__rready = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         322);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))) 
                     | (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             323);
    }
    if ((((((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                        & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
            & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
               & vlSelfRef.tb_fir__DOT__tap_Do)) | 
           ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                               << 1U) | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                               & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                 & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))) 
          & __Vtask_tb_fir__DOT__config_read_check__9__mask) 
         != (__Vtask_tb_fir__DOT__config_read_check__9__exp_data 
             & __Vtask_tb_fir__DOT__config_read_check__9__mask))) {
        VL_WRITEF_NX("ERROR: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
        vlSelfRef.tb_fir__DOT__error_coef = 1U;
    } else {
        VL_WRITEF_NX("OK: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
    }
    vlSelfRef.tb_fir__DOT__k = 8U;
    __Vtask_tb_fir__DOT__config_read_check__9__mask = 0xffffffffU;
    __Vtask_tb_fir__DOT__config_read_check__9__exp_data 
        = vlSelfRef.tb_fir__DOT__coef[8U];
    __Vtask_tb_fir__DOT__config_read_check__9__addr = 0x30000020U;
    vlSelfRef.tb_fir__DOT__araddr = __Vtask_tb_fir__DOT__config_read_check__9__addr;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         319);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         320);
    vlSelfRef.tb_fir__DOT__arvalid = 1U;
    vlSelfRef.tb_fir__DOT__rready = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         322);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))) 
                     | (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             323);
    }
    if ((((((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                        & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
            & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
               & vlSelfRef.tb_fir__DOT__tap_Do)) | 
           ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                               << 1U) | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                               & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                 & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))) 
          & __Vtask_tb_fir__DOT__config_read_check__9__mask) 
         != (__Vtask_tb_fir__DOT__config_read_check__9__exp_data 
             & __Vtask_tb_fir__DOT__config_read_check__9__mask))) {
        VL_WRITEF_NX("ERROR: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
        vlSelfRef.tb_fir__DOT__error_coef = 1U;
    } else {
        VL_WRITEF_NX("OK: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
    }
    vlSelfRef.tb_fir__DOT__k = 9U;
    __Vtask_tb_fir__DOT__config_read_check__9__mask = 0xffffffffU;
    __Vtask_tb_fir__DOT__config_read_check__9__exp_data 
        = vlSelfRef.tb_fir__DOT__coef[9U];
    __Vtask_tb_fir__DOT__config_read_check__9__addr = 0x30000024U;
    vlSelfRef.tb_fir__DOT__araddr = __Vtask_tb_fir__DOT__config_read_check__9__addr;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         319);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         320);
    vlSelfRef.tb_fir__DOT__arvalid = 1U;
    vlSelfRef.tb_fir__DOT__rready = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         322);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))) 
                     | (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             323);
    }
    if ((((((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                        & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
            & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
               & vlSelfRef.tb_fir__DOT__tap_Do)) | 
           ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                               << 1U) | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                               & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                 & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))) 
          & __Vtask_tb_fir__DOT__config_read_check__9__mask) 
         != (__Vtask_tb_fir__DOT__config_read_check__9__exp_data 
             & __Vtask_tb_fir__DOT__config_read_check__9__mask))) {
        VL_WRITEF_NX("ERROR: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
        vlSelfRef.tb_fir__DOT__error_coef = 1U;
    } else {
        VL_WRITEF_NX("OK: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
    }
    vlSelfRef.tb_fir__DOT__k = 0xaU;
    __Vtask_tb_fir__DOT__config_read_check__9__mask = 0xffffffffU;
    __Vtask_tb_fir__DOT__config_read_check__9__exp_data 
        = vlSelfRef.tb_fir__DOT__coef[0xaU];
    __Vtask_tb_fir__DOT__config_read_check__9__addr = 0x30000028U;
    vlSelfRef.tb_fir__DOT__araddr = __Vtask_tb_fir__DOT__config_read_check__9__addr;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         319);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         320);
    vlSelfRef.tb_fir__DOT__arvalid = 1U;
    vlSelfRef.tb_fir__DOT__rready = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         322);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))) 
                     | (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             323);
    }
    if ((((((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                        & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
            & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
               & vlSelfRef.tb_fir__DOT__tap_Do)) | 
           ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                               << 1U) | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                               & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                 & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))) 
          & __Vtask_tb_fir__DOT__config_read_check__9__mask) 
         != (__Vtask_tb_fir__DOT__config_read_check__9__exp_data 
             & __Vtask_tb_fir__DOT__config_read_check__9__mask))) {
        VL_WRITEF_NX("ERROR: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
        vlSelfRef.tb_fir__DOT__error_coef = 1U;
    } else {
        VL_WRITEF_NX("OK: exp = %11d, rdata = %11d\n",0,
                     32,__Vtask_tb_fir__DOT__config_read_check__9__exp_data,
                     32,(((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                      & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now))))) 
                          & ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)))) 
                             & vlSelfRef.tb_fir__DOT__tap_Do)) 
                         | ((- (IData)((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)))) 
                            & (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ctrl_flag) 
                                            & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                & (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                                    << 2U) | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_done) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__ap_start)))) 
                               | (((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__tap_flag) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap)) 
                                  | ((- (IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__data_flag) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))) 
                                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_data)))))));
    }
    vlSelfRef.tb_fir__DOT__k = 0xbU;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    VL_WRITEF_NX(" Tape programming done ...\n Start FIR\n",0);
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         271);
    __Vtask_tb_fir__DOT__config_write__10__data = 1U;
    __Vtask_tb_fir__DOT__config_write__10__addr = 0U;
    vlSelfRef.tb_fir__DOT__awaddr = __Vtask_tb_fir__DOT__config_write__10__addr;
    vlSelfRef.tb_fir__DOT__wdata = __Vtask_tb_fir__DOT__config_write__10__data;
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    vlSelfRef.tb_fir__DOT__arvalid = 0U;
    vlSelfRef.tb_fir__DOT__rready = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         296);
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         297);
    vlSelfRef.tb_fir__DOT__awvalid = 1U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         299);
    while ((1U & (~ (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready) 
                      & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
                         | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid))) 
                     | (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                         & (0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))) 
                        & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             300);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         301);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 1U;
    co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir.axis_clk)", 
                                                         "src/tb_fir.sv", 
                                                         303);
    while ((1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready) 
                     & ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                        | (2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now))))))) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             304);
    }
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "src/tb_fir.sv", 
                                         305);
    vlSelfRef.tb_fir__DOT__awvalid = 0U;
    vlSelfRef.tb_fir__DOT__wvalid = 0U;
    VL_WRITEF_NX("----End the coefficient input(AXI-lite)----\n",0);
}

VL_INLINE_OPT VlCoroutine Vtb_fir___024root___eval_initial__TOP__Vtiming__5(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___eval_initial__TOP__Vtiming__5\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LTS_III(32, 0U, vlSelfRef.tb_fir__DOT__timeout)) {
        co_await vlSelfRef.__VtrigSched_h24927824__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir.axis_clk)", 
                                                             "src/tb_fir.sv", 
                                                             279);
        vlSelfRef.tb_fir__DOT__timeout = (vlSelfRef.tb_fir__DOT__timeout 
                                          - (IData)(1U));
    }
    VL_WRITEF_NX("%20#Simualtion Hang ....\n",0,64,
                 VL_TIME_UNITED_Q(1000));
    VL_FINISH_MT("src/tb_fir.sv", 283, "");
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__0(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__0\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [0U] >> 1U) | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                 [0U] & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                         [0U] >> 1U))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [0U] >> 3U) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [0U] >> 2U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 3U))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [0U] >> 5U) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [0U] >> 4U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 5U))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [0U] >> 7U) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [0U] >> 6U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 7U))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [0U] >> 9U) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [0U] >> 8U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                 [0U] 
                                                 >> 9U))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [1U] >> 3U) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [1U] >> 1U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 3U))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [1U] >> 7U) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [1U] >> 5U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                 [1U] 
                                                 >> 7U))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [2U] >> 7U) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [2U] >> 3U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                 [2U] 
                                                 >> 7U))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [4U] >> 5U) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [4U] >> 3U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                 [4U] 
                                                 >> 5U))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [5U] >> 2U) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [5U] >> 1U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                 [5U] 
                                                 >> 2U))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [5U] >> 4U) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [5U] >> 3U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                 [5U] 
                                                 >> 4U))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [5U] >> 6U) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [5U] >> 5U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                 [5U] 
                                                 >> 6U))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [5U] >> 8U) | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                                  [5U] >> 7U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                                 [5U] 
                                                 >> 8U))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                 [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                         [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                         [6U])));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                          [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                          [6U])) >> 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                          [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                          [6U])) >> 2U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                          [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                          [6U])) >> 3U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                          [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                          [6U])) >> 4U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                          [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                          [6U])) >> 5U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                          [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                          [6U])) >> 6U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                          [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                          [6U])) >> 7U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                          [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                          [6U])) >> 8U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__stage_gp__out_g 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                  [6U] | (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                          [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                          [6U])) >> 9U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__1(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__1\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                 [0U] & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                         [0U] >> 1U)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                  [0U] >> 2U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                 [0U] >> 3U)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                  [0U] >> 4U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                 [0U] >> 5U)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                  [0U] >> 6U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                 [0U] >> 7U)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                  [0U] >> 8U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                 [0U] >> 9U)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                  [1U] >> 1U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                 [1U] >> 3U)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                  [1U] >> 5U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                 [1U] >> 7U)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                  [2U] >> 3U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                 [2U] >> 7U)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                  [4U] >> 3U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                 [4U] >> 5U)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                  [5U] >> 1U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                 [5U] >> 2U)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                  [5U] >> 3U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                 [5U] >> 4U)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                  [5U] >> 5U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                 [5U] >> 6U)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__stage_gp__out_p 
        = (1U & ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                  [5U] >> 7U) & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                                 [5U] >> 8U)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__stage_gp__in_p1 
        = (1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
           [6U]);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__stage_gp__in_p1 
        = (1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                 [6U] >> 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__stage_gp__in_p1 
        = (1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                 [6U] >> 2U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__stage_gp__in_p1 
        = (1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                 [6U] >> 3U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__stage_gp__in_p1 
        = (1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                 [6U] >> 4U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__stage_gp__in_p1 
        = (1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                 [6U] >> 5U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__stage_gp__in_p1 
        = (1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                 [6U] >> 6U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__in_p1 
        = (1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                 [6U] >> 7U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__stage_gp__in_p1 
        = (1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                 [6U] >> 8U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__stage_gp__in_p1 
        = (1U & (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                 [6U] >> 9U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0x3feU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [1U]) | (1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [0U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0x3fbU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [1U]) | (4U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [0U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0x3efU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [1U]) | (0x10U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [0U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0x3bfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [1U]) | (0x40U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [0U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0x2ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [1U]) | (0x100U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [0U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0x3feU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [2U]) | (1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0x3fdU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [2U]) | (2U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0x3fbU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [2U]) | (4U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0x3efU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [2U]) | (0x10U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0x3dfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [2U]) | (0x20U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0x3bfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [2U]) | (0x40U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0x2ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [2U]) | (0x100U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0x1ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [2U]) | (0x200U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0x3feU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [3U]) | (1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0x3fdU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [3U]) | (2U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0x3fbU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [3U]) | (4U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0x3f7U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [3U]) | (8U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0x3efU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [3U]) | (0x10U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0x3dfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [3U]) | (0x20U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0x3bfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [3U]) | (0x40U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0x2ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [3U]) | (0x100U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0x1ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [3U]) | (0x200U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0x3feU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [4U]) | (1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0x3fdU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [4U]) | (2U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0x3fbU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [4U]) | (4U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0x3f7U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [4U]) | (8U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0x3efU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [4U]) | (0x10U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0x3dfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [4U]) | (0x20U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0x3bfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [4U]) | (0x40U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0x37fU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [4U]) | (0x80U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0x2ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [4U]) | (0x100U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[4U] 
        = ((0x1ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [4U]) | (0x200U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0x3feU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [5U]) | (1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0x3fdU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [5U]) | (2U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0x3fbU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [5U]) | (4U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0x3f7U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [5U]) | (8U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0x3efU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [5U]) | (0x10U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0x3bfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [5U]) | (0x40U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0x37fU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [5U]) | (0x80U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0x2ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [5U]) | (0x100U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0x1ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [5U]) | (0x200U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0x3feU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [6U]) | (1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [5U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0x3fdU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [6U]) | (2U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [5U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0x3f7U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [6U]) | (8U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [5U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0x3dfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [6U]) | (0x20U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [5U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0x37fU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [6U]) | (0x80U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [5U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0x1ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [6U]) | (0x200U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
                     [5U]));
}

VL_INLINE_OPT void Vtb_fir___024root___act_comb__TOP__0(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_comb__TOP__0\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__stream_data_EN 
        = (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__one_round_finish) 
            | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_clr_exit_en)) 
           & (IData)(vlSelfRef.tb_fir__DOT__ss_tvalid));
}

VL_INLINE_OPT void Vtb_fir___024root___act_comb__TOP__1(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_comb__TOP__1\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_rdata_exit_ena 
        = (IData)(((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)) 
                   & (IData)(vlSelfRef.tb_fir__DOT__rready)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_wdata_exit_ena 
        = (IData)((((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)) 
                    & (IData)(vlSelfRef.tb_fir__DOT__wvalid)) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid 
        = ((3U == (vlSelfRef.tb_fir__DOT__awaddr >> 0x1cU)) 
           & (IData)(vlSelfRef.tb_fir__DOT__awvalid));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__data_hsked 
        = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__valid_shifter_final) 
           & (IData)(vlSelfRef.tb_fir__DOT__sm_tready));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__access_ctrl 
        = (((0U == (vlSelfRef.tb_fir__DOT__awaddr >> 0x1cU)) 
            & (IData)(vlSelfRef.tb_fir__DOT__awvalid)) 
           | ((0U == (vlSelfRef.tb_fir__DOT__araddr 
                      >> 0x1cU)) & (IData)(vlSelfRef.tb_fir__DOT__arvalid)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__access_tap 
        = (((1U == (vlSelfRef.tb_fir__DOT__awaddr >> 0x1cU)) 
            & (IData)(vlSelfRef.tb_fir__DOT__awvalid)) 
           | ((1U == (vlSelfRef.tb_fir__DOT__araddr 
                      >> 0x1cU)) & (IData)(vlSelfRef.tb_fir__DOT__arvalid)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__access_data 
        = (((2U == (vlSelfRef.tb_fir__DOT__awaddr >> 0x1cU)) 
            & (IData)(vlSelfRef.tb_fir__DOT__awvalid)) 
           | ((2U == (vlSelfRef.tb_fir__DOT__araddr 
                      >> 0x1cU)) & (IData)(vlSelfRef.tb_fir__DOT__arvalid)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena 
        = (IData)((((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                    & (IData)(vlSelfRef.tb_fir__DOT__wvalid)) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid 
        = ((3U == (vlSelfRef.tb_fir__DOT__araddr >> 0x1cU)) 
           & (IData)(vlSelfRef.tb_fir__DOT__arvalid));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__stall 
        = (1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__sm_tready) 
                    & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__all_round_finish) 
                       | (IData)(vlSelfRef.tb_fir__DOT__ss_tvalid)))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__flag_clr 
        = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_wdata_exit_ena) 
           | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_rdata_exit_ena));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2wdata_ena 
        = ((0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
           & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid) 
              & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__delay_finish 
        = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__all_round_finish) 
           & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__data_hsked));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req 
        = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__access_ctrl) 
           | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__access_tap) 
              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__access_data)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2rdata_ena 
        = ((0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
           & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
              & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_rstn 
        = (1U & (~ ((~ (IData)(vlSelfRef.tb_fir__DOT__axis_rst_n)) 
                    | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__delay_finish))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_exit_en 
        = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_idle_exit_en) 
           | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_clr_exit_en) 
              | ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now)) 
                 & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__delay_finish))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_idle_exit2rdata_ena 
        = (IData)((((0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)) 
                    & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)) 
                   & (IData)(vlSelfRef.tb_fir__DOT__arvalid)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_idle_exit2wdata_ena 
        = (IData)(((((0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)) 
                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)) 
                    & (IData)(vlSelfRef.tb_fir__DOT__awvalid)) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready)));
    vlSelfRef.tb_fir__DOT__tap_A = (0x3ffU & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap) 
                                              | (((vlSelfRef.tb_fir__DOT__araddr 
                                                   >> 2U) 
                                                  & (- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2rdata_ena)))) 
                                                 | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__addr_wr) 
                                                    & (- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena)))))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_exit_ena 
        = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2rdata_ena) 
           | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2wdata_ena) 
              | ((IData)((((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                           & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready)) 
                          & (IData)(vlSelfRef.tb_fir__DOT__rready))) 
                 | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena))));
    vlSelfRef.tb_fir__DOT__tap_EN = ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now)) 
                                     | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2rdata_ena) 
                                        | ((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                                           | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_idle_exit_ena 
        = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_idle_exit2rdata_ena) 
           | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_idle_exit2wdata_ena));
    vlSelfRef.tb_fir__DOT__tap_Do = ((- (IData)((IData)(vlSelfRef.tb_fir__DOT__tap_EN))) 
                                     & vlSelfRef.tb_fir__DOT__u_tap_ram_behave__DOT__ram
                                     [vlSelfRef.tb_fir__DOT__u_tap_ram_behave__DOT__r_A]);
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base 
        = (((QData)((IData)((- (IData)(((~ (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__one_round_finish)) 
                                        & (vlSelfRef.tb_fir__DOT__tap_Do 
                                           >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__one_round_finish)
                                          ? 0U : vlSelfRef.tb_fir__DOT__tap_Do))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 2U))) ? ((1U & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                     >> 1U)))
                                       ? ((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth))
                                           ? 0ULL : 
                                          (~ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base))
                                       : ((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth))
                                           ? (~ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base)
                                           : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 1U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 1U))) ? ((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth))
                                           ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 1U)
                                           : vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base)
                : ((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth))
                    ? vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[1U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 4U))) ? ((1U & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                     >> 3U)))
                                       ? ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 2U)))
                                           ? 0ULL : 
                                          (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 2U)))
                                       : ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 2U)))
                                           ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 2U))
                                           : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 3U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 3U))) ? ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 2U)))
                                           ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 3U)
                                           : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 2U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 2U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 2U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[2U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 6U))) ? ((1U & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                     >> 5U)))
                                       ? ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 4U)))
                                           ? 0ULL : 
                                          (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 4U)))
                                       : ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 4U)))
                                           ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 4U))
                                           : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 5U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 5U))) ? ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 4U)))
                                           ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 5U)
                                           : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 4U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 4U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 4U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[3U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 8U))) ? ((1U & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                     >> 7U)))
                                       ? ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 6U)))
                                           ? 0ULL : 
                                          (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 6U)))
                                       : ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 6U)))
                                           ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 6U))
                                           : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 7U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 7U))) ? ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 6U)))
                                           ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 7U)
                                           : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 6U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 6U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 6U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[4U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0xaU))) ? ((1U & (IData)(
                                                      (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                       >> 9U)))
                                         ? ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 8U)))
                                             ? 0ULL
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 8U)))
                                         : ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 8U)))
                                             ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 8U))
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 9U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 9U))) ? ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 8U)))
                                           ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 9U)
                                           : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 8U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 8U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 8U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[5U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0xcU))) ? ((1U & (IData)(
                                                      (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                       >> 0xbU)))
                                         ? ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xaU)))
                                             ? 0ULL
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xaU)))
                                         : ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xaU)))
                                             ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xaU))
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xbU))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0xbU))) ? ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xaU)))
                                             ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xbU)
                                             : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xaU))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0xaU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xaU)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[6U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0xeU))) ? ((1U & (IData)(
                                                      (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                       >> 0xdU)))
                                         ? ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xcU)))
                                             ? 0ULL
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xcU)))
                                         : ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xcU)))
                                             ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xcU))
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xdU))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0xdU))) ? ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xcU)))
                                             ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xdU)
                                             : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xcU))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0xcU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xcU)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[7U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x10U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0xfU)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0xeU)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xeU)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0xeU)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xeU))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xfU))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0xfU))) ? ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xeU)))
                                             ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xfU)
                                             : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xeU))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0xeU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xeU)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[8U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x12U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x11U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x10U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x10U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x10U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x10U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x11U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x11U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x10U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x11U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x10U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x10U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x10U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[9U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x14U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x13U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x12U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x12U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x12U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x12U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x13U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x13U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x12U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x13U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x12U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x12U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x12U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0xaU] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x16U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x15U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x14U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x14U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x14U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x14U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x15U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x15U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x14U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x15U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x14U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x14U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x14U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0xbU] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x18U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x17U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x16U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x16U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x16U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x16U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x17U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x17U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x16U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x17U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x16U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x16U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x16U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0xcU] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x1aU))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x19U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x18U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x18U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x18U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x18U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x19U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x19U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x18U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x19U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x18U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x18U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x18U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0xdU] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x1cU))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x1bU)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1aU)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1aU)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1aU)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1aU))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1bU))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x1bU))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1aU)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1bU)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1aU))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x1aU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1aU)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0xeU] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x1eU))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x1dU)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1cU)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1cU)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1cU)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1cU))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1dU))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x1dU))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1cU)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1dU)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1cU))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x1cU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1cU)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0xfU] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x20U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x1fU)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1eU)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1eU)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1eU)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1eU))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1fU))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x1fU))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1eU)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1fU)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1eU))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x1eU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1eU)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0x10U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x22U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x21U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x20U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x20U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x20U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x20U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x21U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x21U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x20U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x21U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x20U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x20U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x20U)
                    : 0ULL)));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__2(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__2\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0x3fdU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [1U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__stage_gp__out_p) 
                     << 1U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__3(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__3\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0x3f7U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [1U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__stage_gp__out_p) 
                     << 3U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__4(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__4\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0x3dfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [1U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__stage_gp__out_p) 
                     << 5U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__5(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__5\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0x37fU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [1U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_p) 
                     << 7U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__6(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__6\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[1U] 
        = ((0x1ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [1U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__stage_gp__out_p) 
                     << 9U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__7(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__7\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0x3f7U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [2U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__stage_gp__out_p) 
                     << 3U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__8(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__8\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[2U] 
        = ((0x37fU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [2U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_p) 
                     << 7U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__9(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__9\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[3U] 
        = ((0x37fU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [3U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_p) 
                     << 7U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__10(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__10\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[5U] 
        = ((0x3dfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [5U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__stage_gp__out_p) 
                     << 5U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__11(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__11\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0x3fbU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [6U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__stage_gp__out_p) 
                     << 2U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__12(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__12\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0x3efU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [6U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__stage_gp__out_p) 
                     << 4U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__13(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__13\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0x3bfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [6U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__stage_gp__out_p) 
                     << 6U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__14(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__14\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[6U] 
        = ((0x2ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [6U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__stage_gp__out_p) 
                     << 8U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__15(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__15\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0x3feU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [7U]) | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__stage_gp__in_p1));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__16(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__16\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0x3fdU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__stage_gp__in_p1) 
                     << 1U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__17(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__17\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0x3fbU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__stage_gp__in_p1) 
                     << 2U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__18(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__18\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0x3f7U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__stage_gp__in_p1) 
                     << 3U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__19(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__19\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0x3efU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__stage_gp__in_p1) 
                     << 4U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__20(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__20\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0x3dfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__stage_gp__in_p1) 
                     << 5U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__21(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__21\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0x3bfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__stage_gp__in_p1) 
                     << 6U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__22(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__22\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0x37fU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__in_p1) 
                     << 7U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__23(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__23\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0x2ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__stage_gp__in_p1) 
                     << 8U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__24(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__24\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P[7U] 
        = ((0x1ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__P
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__stage_gp__in_p1) 
                     << 9U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__25(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__25\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[1U] 
        = ((0x3feU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [1U]) | (1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [0U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[1U] 
        = ((0x3fbU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [1U]) | (4U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [0U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[1U] 
        = ((0x3efU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [1U]) | (0x10U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [0U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[1U] 
        = ((0x3bfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [1U]) | (0x40U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [0U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[1U] 
        = ((0x2ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [1U]) | (0x100U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [0U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[2U] 
        = ((0x3feU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [2U]) | (1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[2U] 
        = ((0x3fdU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [2U]) | (2U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[2U] 
        = ((0x3fbU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [2U]) | (4U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[2U] 
        = ((0x3efU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [2U]) | (0x10U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[2U] 
        = ((0x3dfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [2U]) | (0x20U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[2U] 
        = ((0x3bfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [2U]) | (0x40U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[2U] 
        = ((0x2ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [2U]) | (0x100U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[2U] 
        = ((0x1ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [2U]) | (0x200U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[3U] 
        = ((0x3feU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [3U]) | (1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[3U] 
        = ((0x3fdU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [3U]) | (2U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[3U] 
        = ((0x3fbU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [3U]) | (4U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[3U] 
        = ((0x3f7U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [3U]) | (8U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[3U] 
        = ((0x3efU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [3U]) | (0x10U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[3U] 
        = ((0x3dfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [3U]) | (0x20U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[3U] 
        = ((0x3bfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [3U]) | (0x40U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[3U] 
        = ((0x2ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [3U]) | (0x100U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[3U] 
        = ((0x1ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [3U]) | (0x200U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[4U] 
        = ((0x3feU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [4U]) | (1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[4U] 
        = ((0x3fdU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [4U]) | (2U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[4U] 
        = ((0x3fbU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [4U]) | (4U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[4U] 
        = ((0x3f7U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [4U]) | (8U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[4U] 
        = ((0x3efU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [4U]) | (0x10U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[4U] 
        = ((0x3dfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [4U]) | (0x20U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[4U] 
        = ((0x3bfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [4U]) | (0x40U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[4U] 
        = ((0x37fU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [4U]) | (0x80U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[4U] 
        = ((0x2ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [4U]) | (0x100U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[4U] 
        = ((0x1ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [4U]) | (0x200U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[5U] 
        = ((0x3feU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [5U]) | (1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[5U] 
        = ((0x3fdU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [5U]) | (2U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[5U] 
        = ((0x3fbU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [5U]) | (4U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[5U] 
        = ((0x3f7U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [5U]) | (8U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[5U] 
        = ((0x3efU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [5U]) | (0x10U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[5U] 
        = ((0x3bfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [5U]) | (0x40U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[5U] 
        = ((0x37fU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [5U]) | (0x80U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[5U] 
        = ((0x2ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [5U]) | (0x100U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[5U] 
        = ((0x1ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [5U]) | (0x200U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[6U] 
        = ((0x3feU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [6U]) | (1U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [5U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[6U] 
        = ((0x3fdU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [6U]) | (2U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [5U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[6U] 
        = ((0x3f7U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [6U]) | (8U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [5U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[6U] 
        = ((0x3dfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [6U]) | (0x20U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [5U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[6U] 
        = ((0x37fU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [6U]) | (0x80U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [5U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[6U] 
        = ((0x1ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [6U]) | (0x200U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
                     [5U]));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__26(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__26\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[1U] 
        = ((0x3fdU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [1U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 1U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__27(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__27\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[1U] 
        = ((0x3f7U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [1U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 3U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__28(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__28\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[1U] 
        = ((0x3dfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [1U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 5U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__29(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__29\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[1U] 
        = ((0x37fU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [1U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 7U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__30(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__30\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[1U] 
        = ((0x1ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [1U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 9U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__31(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__31\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[2U] 
        = ((0x3f7U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [2U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 3U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__32(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__32\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[2U] 
        = ((0x37fU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [2U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 7U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__33(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__33\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[3U] 
        = ((0x37fU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [3U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 7U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__34(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__34\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[5U] 
        = ((0x3dfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [5U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 5U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__35(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__35\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[6U] 
        = ((0x3fbU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [6U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 2U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__36(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__36\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[6U] 
        = ((0x3efU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [6U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 4U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__37(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__37\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[6U] 
        = ((0x3bfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [6U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 6U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__38(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__38\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[6U] 
        = ((0x2ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [6U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 8U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__39(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__39\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[7U] 
        = ((0x3feU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [7U]) | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__stage_gp__out_g));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__40(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__40\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[7U] 
        = ((0x3fdU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 1U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__41(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__41\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[7U] 
        = ((0x3fbU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 2U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__42(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__42\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[7U] 
        = ((0x3f7U & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 3U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__43(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__43\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[7U] 
        = ((0x3efU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 4U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__44(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__44\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[7U] 
        = ((0x3dfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 5U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__45(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__45\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[7U] 
        = ((0x3bfU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 6U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__46(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__46\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[7U] 
        = ((0x37fU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 7U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__47(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__47\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[7U] 
        = ((0x2ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 8U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__48(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__48\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G[7U] 
        = ((0x1ffU & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT__G
            [7U]) | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u2_brent_kung_adder_nbit__DOT____Vcellout__genblk2__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__genblk1__DOT__stage_gp__out_g) 
                     << 9U));
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__50(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__50\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [5U][1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [5U][0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [4U][2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [4U][1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [4U][0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [3U][3U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [3U][2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [3U][1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [3U][0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][5U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][4U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][3U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[8U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][8U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[7U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][7U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[6U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][6U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][5U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][4U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][3U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0xcU] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][0xcU];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0xbU] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][0xbU];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0xaU] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][0xaU];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[9U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][9U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[8U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][8U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[7U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][7U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[6U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][6U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][5U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][4U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][3U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
        [1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[6U][1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__op_temp[6U][0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__6__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0U];
}

VL_INLINE_OPT void Vtb_fir___024root___act_sequent__TOP__52(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___act_sequent__TOP__52\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [4U][2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [4U][1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [4U][0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [3U][3U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [3U][2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [3U][1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [3U][0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][5U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][4U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][3U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [2U][0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[7U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][7U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[6U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][6U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][5U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][4U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][3U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [1U][0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0xbU] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][0xbU];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0xaU] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][0xaU];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[9U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][9U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[8U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][8U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[7U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][7U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[6U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][6U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[5U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][5U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[4U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][4U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[3U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][3U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp
        [0U][0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [1U]) | 
                                          ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [1U] | 
                                            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [0U]) & 
                                           vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [2U])), 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
           [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [1U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [1U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [2U]) | 
                                          ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [2U] | 
                                            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [1U]) & 
                                           vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [3U])), 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1U] 
        = (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
           [1U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [2U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [3U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [1U]) | 
                                          ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [1U] | 
                                            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [0U]) & 
                                           vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [2U])), 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
           [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [1U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [3U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [4U]) | 
                                          ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [4U] | 
                                            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [3U]) & 
                                           vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [5U])), 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2U] 
        = (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
           [3U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [4U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [5U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
        [1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [2U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [3U]) | 
                                          ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [3U] | 
                                            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [2U]) & 
                                           vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [4U])), 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2U] 
        = (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
           [2U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [3U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [4U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[5U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [5U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [6U]) | 
                                          ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [6U] | 
                                            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [5U]) & 
                                           vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [7U])), 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[4U] 
        = (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
           [5U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [6U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [7U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[1U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [0U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [1U]) | 
                                          ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [1U] | 
                                            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [0U]) & 
                                           vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [2U])), 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
           [0U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [1U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [2U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[3U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [3U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [4U]) | 
                                          ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [4U] | 
                                            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [3U]) & 
                                           vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [5U])), 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[2U] 
        = (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
           [3U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [4U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [5U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[5U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [6U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [7U]) | 
                                          ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [7U] | 
                                            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                            [6U]) & 
                                           vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [8U])), 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[4U] 
        = (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
           [6U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [7U] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [8U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[7U] 
        = (0x1fU & VL_SHIFTL_III(5,5,32, ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [9U] & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                           [0xaU]) 
                                          | ((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [0xaU] 
                                              | vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                              [9U]) 
                                             & vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                                             [0xbU])), 1U));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[6U] 
        = (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
           [9U] ^ (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [0xaU] ^ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__in_op
                   [0xbU]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[5U][1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[5U][0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__5__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[4U][2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[4U][1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[4U][0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__4__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[3U][3U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [3U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[3U][2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[3U][1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[3U][0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[2U][5U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [5U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[2U][4U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [4U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[2U][3U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [3U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[2U][2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[2U][1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[2U][0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [0U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][7U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [7U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][6U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [6U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][5U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [5U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][4U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [4U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][3U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [3U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][2U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [2U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][1U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
        [1U];
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__op_temp[1U][0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op
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
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0x11U] 
        = (QData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_sum
                          [0U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0x12U] 
        = (QData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_sum
                          [1U]));
}

VL_INLINE_OPT void Vtb_fir___024root___nba_sequent__TOP__1(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___nba_sequent__TOP__1\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v0;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v0 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v1;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v1 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v2;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v2 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v3;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v3 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v4;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v4 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v5;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v5 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v6;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v6 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v7;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v7 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v8;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v8 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v9;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v9 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v10;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v10 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v11;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v11 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v12;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v12 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v13;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v13 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v14;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v14 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v15;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v15 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v16;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v16 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v17;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v17 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v18;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v18 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg__v0;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg__v0 = 0;
    QData/*63:0*/ __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg__v1;
    __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg__v1 = 0;
    // Body
    if (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_rstn) {
        if (vlSelfRef.tb_fir__DOT__sm_tready) {
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg__v0 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder
                [1U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg__v1 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder
                [0U];
            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__valid_flag 
                = ((2U & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__valid_flag) 
                          << 1U)) | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__one_round_finish));
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v0 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [0x12U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v1 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [0x11U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v2 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [0x10U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v3 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [0xfU];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v4 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [0xeU];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v5 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [0xdU];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v6 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [0xcU];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v7 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [0xbU];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v8 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [0xaU];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v9 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [9U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v10 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [8U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v11 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [7U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v12 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [6U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v13 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [5U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v14 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [4U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v15 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [3U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v16 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [2U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v17 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [1U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v18 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate
                [0U];
        } else {
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg__v0 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg
                [1U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg__v1 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg
                [0U];
            vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__valid_flag 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__valid_flag;
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v0 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [0x12U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v1 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [0x11U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v2 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [0x10U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v3 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [0xfU];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v4 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [0xeU];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v5 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [0xdU];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v6 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [0xcU];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v7 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [0xbU];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v8 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [0xaU];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v9 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [9U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v10 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [8U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v11 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [7U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v12 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [6U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v13 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [5U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v14 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [4U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v15 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [3U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v16 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [2U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v17 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [1U];
            __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v18 
                = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
                [0U];
        }
    } else {
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg__v0 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg__v1 = 0ULL;
        vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__valid_flag = 0U;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v0 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v1 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v2 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v3 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v4 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v5 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v6 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v7 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v8 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v9 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v10 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v11 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v12 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v13 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v14 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v15 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v16 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v17 = 0ULL;
        __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v18 = 0ULL;
    }
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg[1U] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg__v0;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg[0U] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_adder_reg__v1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[0x12U] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v0;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[0x11U] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v1;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[0x10U] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v2;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[0xfU] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v3;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[0xeU] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v4;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[0xdU] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v5;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[0xcU] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v6;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[0xbU] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v7;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[0xaU] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v8;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[9U] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v9;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[8U] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v10;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[7U] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v11;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[6U] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v12;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[5U] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v13;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[4U] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v14;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[3U] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v15;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[2U] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v16;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[1U] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v17;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg[0U] 
        = __VdlyVal__tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg__v18;
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__genblk1__DOT__u_op_n_to_2_nbit_onestage__out_op[0U] 
        = vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate_reg
        [0U];
}

VL_INLINE_OPT void Vtb_fir___024root___nba_sequent__TOP__3(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___nba_sequent__TOP__3\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v0;
    __VdlyVal__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v0;
    __VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v0;
    __VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v0 = 0;
    SData/*8:0*/ __VdlyVal__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v1;
    __VdlyVal__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v1 = 0;
    SData/*9:0*/ __VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v1;
    __VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v1;
    __VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v1 = 0;
    SData/*8:0*/ __VdlyVal__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v2;
    __VdlyVal__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v2 = 0;
    SData/*9:0*/ __VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v2;
    __VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v2;
    __VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v2 = 0;
    SData/*8:0*/ __VdlyVal__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v3;
    __VdlyVal__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v3 = 0;
    SData/*9:0*/ __VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v3;
    __VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v3;
    __VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v3 = 0;
    // Body
    __VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v0 = 0U;
    __VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v1 = 0U;
    __VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v2 = 0U;
    __VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v3 = 0U;
    if (((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__core_clr_wait) 
         | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__stream_data_EN))) {
        vlSelfRef.tb_fir__DOT__u_data_ram_behave__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x3ffU, vlSelfRef.tb_fir__DOT__u_data_ram_behave__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.tb_fir__DOT__u_data_ram_behave__DOT__ram[(0x3ffU 
                                                                & ((IData)(1U) 
                                                                   + vlSelfRef.tb_fir__DOT__u_data_ram_behave__DOT__unnamedblk1__DOT__i))] 
                = vlSelfRef.tb_fir__DOT__u_data_ram_behave__DOT__ram
                [(0x3ffU & vlSelfRef.tb_fir__DOT__u_data_ram_behave__DOT__unnamedblk1__DOT__i)];
            vlSelfRef.tb_fir__DOT__u_data_ram_behave__DOT__ram[0U] 
                = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__core_clr_wait)
                    ? 0U : ((- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__stream_data_EN))) 
                            & vlSelfRef.tb_fir__DOT__ss_tdata));
            vlSelfRef.tb_fir__DOT__u_data_ram_behave__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_fir__DOT__u_data_ram_behave__DOT__unnamedblk1__DOT__i);
        }
    }
    if (vlSelfRef.tb_fir__DOT__tap_EN) {
        if (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena) {
            __VdlyVal__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v0 
                = (0xffU & ((- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena))) 
                            & vlSelfRef.tb_fir__DOT__wdata));
            __VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v0 
                = vlSelfRef.tb_fir__DOT__tap_A;
            __VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v0 = 1U;
            __VdlyVal__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v1 
                = (0x1ffU & (((- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena))) 
                              & vlSelfRef.tb_fir__DOT__wdata) 
                             >> 7U));
            __VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v1 
                = vlSelfRef.tb_fir__DOT__tap_A;
            __VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v1 = 1U;
            __VdlyVal__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v2 
                = (0x1ffU & (((- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena))) 
                              & vlSelfRef.tb_fir__DOT__wdata) 
                             >> 0xfU));
            __VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v2 
                = vlSelfRef.tb_fir__DOT__tap_A;
            __VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v2 = 1U;
            __VdlyVal__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v3 
                = (((- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena))) 
                    & vlSelfRef.tb_fir__DOT__wdata) 
                   >> 0x17U);
            __VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v3 
                = vlSelfRef.tb_fir__DOT__tap_A;
            __VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v3 = 1U;
        }
        vlSelfRef.tb_fir__DOT__u_tap_ram_behave__DOT__r_A 
            = vlSelfRef.tb_fir__DOT__tap_A;
    }
    if (__VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v0) {
        vlSelfRef.tb_fir__DOT__u_tap_ram_behave__DOT__ram[__VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v0] 
            = ((0xffffff00U & vlSelfRef.tb_fir__DOT__u_tap_ram_behave__DOT__ram
                [__VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v0]) 
               | (IData)(__VdlyVal__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v0));
    }
    if (__VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v1) {
        vlSelfRef.tb_fir__DOT__u_tap_ram_behave__DOT__ram[__VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v1] 
            = ((0xffff007fU & vlSelfRef.tb_fir__DOT__u_tap_ram_behave__DOT__ram
                [__VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v1]) 
               | ((IData)(__VdlyVal__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v1) 
                  << 7U));
    }
    if (__VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v2) {
        vlSelfRef.tb_fir__DOT__u_tap_ram_behave__DOT__ram[__VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v2] 
            = ((0xff007fffU & vlSelfRef.tb_fir__DOT__u_tap_ram_behave__DOT__ram
                [__VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v2]) 
               | ((IData)(__VdlyVal__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v2) 
                  << 0xfU));
    }
    if (__VdlySet__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v3) {
        vlSelfRef.tb_fir__DOT__u_tap_ram_behave__DOT__ram[__VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v3] 
            = ((0x7fffffU & vlSelfRef.tb_fir__DOT__u_tap_ram_behave__DOT__ram
                [__VdlyDim0__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v3]) 
               | ((IData)(__VdlyVal__tb_fir__DOT__u_tap_ram_behave__DOT__ram__v3) 
                  << 0x17U));
    }
}

VL_INLINE_OPT void Vtb_fir___024root___nba_comb__TOP__0(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___nba_comb__TOP__0\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid 
        = ((3U == (vlSelfRef.tb_fir__DOT__awaddr >> 0x1cU)) 
           & (IData)(vlSelfRef.tb_fir__DOT__awvalid));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid 
        = ((3U == (vlSelfRef.tb_fir__DOT__araddr >> 0x1cU)) 
           & (IData)(vlSelfRef.tb_fir__DOT__arvalid));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__access_ctrl 
        = (((0U == (vlSelfRef.tb_fir__DOT__awaddr >> 0x1cU)) 
            & (IData)(vlSelfRef.tb_fir__DOT__awvalid)) 
           | ((0U == (vlSelfRef.tb_fir__DOT__araddr 
                      >> 0x1cU)) & (IData)(vlSelfRef.tb_fir__DOT__arvalid)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__access_tap 
        = (((1U == (vlSelfRef.tb_fir__DOT__awaddr >> 0x1cU)) 
            & (IData)(vlSelfRef.tb_fir__DOT__awvalid)) 
           | ((1U == (vlSelfRef.tb_fir__DOT__araddr 
                      >> 0x1cU)) & (IData)(vlSelfRef.tb_fir__DOT__arvalid)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__access_data 
        = (((2U == (vlSelfRef.tb_fir__DOT__awaddr >> 0x1cU)) 
            & (IData)(vlSelfRef.tb_fir__DOT__awvalid)) 
           | ((2U == (vlSelfRef.tb_fir__DOT__araddr 
                      >> 0x1cU)) & (IData)(vlSelfRef.tb_fir__DOT__arvalid)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req 
        = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__access_ctrl) 
           | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__access_tap) 
              | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__access_data)));
}

VL_INLINE_OPT void Vtb_fir___024root___nba_comb__TOP__1(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___nba_comb__TOP__1\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__data_hsked 
        = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__valid_shifter_final) 
           & (IData)(vlSelfRef.tb_fir__DOT__sm_tready));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_rdata_exit_ena 
        = (IData)(((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)) 
                   & (IData)(vlSelfRef.tb_fir__DOT__rready)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__stall 
        = (1U & (~ ((IData)(vlSelfRef.tb_fir__DOT__sm_tready) 
                    & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__all_round_finish) 
                       | (IData)(vlSelfRef.tb_fir__DOT__ss_tvalid)))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_wdata_exit_ena 
        = (IData)((((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)) 
                    & (IData)(vlSelfRef.tb_fir__DOT__wvalid)) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena 
        = (IData)((((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                    & (IData)(vlSelfRef.tb_fir__DOT__wvalid)) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2wdata_ena 
        = ((0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
           & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_awvalid) 
              & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2rdata_ena 
        = ((0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
           & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arvalid) 
              & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__bram_s_arready)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_idle_exit2rdata_ena 
        = (IData)((((0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)) 
                    & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)) 
                   & (IData)(vlSelfRef.tb_fir__DOT__arvalid)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_idle_exit2wdata_ena 
        = (IData)(((((0U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_now)) 
                     & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__conf_req)) 
                    & (IData)(vlSelfRef.tb_fir__DOT__awvalid)) 
                   & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__delay_finish 
        = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__all_round_finish) 
           & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__data_hsked));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__flag_clr 
        = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_wdata_exit_ena) 
           | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_rdata_exit_ena));
    vlSelfRef.tb_fir__DOT__tap_A = (0x3ffU & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap) 
                                              | (((vlSelfRef.tb_fir__DOT__araddr 
                                                   >> 2U) 
                                                  & (- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2rdata_ena)))) 
                                                 | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__addr_wr) 
                                                    & (- (IData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena)))))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_exit_ena 
        = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2rdata_ena) 
           | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2wdata_ena) 
              | ((IData)((((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                           & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__arbit_awready)) 
                          & (IData)(vlSelfRef.tb_fir__DOT__rready))) 
                 | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena))));
    vlSelfRef.tb_fir__DOT__tap_EN = ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now)) 
                                     | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_idle_exit2rdata_ena) 
                                        | ((1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_now)) 
                                           | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_bram__DOT__state_wdata_exit_ena))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_idle_exit_ena 
        = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_idle_exit2rdata_ena) 
           | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__state_idle_exit2wdata_ena));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__mul_rstn 
        = (1U & (~ ((~ (IData)(vlSelfRef.tb_fir__DOT__axis_rst_n)) 
                    | (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__delay_finish))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_exit_en 
        = ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_idle_exit_en) 
           | ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_clr_exit_en) 
              | ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now)) 
                 & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__delay_finish))));
    vlSelfRef.tb_fir__DOT__tap_Do = ((- (IData)((IData)(vlSelfRef.tb_fir__DOT__tap_EN))) 
                                     & vlSelfRef.tb_fir__DOT__u_tap_ram_behave__DOT__ram
                                     [vlSelfRef.tb_fir__DOT__u_tap_ram_behave__DOT__r_A]);
}

VL_INLINE_OPT void Vtb_fir___024root___nba_sequent__TOP__4(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___nba_sequent__TOP__4\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__one_round_finish 
        = ((2U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now)) 
           & ((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_axi4_lite_slave__DOT__u_axi4_lite_slave_conf__DOT__conf_reg_tap) 
              == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__counter_tap)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0x11U] 
        = (QData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_sum
                          [0U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0x12U] 
        = (QData)((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__neg_sum
                          [1U]));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__core_clr_wait 
        = ((~ (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_clr_exit_en)) 
           & (1U == (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__state_now)));
}

VL_INLINE_OPT void Vtb_fir___024root___nba_comb__TOP__4(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___nba_comb__TOP__4\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base 
        = (((QData)((IData)((- (IData)(((~ (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__one_round_finish)) 
                                        & (vlSelfRef.tb_fir__DOT__tap_Do 
                                           >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__one_round_finish)
                                          ? 0U : vlSelfRef.tb_fir__DOT__tap_Do))));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 2U))) ? ((1U & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                     >> 1U)))
                                       ? ((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth))
                                           ? 0ULL : 
                                          (~ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base))
                                       : ((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth))
                                           ? (~ vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base)
                                           : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 1U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 1U))) ? ((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth))
                                           ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 1U)
                                           : vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base)
                : ((1U & (IData)(vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth))
                    ? vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[1U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 4U))) ? ((1U & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                     >> 3U)))
                                       ? ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 2U)))
                                           ? 0ULL : 
                                          (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 2U)))
                                       : ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 2U)))
                                           ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 2U))
                                           : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 3U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 3U))) ? ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 2U)))
                                           ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 3U)
                                           : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 2U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 2U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 2U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[2U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 6U))) ? ((1U & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                     >> 5U)))
                                       ? ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 4U)))
                                           ? 0ULL : 
                                          (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 4U)))
                                       : ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 4U)))
                                           ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 4U))
                                           : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 5U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 5U))) ? ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 4U)))
                                           ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 5U)
                                           : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 4U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 4U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 4U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[3U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 8U))) ? ((1U & (IData)(
                                                    (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                     >> 7U)))
                                       ? ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 6U)))
                                           ? 0ULL : 
                                          (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 6U)))
                                       : ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 6U)))
                                           ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 6U))
                                           : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 7U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 7U))) ? ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 6U)))
                                           ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 7U)
                                           : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 6U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 6U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 6U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[4U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0xaU))) ? ((1U & (IData)(
                                                      (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                       >> 9U)))
                                         ? ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 8U)))
                                             ? 0ULL
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 8U)))
                                         : ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 8U)))
                                             ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 8U))
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 9U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 9U))) ? ((1U & (IData)(
                                                        (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                         >> 8U)))
                                           ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 9U)
                                           : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 8U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 8U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 8U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[5U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0xcU))) ? ((1U & (IData)(
                                                      (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                       >> 0xbU)))
                                         ? ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xaU)))
                                             ? 0ULL
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xaU)))
                                         : ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xaU)))
                                             ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xaU))
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xbU))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0xbU))) ? ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xaU)))
                                             ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xbU)
                                             : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xaU))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0xaU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xaU)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[6U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0xeU))) ? ((1U & (IData)(
                                                      (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                       >> 0xdU)))
                                         ? ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xcU)))
                                             ? 0ULL
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xcU)))
                                         : ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xcU)))
                                             ? (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xcU))
                                             : (~ VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xdU))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0xdU))) ? ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xcU)))
                                             ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xdU)
                                             : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xcU))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0xcU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xcU)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[7U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x10U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0xfU)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0xeU)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xeU)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0xeU)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xeU))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xfU))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0xfU))) ? ((1U & (IData)(
                                                          (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                           >> 0xeU)))
                                             ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xfU)
                                             : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xeU))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0xeU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0xeU)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[8U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x12U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x11U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x10U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x10U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x10U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x10U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x11U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x11U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x10U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x11U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x10U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x10U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x10U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[9U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x14U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x13U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x12U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x12U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x12U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x12U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x13U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x13U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x12U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x13U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x12U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x12U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x12U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0xaU] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x16U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x15U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x14U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x14U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x14U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x14U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x15U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x15U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x14U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x15U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x14U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x14U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x14U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0xbU] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x18U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x17U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x16U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x16U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x16U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x16U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x17U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x17U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x16U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x17U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x16U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x16U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x16U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0xcU] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x1aU))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x19U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x18U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x18U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x18U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x18U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x19U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x19U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x18U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x19U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x18U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x18U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x18U)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0xdU] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x1cU))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x1bU)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1aU)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1aU)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1aU)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1aU))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1bU))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x1bU))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1aU)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1bU)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1aU))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x1aU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1aU)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0xeU] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x1eU))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x1dU)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1cU)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1cU)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1cU)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1cU))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1dU))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x1dU))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1cU)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1dU)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1cU))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x1cU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1cU)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0xfU] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x20U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x1fU)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1eU)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1eU)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1eU)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1eU))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1fU))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x1fU))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x1eU)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1fU)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1eU))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x1eU))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x1eU)
                    : 0ULL)));
    vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__op_generate[0x10U] 
        = ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                          >> 0x22U))) ? ((1U & (IData)(
                                                       (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                        >> 0x21U)))
                                          ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x20U)))
                                              ? 0ULL
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x20U)))
                                          : ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x20U)))
                                              ? (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x20U))
                                              : (~ 
                                                 VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x21U))))
            : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                              >> 0x21U))) ? ((1U & (IData)(
                                                           (vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                                            >> 0x20U)))
                                              ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x21U)
                                              : VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x20U))
                : ((1U & (IData)((vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multiplier_booth 
                                  >> 0x20U))) ? VL_SHIFTL_QQI(64,64,32, vlSelfRef.tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__multipicand_base, 0x20U)
                    : 0ULL)));
}

void Vtb_fir___024root___timing_commit(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___timing_commit\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x400000ULL & vlSelfRef.__VactTriggered.word(8U)))) {
        vlSelfRef.__VtrigSched_h24927824__0.commit(
                                                   "@(posedge tb_fir.axis_clk)");
    }
    if ((! (0x4000000ULL & vlSelfRef.__VactTriggered.word(8U)))) {
        vlSelfRef.__VtrigSched_h4138e8c0__0.commit(
                                                   "@( tb_fir.axis_rst_n)");
    }
    if ((! (0x8000000ULL & vlSelfRef.__VactTriggered.word(8U)))) {
        vlSelfRef.__VtrigSched_h2b2d7b2d__0.commit(
                                                   "@( tb_fir.fir_DUT.u_fir_core.valid_shifter_final)");
    }
}

void Vtb_fir___024root___timing_resume(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___timing_resume\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(8U))) {
        vlSelfRef.__VtrigSched_h24927824__0.resume(
                                                   "@(posedge tb_fir.axis_clk)");
    }
    if ((0x4000000ULL & vlSelfRef.__VactTriggered.word(8U))) {
        vlSelfRef.__VtrigSched_h4138e8c0__0.resume(
                                                   "@( tb_fir.axis_rst_n)");
    }
    if ((0x8000000ULL & vlSelfRef.__VactTriggered.word(8U))) {
        vlSelfRef.__VtrigSched_h2b2d7b2d__0.resume(
                                                   "@( tb_fir.fir_DUT.u_fir_core.valid_shifter_final)");
    }
    if ((0x2000000ULL & vlSelfRef.__VactTriggered.word(8U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_fir___024root___eval_triggers__act(Vtb_fir___024root* vlSelf);
void Vtb_fir___024root___eval_act(Vtb_fir___024root* vlSelf);

bool Vtb_fir___024root___eval_phase__act(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___eval_phase__act\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<540> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fir___024root___eval_triggers__act(vlSelf);
    Vtb_fir___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_fir___024root___timing_resume(vlSelf);
        Vtb_fir___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtb_fir___024root___eval_nba(Vtb_fir___024root* vlSelf);

bool Vtb_fir___024root___eval_phase__nba(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___eval_phase__nba\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_fir___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fir___024root___dump_triggers__nba(Vtb_fir___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fir___024root___dump_triggers__act(Vtb_fir___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fir___024root___eval(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___eval\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fir___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/tb_fir.sv", 23, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_fir___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/tb_fir.sv", 23, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_fir___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_fir___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_fir___024root___eval_debug_assertions(Vtb_fir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir___024root___eval_debug_assertions\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
