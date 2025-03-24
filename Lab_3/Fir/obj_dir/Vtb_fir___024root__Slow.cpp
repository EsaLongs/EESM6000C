// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fir.h for the primary calling header

#include "Vtb_fir__pch.h"
#include "Vtb_fir__Syms.h"
#include "Vtb_fir___024root.h"

// Parameter definitions for Vtb_fir___024root
constexpr VlUnpacked<IData/*31:0*/, 7> Vtb_fir___024root::tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_booth4_op_generator__DOT__u_op_n_to_2_nbit__DOT__OP_NUM_STAGE;
constexpr VlUnpacked<IData/*31:0*/, 8> Vtb_fir___024root::tb_fir__DOT__fir_DUT__DOT__u_fir_core__DOT__u_booth4wallace_multiplier_nbit__DOT__u_op_n_to_2_nbit__DOT__OP_NUM_STAGE;


void Vtb_fir___024root___ctor_var_reset(Vtb_fir___024root* vlSelf);

Vtb_fir___024root::Vtb_fir___024root(Vtb_fir__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_fir___024root___ctor_var_reset(this);
}

void Vtb_fir___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_fir___024root::~Vtb_fir___024root() {
}
