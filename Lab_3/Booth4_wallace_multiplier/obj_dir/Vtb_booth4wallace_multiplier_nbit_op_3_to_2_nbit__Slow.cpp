// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_booth4wallace_multiplier_nbit.h for the primary calling header

#include "Vtb_booth4wallace_multiplier_nbit__pch.h"
#include "Vtb_booth4wallace_multiplier_nbit__Syms.h"
#include "Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit.h"

void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___ctor_var_reset(Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit* vlSelf);

Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit::Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit(Vtb_booth4wallace_multiplier_nbit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit___ctor_var_reset(this);
}

void Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit::~Vtb_booth4wallace_multiplier_nbit_op_3_to_2_nbit() {
}
