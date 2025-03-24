// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fir.h for the primary calling header

#include "Vtb_fir__pch.h"
#include "Vtb_fir__Syms.h"
#include "Vtb_fir_brent_kung_adder_nbit__A40.h"

void Vtb_fir_brent_kung_adder_nbit__A40___ctor_var_reset(Vtb_fir_brent_kung_adder_nbit__A40* vlSelf);

Vtb_fir_brent_kung_adder_nbit__A40::Vtb_fir_brent_kung_adder_nbit__A40(Vtb_fir__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_fir_brent_kung_adder_nbit__A40___ctor_var_reset(this);
}

void Vtb_fir_brent_kung_adder_nbit__A40::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_fir_brent_kung_adder_nbit__A40::~Vtb_fir_brent_kung_adder_nbit__A40() {
}
