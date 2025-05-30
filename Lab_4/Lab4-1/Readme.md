# Lab4-1 Report

## 1. Relevant Code Changes from RTL/Firmware

### 1.1 FIR Implementation (fir.c and fir.h)
The FIR filter is implemented with two functions in fir.c:
```c
void __attribute__((section(".mprjram"))) initfir() {
    //initial your fir
    for(int i = 0; i < N; i = i + 1) {
        inputbuffer[i]  = 0;
        outputsignal[i] = 0;
    }
}

int* __attribute__((section(".mprjram"))) fir() {
    initfir();
    //write down your fir
    for(int i = 0; i < N; i = i + 1) {
        int fir_result = 0;
        inputbuffer[i] = inputsignal[i];
        for(int j = 0; j <= i ; j = j + 1) {
            fir_result += inputbuffer[j] * taps[i-j];
        }
        outputsignal[i] = fir_result;
    }
    return outputsignal;
}
```

The fir.h file defines filter parameters and data arrays:
```c
#define N 11

    int taps[N] = {0,-10,-9,23,56,63,56,23,-9,-10,0};
    int inputbuffer[N];
    int inputsignal[N] = {1,2,3,4,5,6,7,8,9,10,11};
    int outputsignal[N];
```

### 1.2 BRAM Implementation (bram.v)
```verilog
module bram(
    CLK, WE0, EN0, Di0, Do0, A0
);
    // 16 kB
    parameter N = 13;
    (* ram_style = "block" *) reg [31:0] RAM[0:2**N-1];
    
    // Memory read/write logic
    always @(posedge CLK)
        if(EN0) begin
            Do0 <= RAM[A0[N-1:0]];
            if(WE0[0]) RAM[A0[N-1:0]][7:0] <= Di0[7:0];
            if(WE0[1]) RAM[A0[N-1:0]][15:8] <= Di0[15:8];
            if(WE0[2]) RAM[A0[N-1:0]][23:16] <= Di0[23:16];
            if(WE0[3]) RAM[A0[N-1:0]][31:24] <= Di0[31:24];
        end
        else
            Do0 <= 32'b0;
endmodule
```

Key points:
- 16KB BRAM implementation (2^13 entries × 32 bits)
- Byte-addressable with individual write enable signals
- Synchronous read/write with single clock

### 1.3 Wishbone Interface Controller (user_proj_example.counter.v)
```verilog
module user_proj_example #(
    parameter BITS   = 32,
    parameter DELAYS = 10
)(
    // Wishbone interface signals
    input  wb_clk_i, wb_rst_i, wbs_stb_i, wbs_cyc_i, wbs_we_i,
    input  [3:0] wbs_sel_i,
    input  [31:0] wbs_dat_i, wbs_adr_i,
    output wbs_ack_o,
    output [31:0] wbs_dat_o,
    // Other signals (LA, IO, IRQ)
    ...
);
    // Wishbone control signals
    assign valid = wbs_cyc_i && wbs_stb_i;
    assign wstrb = wbs_sel_i & {4{wbs_we_i}};
    assign wbs_ack_o = (cnt_delay == (DELAYS - 1));
    
    // Delay counter implementation
    always @(posedge clk) begin
        if(rst) begin
            cnt_delay <= 'b0;
        end else if(valid && (cnt_delay < DELAYS)) begin
            cnt_delay <= cnt_delay + 1;
        end else begin
            cnt_delay <= 'b0;
        end
    end
    
    // BRAM connection
    bram user_bram (
        .CLK(clk), .WE0(wstrb), .EN0(valid),
        .Di0(wbs_dat_i), .Do0(wbs_dat_o), .A0(wbs_adr_i)
    );
endmodule
```

Key points:
- Implements a Wishbone slave interface
- Features a 10-cycle delay mechanism controlled by DELAYS parameter
- Generates acknowledgment feedback signal after exactly 10 cycles
- Connects CPU's Wishbone bus to the BRAM module

## 2. Memory Map & Linker (LDS)

The memory architecture is defined in the sections.lds linker script with these key regions:

```
MEMORY {
    vexriscv_debug : ORIGIN = 0xf00f0000, LENGTH = 0x00000100
    dff            : ORIGIN = 0x00000000, LENGTH = 0x00000400
    dff2           : ORIGIN = 0x00000400, LENGTH = 0x00000200
    flash          : ORIGIN = 0x10000000, LENGTH = 0x01000000
    mprj           : ORIGIN = 0x30000000, LENGTH = 0x00100000
    mprjram        : ORIGIN = 0x38000000, LENGTH = 0x00400000
    hk             : ORIGIN = 0x26000000, LENGTH = 0x00100000
    csr            : ORIGIN = 0xf0000000, LENGTH = 0x00010000
}
```
We can find that it is designed with 4 KB Bram storage.
## 3. How to Move Code from SPI Flash to User Project Area Memory

The data from SPI Flash can be written to user project memory through the wishbone interface.

Following figures show the instructions are written to BRAM.

![Screenshot 2025-05-30 at 2.47.20 PM](https://hackmd.io/_uploads/SkP94RIGee.png)

## 4. How to Execute Code from User Project Memory

Once the code is relocated to user memory, execution involves:

1. **Memory Access Protocol**:
   - When the CPU needs to fetch instructions from the mprjram address (0x38xxxxxx):
     - It asserts Wishbone signals (wbs_cyc_i, wbs_stb_i)
     - Address is placed on wbs_adr_i
     - The controller recognizes the valid transaction and enables BRAM (EN0)
     - After DELAYS (10) cycles, wbs_ack_o is asserted
     - BRAM output (Do0) is returned on wbs_dat_o
     - CPU receives the instruction/data and continues execution

2. **Delayed Response Mechanism**:
   - The 10-cycle delay is implemented by the counter module in user_proj_example.counter.v
   - This delay mimics real-world memory access latency
   - The CPU waits for the acknowledgment before proceeding

Following figures show the instructions are read from to BRAM.

![Screenshot 2025-05-30 at 2.49.11 PM](https://hackmd.io/_uploads/HJbWHAUzll.png)

The read delay is caused by setting delay parameter in user_proj_example.counter.v to simulate fir delay.

## 5. Operation Sequence and Waveform Analysis
###  Operation Sequence
1. Initial system

2. Start test when GPIO == 0x0xAB400000

3. FIR engine calculation

4. Waiting for correct result GPIO (0xAB510000)

The start of testing
![Screenshot 2025-05-30 at 3.02.45 PM](https://hackmd.io/_uploads/r16NuALGee.png)
![Screenshot 2025-05-30 at 2.56.31 PM](https://hackmd.io/_uploads/rkxJvCUfxe.png)

The end of testing
![Screenshot 2025-05-30 at 3.02.53 PM](https://hackmd.io/_uploads/ByZHdC8feg.png)
![Screenshot 2025-05-30 at 3.04.20 PM](https://hackmd.io/_uploads/BkqFdC8fxe.png)
