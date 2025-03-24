// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fir.h for the primary calling header

#include "Vtb_fir__pch.h"
#include "Vtb_fir_op_3_to_2_nbit.h"

VL_ATTR_COLD void Vtb_fir_op_3_to_2_nbit___ctor_var_reset(Vtb_fir_op_3_to_2_nbit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtb_fir_op_3_to_2_nbit___ctor_var_reset\n"); );
    Vtb_fir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->in_op1 = VL_RAND_RESET_Q(64);
    vlSelf->in_op2 = VL_RAND_RESET_Q(64);
    vlSelf->in_op3 = VL_RAND_RESET_Q(64);
    vlSelf->out_op1 = VL_RAND_RESET_Q(64);
    vlSelf->out_op2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__cout = VL_RAND_RESET_Q(64);
}
