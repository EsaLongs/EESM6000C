// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fir.h for the primary calling header

#ifndef VERILATED_VTB_FIR_OP_3_TO_2_NBIT_H_
#define VERILATED_VTB_FIR_OP_3_TO_2_NBIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fir__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fir_op_3_to_2_nbit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN64(in_op1,63,0);
    VL_IN64(in_op2,63,0);
    VL_IN64(in_op3,63,0);
    VL_OUT64(out_op1,63,0);
    VL_OUT64(out_op2,63,0);
    QData/*63:0*/ __PVT__cout;

    // INTERNAL VARIABLES
    Vtb_fir__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_fir_op_3_to_2_nbit(Vtb_fir__Syms* symsp, const char* v__name);
    ~Vtb_fir_op_3_to_2_nbit();
    VL_UNCOPYABLE(Vtb_fir_op_3_to_2_nbit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
