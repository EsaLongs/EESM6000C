// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fir.h for the primary calling header

#include "Vtb_fir__pch.h"
#include "Vtb_fir__Syms.h"
#include "Vtb_fir_op_3_to_2_nbit.h"

void Vtb_fir_op_3_to_2_nbit___ctor_var_reset(Vtb_fir_op_3_to_2_nbit* vlSelf);

Vtb_fir_op_3_to_2_nbit::Vtb_fir_op_3_to_2_nbit(Vtb_fir__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_fir_op_3_to_2_nbit___ctor_var_reset(this);
}

void Vtb_fir_op_3_to_2_nbit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_fir_op_3_to_2_nbit::~Vtb_fir_op_3_to_2_nbit() {
}
