// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_booth4wallace_multiplier_nbit.h for the primary calling header

#include "Vtb_booth4wallace_multiplier_nbit__pch.h"
#include "Vtb_booth4wallace_multiplier_nbit__Syms.h"
#include "Vtb_booth4wallace_multiplier_nbit___024root.h"

// Parameter definitions for Vtb_booth4wallace_multiplier_nbit___024root
constexpr VlUnpacked<IData/*31:0*/, 7> Vtb_booth4wallace_multiplier_nbit___024root::tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__OP_NUM_STAGE;
constexpr VlUnpacked<IData/*31:0*/, 8> Vtb_booth4wallace_multiplier_nbit___024root::tb_booth4wallace_multiplier_nbit__DOT__dut__DOT__u_op_n_to_2_nbit__DOT__OP_NUM_STAGE;


void Vtb_booth4wallace_multiplier_nbit___024root___ctor_var_reset(Vtb_booth4wallace_multiplier_nbit___024root* vlSelf);

Vtb_booth4wallace_multiplier_nbit___024root::Vtb_booth4wallace_multiplier_nbit___024root(Vtb_booth4wallace_multiplier_nbit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_booth4wallace_multiplier_nbit___024root___ctor_var_reset(this);
}

void Vtb_booth4wallace_multiplier_nbit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_booth4wallace_multiplier_nbit___024root::~Vtb_booth4wallace_multiplier_nbit___024root() {
}
