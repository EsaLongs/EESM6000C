#include "fir.h"
#include "defs.h"
#include <stdint.h>

void __attribute__ ( ( section ( ".mprjram" ) ) ) initfir() {

    reg_fir_dlength = N;
    reg_fir_tnum    = 11;

    for (uint32_t i = 0; i < 11; i++) {
        reg_fir_coeff(i) = taps[i];
    }
}

int* __attribute__ ( ( section ( ".mprjram" ) ) ) fir(){
    
	initfir();
	// ** write down your fir
	reg_fir_control = 0x00000001;
	
	reg_mprj_datal = 0x00A50000;  // start Testbench
	
	for (int i = 1; i <= N; i++) {
		reg_fir_x = i;
		outputsignal[i] = reg_fir_y;
	}
	
	reg_mprj_datal = (outputsignal[N] << 24) + 0x005A0000;  // end Testbench
	
	return outputsignal;
}
	