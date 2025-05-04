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

Key points:
- `__attribute__((section(".mprjram")))` directive marks these functions to be placed in user memory
- The FIR algorithm implements a convolution between the input signal and filter taps
- Filter size N=11 with symmetrical taps centered around 63

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
- Generates acknowledgment signal after exactly 10 cycles
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

Memory sections allocation:
- `.text`: Program code placed in flash (0x10000000)
- `.rodata`: Read-only data placed in flash
- `.data`: Initialized data, loaded from flash but copied to dff (0x00000000) at startup
- `.bss`: Uninitialized data in dff
- `.mprjram`: Special section for code that will run from user project RAM (0x38000000)

The linker script includes special symbols that assist with memory relocation:
- `_fdata_rom` and `_edata_rom`: Source locations in flash for .data section
- `_fsram` and `_esram`: Destination addresses for .mprjram section
- `_esram_rom`: Source location in flash for .mprjram section

## 3. How to Move Code from SPI Flash to User Project Area Memory

The process involves several steps:

1. **Source Code Marking**:
   - Functions to be executed from user memory must be explicitly marked using:
     ```c
     __attribute__((section(".mprjram")))
     ```
   - This tells the compiler to place these functions in the `.mprjram` section

2. **Linker Script Configuration**:
   - The sections.lds script defines where code sections are located:
     ```
     .mprjram :
     {
         . = ALIGN(8);
         _fsram = .;
         *libgcc.a:*(.text .text.*)
     } > mprjram AT > flash
     ```
   - `> mprjram` indicates the VMA (Virtual Memory Address) where the section should be loaded for execution
   - `AT > flash` indicates the LMA (Load Memory Address) where the section is stored in the binary

3. **Startup Code Operation**:
   - During system startup, code in crt0_vex.S performs memory relocation
   - It copies the `.mprjram` section data from flash (LMA) to user memory (VMA)
   - Uses symbols `_fsram` (destination start), `_esram` (destination end), and `_esram_rom` (source start)

4. **Hardware Support**:
   - The physical BRAM in the user project is mapped to the mprjram address range (0x38000000)
   - When CPU accesses this address range, requests are routed to the user project via Wishbone bus

## 4. How to Execute Code from User Project Memory

Once the code is relocated to user memory, execution involves:

1. **Function Calling Mechanism**:
   - In the main program (counter_la_fir.c), the function is called normally:
     ```c
     extern int* fir();  // Function prototype
     int* tmp = fir();   // Call the function in user memory
     ```
   - The CPU fetches instructions from the mprjram address space

2. **Memory Access Protocol**:
   - When the CPU needs to fetch instructions from the mprjram address (0x38xxxxxx):
     - It asserts Wishbone signals (wbs_cyc_i, wbs_stb_i)
     - Address is placed on wbs_adr_i
     - The controller recognizes the valid transaction and enables BRAM (EN0)
     - After DELAYS (10) cycles, wbs_ack_o is asserted
     - BRAM output (Do0) is returned on wbs_dat_o
     - CPU receives the instruction/data and continues execution

3. **Delayed Response Mechanism**:
   - The 10-cycle delay is implemented by the counter module in user_proj_example.counter.v
   - This delay mimics real-world memory access latency
   - The CPU waits for the acknowledgment before proceeding

## 5. Operation Sequence and Waveform Analysis

The complete operation sequence involves these steps:

1. **System Initialization**:
   - System boots from SPI Flash
   - CPU executes startup code (crt0_vex.S)
   - Copies .data section to dff memory
   - Copies .mprjram section to user memory (BRAM)

2. **Main Program Execution**:
   - Configures I/O pins (GPIO_MODE_MGMT_STD_OUTPUT)
   - Sets up Logic Analyzer probes
   - Signals test start via GPIO (0xAB400000)

3. **FIR Execution from User Memory**:
   - CPU calls the fir() function located at 0x38xxxxxx
   - For each instruction fetch:
     - CPU issues request on Wishbone bus
     - Controller receives request, enables BRAM
     - Delay counter increments for 10 cycles
     - Acknowledgment is sent to CPU
     - CPU receives instruction and continues
   - FIR algorithm executes inside user memory:
     - Initializes arrays using initfir()
     - Processes each input sample
     - Computes convolution with filter taps
     - Returns pointer to result array

4. **Result Display**:
   - Main program displays results on GPIO pins:
     ```c
     reg_mprj_datal = *tmp << 16;
     reg_mprj_datal = *(tmp+1) << 16;
     // ... remaining values
     ```
   - Signals test completion via GPIO (0xAB510000)

### Waveform Analysis

1. **Wishbone Bus Activity (part)**:

![Screenshot 2025-05-04 at 12.36.59 PM](https://hackmd.io/_uploads/Byx-J_Elxx.png)


2. **Delay Controller Signals (part)**:

![Screenshot 2025-05-04 at 12.39.42 PM](https://hackmd.io/_uploads/rJDskdEelx.png)


3. **BRAM Interface (part)**:

![Screenshot 2025-05-04 at 12.41.02 PM](https://hackmd.io/_uploads/HJPMxdEeeg.png)
