## At the begining
Please refer to `Lab4-2/lab-caravel_fir/testbench/counter_la_fir/run_sim` if you want to repulicated this lab. Please kindly notice that you need to use vivado to simulate since iverilog doesn't support system verilog very well. In this lab, I used vivado inside my docker container to finish the simulation but you can use others.

## Block diagram
![Screenshot 2025-05-05 at 7.16.04 PM](https://hackmd.io/_uploads/SkrqRfIlge.png)

The figure above shows how the SoC works. If you want to know more about the structure of fir, please refer to https://github.com/EsaLongs/EESM6000C/tree/main/Lab_3/Fir.

## The interface protocal

### Firmware and User Project
In the realm of data transfer, the Wishbone protocol comes into play. The RISC - V CPU will carry out the instructions stored in the firmware. Subsequently, it will transfer data to both the FIR engine and the EXMEM component through the Wishbone interface. At the same time, a Wishbone decoder will keep track of the access address of the transaction.

The firmware gains access to the FIR engine within the User Project by means of a Wishbone - to - AXI conversion layer. This conversion layer is responsible for detecting Wishbone requests aimed at accessing the FIR engine. Once detected, it transforms the access into either the AXI - Lite or AXI - Stream format.

### Firmware and Testbench
The Firmware and the Testbench establish communication via the mprj_io signal. The testbench designates mprj_io[23:16] as the checkbits for assessing the project's status. When the firmware initializes the FIR engine, it sets the checkbits to 8'A5. This serves as a signal to the testbench, prompting it to begin verifying the FIR output and measuring the latency.

Once the FIR processing is finished, the firmware instructs the CPU to set the checkbits to 8'h5A. The testbench then compares the final Y[n] output with a reference output and logs the latency.

## Code explanation
![Screenshot 2025-05-23 at 1.56.24 PM](https://hackmd.io/_uploads/HJB70YpZxl.png)


<p style="text-align:center; color:black; font-size:16px;">Part of Fir.h code</p>

Compare to the original `FIR.h` code, I added another tap num address because in my FIR design, I also set the num of tap data as a configurable parameter (instead of just 11). Therefore, I need another step to write a configure register about the number of taps.

![image](https://hackmd.io/_uploads/SJOTqF6-le.png)

<p style="text-align:center; color:black; font-size:16px;">Part of Fir.c code</p>

The `reg_fir_tnum` is the additional step to write the configure register using the AXI-lite interface.

![Screenshot 2025-05-23 at 1.48.21 PM](https://hackmd.io/_uploads/B1Br3Y6-ll.png)
<p style="text-align:center; color:black; font-size:16px;">Part of the wishbone to AXI file setting corresponded to fir.h</p>

![Screenshot 2025-05-23 at 1.50.33 PM](https://hackmd.io/_uploads/Hy7p2Kable.png)

<p style="text-align:center; color:black; font-size:16px;">Part of the wishbone to AXI file address map</p>

The address map is actually decided by my fir design.
![Screenshot 2025-05-23 at 1.53.14 PM](https://hackmd.io/_uploads/SJ4wptabxg.png)
![Screenshot 2025-05-23 at 1.53.21 PM](https://hackmd.io/_uploads/rkIwpYabxg.png)

<p style="text-align:center; color:black; font-size:16px;">address map related code in axi4_lite_slave.sv</p>

In my first design, I use the highest 4 bits as the selection between the configure register and tap RAM.

![image](https://hackmd.io/_uploads/B1Ns0KTbgx.png)
<p style="text-align:center; color:black; font-size:16px;">Part of the code in the counter_la_fir_tb.sv</p>

The calculation result read from `mpri_io[31:24]` should be 8'hED according to the input pattern.

## Some details about simulation

Because iverilog, as a open source tool, doesn't have very good support to system verilog grammer and parametric design, I used vivado to simulate my design. However, because vivado doesn't have a macOS version, I used a docker container to simulate linux to run the vivado. That's why the `run_sim` looks a bit complicated.

Following part shows the command output when we excute `run_sim` script. The output has some undeclared and unconnected warning about the SOC but it doesn't affect the output of the simulation. Meanwhile, it doesn't show any warning inside of my FIR design.
````
yue@tous-MacBook-Pro counter_la_fir % chmod +x run_sim
yue@tous-MacBook-Pro counter_la_fir % ./run_sim
Starting Vivado simulation in container...
Setting up workspace in container...
Copying entire project directory to container...
Successfully copied 117MB to vivado_x86:/workspace/lab-caravel_fir
Copying modified hex file to container...
Successfully copied 8.19kB to vivado_x86:/workspace/lab-caravel_fir/testbench/counter_la_fir/counter_la_fir.hex
RTL files to compile:  ../../rtl/header/defines.v ../../rtl/header/user_defines.v ../../rtl/user/axi4_lite_slave_conf.sv ../../rtl/user/axi4_lite_slave_bram.sv ../../rtl/user/axi4_lite_slave.sv ../../rtl/user/axi4_stream_slave_bram.sv ../../rtl/user/booth4wallace_multiplier_nbit.sv ../../rtl/user/booth4_op_generator.sv ../../rtl/user/csa_3to2.sv ../../rtl/user/csa_nto2.sv ../../rtl/user/bram_access_arbiter.sv ../../rtl/user/brent_kung_adder_nbit.sv ../../rtl/user/data_ram_behav.sv ../../rtl/user/fir_core.sv ../../rtl/user/fir_top.sv ../../rtl/user/gp_unit.sv ../../rtl/user/onebit_adder.sv ../../rtl/user/tap_ram_behav.sv ../../rtl/user/wb_to_axi.v ../../rtl/user/exmem.v ../../rtl/user/bram.v ../../rtl/user/user_project_wrapper.v ../../vip/tbuart.v ../../vip/spiflash.v ../../vip/RAM256.v ../../vip/RAM128.v ../../rtl/soc/mgmt_core.v ../../rtl/soc/mgmt_core_wrapper.v ../../rtl/soc/VexRiscv_MinDebugCache.v ../../rtl/soc/pads.v                         ../../rtl/soc/mprj_io.v ../../rtl/soc/housekeeping_spi.v                                     ../../rtl/soc/chip_io.v                 ../../rtl/soc/gpio_control_block.v              ../../rtl/soc/gpio_defaults_block.v          ../../rtl/soc/housekeeping.v                    ../../rtl/soc/caravel.v    ../../cvc-pdk/sky130_sram_2kbyte_1rw1r_32x512_8.v counter_la_fir_tb.v
Compiling RTL with Vivado...
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/header/defines.v" into library work
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/header/user_defines.v" into library work
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/axi4_lite_slave_conf.sv" into library work
INFO: [VRFC 10-311] analyzing module axi4_lite_slave_conf
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/axi4_lite_slave_bram.sv" into library work
INFO: [VRFC 10-311] analyzing module axi4_lite_slave_bram
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/axi4_lite_slave.sv" into library work
INFO: [VRFC 10-311] analyzing module axi4_lite_slave
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/axi4_stream_slave_bram.sv" into library work
INFO: [VRFC 10-311] analyzing module axi4_stream_slave_bram
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/booth4wallace_multiplier_nbit.sv" into library work
INFO: [VRFC 10-311] analyzing module booth4wallace_multiplier_nbit
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/booth4_op_generator.sv" into library work
INFO: [VRFC 10-311] analyzing module booth4_op_generator
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/csa_3to2.sv" into library work
INFO: [VRFC 10-311] analyzing module csa_3to2
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/csa_nto2.sv" into library work
INFO: [VRFC 10-311] analyzing module csa_nto2
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/bram_access_arbiter.sv" into library work
INFO: [VRFC 10-311] analyzing module bram_access_arbiter
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/brent_kung_adder_nbit.sv" into library work
INFO: [VRFC 10-311] analyzing module brent_kung_adder_nbit
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/data_ram_behav.sv" into library work
INFO: [VRFC 10-311] analyzing module data_ram_behav
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/fir_core.sv" into library work
INFO: [VRFC 10-311] analyzing module fir_core
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/fir_top.sv" into library work
INFO: [VRFC 10-311] analyzing module fir_top
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/gp_unit.sv" into library work
INFO: [VRFC 10-311] analyzing module gp_unit
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/onebit_adder.sv" into library work
INFO: [VRFC 10-311] analyzing module onebit_adder
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/tap_ram_behav.sv" into library work
INFO: [VRFC 10-311] analyzing module tap_ram_behav
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/wb_to_axi.v" into library work
INFO: [VRFC 10-311] analyzing module wb2axi
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/exmem.v" into library work
INFO: [VRFC 10-311] analyzing module exmem
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/bram.v" into library work
INFO: [VRFC 10-311] analyzing module bram
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/user/user_project_wrapper.v" into library work
INFO: [VRFC 10-311] analyzing module user_project_wrapper
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/vip/tbuart.v" into library work
INFO: [VRFC 10-311] analyzing module tbuart
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/vip/spiflash.v" into library work
INFO: [VRFC 10-311] analyzing module spiflash
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/vip/RAM256.v" into library work
INFO: [VRFC 10-311] analyzing module RAM256
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/vip/RAM128.v" into library work
INFO: [VRFC 10-311] analyzing module RAM128
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/soc/mgmt_core.v" into library work
INFO: [VRFC 10-311] analyzing module mgmt_core
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/soc/mgmt_core_wrapper.v" into library work
INFO: [VRFC 10-311] analyzing module mgmt_core_wrapper
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/soc/VexRiscv_MinDebugCache.v" into library work
INFO: [VRFC 10-311] analyzing module VexRiscv
INFO: [VRFC 10-311] analyzing module InstructionCache
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/soc/pads.v" into library work
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/soc/mprj_io.v" into library work
INFO: [VRFC 10-311] analyzing module mprj_io
INFO: [VRFC 10-311] analyzing module boledu_io
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/soc/housekeeping_spi.v" into library work
INFO: [VRFC 10-311] analyzing module housekeeping_spi
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/soc/chip_io.v" into library work
INFO: [VRFC 10-311] analyzing module chip_io
INFO: [VRFC 10-2458] undeclared symbol vddio, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/chip_io.v:156]
INFO: [VRFC 10-2458] undeclared symbol vssio, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/chip_io.v:157]
INFO: [VRFC 10-2458] undeclared symbol vccd, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/chip_io.v:158]
INFO: [VRFC 10-2458] undeclared symbol vssd, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/chip_io.v:159]
INFO: [VRFC 10-2458] undeclared symbol vdda1, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/chip_io.v:160]
INFO: [VRFC 10-2458] undeclared symbol vdda2, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/chip_io.v:161]
INFO: [VRFC 10-2458] undeclared symbol vssa1, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/chip_io.v:162]
INFO: [VRFC 10-2458] undeclared symbol vssa2, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/chip_io.v:163]
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/soc/gpio_control_block.v" into library work
INFO: [VRFC 10-311] analyzing module gpio_control_block
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/soc/gpio_defaults_block.v" into library work
INFO: [VRFC 10-311] analyzing module gpio_defaults_block
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/soc/housekeeping.v" into library work
INFO: [VRFC 10-311] analyzing module housekeeping
INFO: [VRFC 10-311] analyzing module boledu_fd_sc_hd__clkbuf_8
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/rtl/soc/caravel.v" into library work
INFO: [VRFC 10-311] analyzing module caravel
INFO: [VRFC 10-2458] undeclared symbol flash_clk_oeb_buf, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:284]
INFO: [VRFC 10-2458] undeclared symbol flash_csb_oeb_buf, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:285]
INFO: [VRFC 10-2458] undeclared symbol vccd_core, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:466]
INFO: [VRFC 10-2458] undeclared symbol vssd_core, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:467]
INFO: [VRFC 10-2458] undeclared symbol qspi_enabled, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:541]
INFO: [VRFC 10-2458] undeclared symbol uart_enabled, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:542]
INFO: [VRFC 10-2458] undeclared symbol spi_enabled, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:543]
INFO: [VRFC 10-2458] undeclared symbol debug_mode, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:544]
INFO: [VRFC 10-2458] undeclared symbol ser_tx, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:548]
INFO: [VRFC 10-2458] undeclared symbol ser_rx, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:549]
INFO: [VRFC 10-2458] undeclared symbol spi_sdi, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:551]
INFO: [VRFC 10-2458] undeclared symbol spi_csb, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:552]
INFO: [VRFC 10-2458] undeclared symbol spi_sck, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:553]
INFO: [VRFC 10-2458] undeclared symbol spi_sdo, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:554]
INFO: [VRFC 10-2458] undeclared symbol spi_sdoenb, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:555]
INFO: [VRFC 10-2458] undeclared symbol debug_in, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:557]
INFO: [VRFC 10-2458] undeclared symbol debug_out, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:558]
INFO: [VRFC 10-2458] undeclared symbol debug_oeb, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:559]
INFO: [VRFC 10-2458] undeclared symbol trap, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:575]
INFO: [VRFC 10-2458] undeclared symbol user1_vcc_powergood, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:602]
INFO: [VRFC 10-2458] undeclared symbol user2_vcc_powergood, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:603]
INFO: [VRFC 10-2458] undeclared symbol user1_vdd_powergood, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:604]
INFO: [VRFC 10-2458] undeclared symbol user2_vdd_powergood, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:605]
INFO: [VRFC 10-2458] undeclared symbol vdda1_core, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:613]
INFO: [VRFC 10-2458] undeclared symbol vdda2_core, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:614]
INFO: [VRFC 10-2458] undeclared symbol vssa1_core, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:615]
INFO: [VRFC 10-2458] undeclared symbol vssa2_core, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:616]
INFO: [VRFC 10-2458] undeclared symbol vccd1_core, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:617]
INFO: [VRFC 10-2458] undeclared symbol vccd2_core, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:618]
INFO: [VRFC 10-2458] undeclared symbol vssd1_core, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:619]
INFO: [VRFC 10-2458] undeclared symbol vssd2_core, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:620]
INFO: [VRFC 10-2458] undeclared symbol spi_pll_ena, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:732]
INFO: [VRFC 10-2458] undeclared symbol spi_pll_dco_ena, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:733]
INFO: [VRFC 10-2458] undeclared symbol ext_clk_sel, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:738]
INFO: [VRFC 10-2458] undeclared symbol ext_reset, assumed default net type wire [/workspace/lab-caravel_fir/rtl/soc/caravel.v:759]
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/cvc-pdk/sky130_sram_2kbyte_1rw1r_32x512_8.v" into library work
INFO: [VRFC 10-311] analyzing module sky130_sram_2kbyte_1rw1r_32x512_8
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/testbench/counter_la_fir/counter_la_fir_tb.v" into library work
INFO: [VRFC 10-311] analyzing module counter_la_fir_tb
Compiling testbench with Vivado...
INFO: [VRFC 10-2263] Analyzing SystemVerilog file "/workspace/lab-caravel_fir/testbench/counter_la_fir/counter_la_fir_tb.v" into library work
INFO: [VRFC 10-311] analyzing module counter_la_fir_tb
Elaborating design...
Vivado Simulator v2021.1
Copyright 1986-1999, 2001-2021 Xilinx, Inc. All Rights Reserved.
Running: /tools/xilinx/Vivado/2021.1/bin/unwrapped/lnx64.o/xelab -debug typical counter_la_fir_tb -s counter_la_fir_sim --define FUNCTIONAL --define SIM --define UNIT_DELAY=#1 
Multi-threading is on. Using 8 slave threads.
Starting static elaboration
Pass Through NonSizing Optimizer
WARNING: [VRFC 10-3645] port 'ser_tx' remains unconnected for this instance [/workspace/lab-caravel_fir/testbench/counter_la_fir/counter_la_fir_tb.v:259]
WARNING: [VRFC 10-3645] port 'vdda' remains unconnected for this instance [/workspace/lab-caravel_fir/rtl/soc/chip_io.v:155]
WARNING: [VRFC 10-5021] port 'VPWR' is not connected on this instance [/workspace/lab-caravel_fir/rtl/soc/mgmt_core.v:8374]
WARNING: [VRFC 10-5021] port 'VPWR' is not connected on this instance [/workspace/lab-caravel_fir/rtl/soc/mgmt_core.v:8383]
Completed static elaboration
Starting simulation data flow analysis
Completed simulation data flow analysis
Time Resolution for simulation is 1ps
Compiling module work.boledu_io
Compiling module work.mprj_io_default
Compiling module work.chip_io
Compiling module work.RAM256_default
Compiling module work.RAM128_default
Compiling module work.InstructionCache
Compiling module work.VexRiscv
Compiling module work.mgmt_core
Compiling module work.mgmt_core_wrapper
Compiling module work.bram
Compiling module work.exmem
Compiling module work.wb2axi
Compiling module work.axi4_lite_slave_bram
Compiling module work.axi4_lite_slave_conf
Compiling module work.axi4_lite_slave
Compiling module work.axi4_stream_slave_bram
Compiling module work.bram_access_arbiter
Compiling module work.booth4_op_generator_default
Compiling module work.onebit_adder
Compiling module work.csa_3to2(WIDTH_MAX=64,WIDTH_1=34...
Compiling module work.csa_3to2(WIDTH_MAX=64,WIDTH_1=38...
Compiling module work.csa_3to2(WIDTH_MAX=64,WIDTH_1=44...
Compiling module work.csa_3to2(WIDTH_MAX=64,WIDTH_1=50...
Compiling module work.csa_3to2(WIDTH_MAX=64,WIDTH_1=56...
Compiling module work.csa_3to2(WIDTH_MAX=64,WIDTH_1=62...
Compiling module work.csa_3to2(WIDTH_MAX=64,WIDTH_1=37...
Compiling module work.csa_3to2(WIDTH_MAX=64,WIDTH_1=42...
Compiling module work.csa_3to2(WIDTH_MAX=64,WIDTH_1=55...
Compiling module work.csa_3to2(WIDTH_MAX=64,WIDTH_1=60...
Compiling module work.csa_3to2(WIDTH_MAX=64,WIDTH_1=44...
Compiling module work.csa_3to2(WIDTH_MAX=64,WIDTH_1=49...
Compiling module work.csa_3to2(WIDTH_MAX=64,WIDTH_1=51...
Compiling module work.csa_3to2(WIDTH_MAX=64,WIDTH_1=62...
Compiling module work.csa_3to2(WIDTH_MAX=64,WIDTH_1=64...
Compiling module work.csa_3to2(WIDTH_MAX=64,WIDTH_1=65...
Compiling module work.csa_nto2_default
Compiling module work.gp_unit
Compiling module work.brent_kung_adder_nbit(ADDER_SIZE...
Compiling module work.booth4wallace_multiplier_nbit_de...
Compiling module work.brent_kung_adder_nbit(ADDER_SIZE...
Compiling module work.fir_core_default
Compiling module work.fir_top
Compiling module work.tap_ram_behav
Compiling module work.data_ram_behav
Compiling module work.user_project_wrapper
Compiling module work.boledu_fd_sc_hd__clkbuf_8
Compiling module work.housekeeping_spi
Compiling module work.housekeeping
Compiling module work.gpio_defaults_block
Compiling module work.gpio_control_block
Compiling module work.caravel_default
Compiling module work.spiflash(FILENAME="counter_la_fi...
Compiling module work.tbuart
Compiling module work.counter_la_fir_tb
Built simulation snapshot counter_la_fir_sim
Running simulation with Vivado xsim...

****** xsim v2021.1 (64-bit)
  **** SW Build 3247384 on Thu Jun 10 19:36:07 MDT 2021
  **** IP Build 3246043 on Fri Jun 11 00:30:35 MDT 2021
    ** Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.

source xsim.dir/counter_la_fir_sim/xsim_script.tcl
# xsim {counter_la_fir_sim} -autoloadwcfg -runall
Time resolution is 1 ps
run -all
Reading counter_la_fir.hex
counter_la_fir.hex loaded into memory
Memory 5 bytes = 0x6f 0x00 0x00 0x0b 0x13
Test Started
Passed! Final Y[7:0] should be 0xed. Latency:        5151 cycles
$finish called at time : 1605912500 ps : File "/workspace/lab-caravel_fir/testbench/counter_la_fir/counter_la_fir_tb.v" Line 173
exit
INFO: [Common 17-206] Exiting xsim at Fri May 23 06:17:18 2025...
Copying waveform file from container to host...
Successfully copied 49.3MB to /Users/yue/EESM6000C-1/Lab_4/Lab4-2/lab-caravel_fir/testbench/counter_la_fir/counter_la_fir.vcd
Waveform file copied to host.
Simulation finished.
````

You can find the generated VCD file under the same directory (counter_la_fir). The github has been updated and you can use that VCD file directly if you want to examine the waveform result.

## Waveform about key operation
Full waveform
![image](https://hackmd.io/_uploads/S1OkuevGlg.png)

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
According to the mprjram, we can find that the instructions will be moved to user Bram from 0x38000000 with a 4K range. Follong picture shows one example.
![image](https://hackmd.io/_uploads/ByU4_gPGlg.png)

```
38000000 <initfir>:
38000000:	fe010113          	addi	sp,sp,-32
38000004:	00112e23          	sw	ra,28(sp)
38000008:	00812c23          	sw	s0,24(sp)
3800000c:	02010413          	addi	s0,sp,32
38000010:	300007b7          	lui	a5,0x30000
38000014:	01078793          	addi	a5,a5,16 # 30000010 <_esram_rom+0x1ffff910>
38000018:	00b00713          	li	a4,11
3800001c:	00e7a023          	sw	a4,0(a5)
38000020:	300007b7          	lui	a5,0x30000
38000024:	02078793          	addi	a5,a5,32 # 30000020 <_esram_rom+0x1ffff920>
38000028:	00b00713          	li	a4,11
3800002c:	00e7a023          	sw	a4,0(a5)
38000030:	fe042623          	sw	zero,-20(s0)
38000034:	0400006f          	j	38000074 <initfir+0x74>
38000038:	00000713          	li	a4,0
3800003c:	fec42783          	lw	a5,-20(s0)
38000040:	00279793          	slli	a5,a5,0x2
38000044:	00f707b3          	add	a5,a4,a5
38000048:	0007a683          	lw	a3,0(a5)
3800004c:	fec42783          	lw	a5,-20(s0)
38000050:	00279713          	slli	a4,a5,0x2
38000054:	300007b7          	lui	a5,0x30000
38000058:	08078793          	addi	a5,a5,128 # 30000080 <_esram_rom+0x1ffff980>
3800005c:	00f707b3          	add	a5,a4,a5
38000060:	00068713          	mv	a4,a3
38000064:	00e7a023          	sw	a4,0(a5)
38000068:	fec42783          	lw	a5,-20(s0)
3800006c:	00178793          	addi	a5,a5,1
38000070:	fef42623          	sw	a5,-20(s0)
38000074:	fec42703          	lw	a4,-20(s0)
38000078:	00a00793          	li	a5,10
3800007c:	fae7fee3          	bgeu	a5,a4,38000038 <initfir+0x38>
38000080:	00000013          	nop
38000084:	00000013          	nop
38000088:	01c12083          	lw	ra,28(sp)
3800008c:	01812403          	lw	s0,24(sp)
38000090:	02010113          	addi	sp,sp,32
38000094:	00008067          	ret
```
This part is corresponding to C code
```
void __attribute__ ( ( section ( ".mprjram" ) ) ) initfir() {

    reg_fir_dlength = N;
    reg_fir_tnum    = 11;

    for (uint32_t i = 0; i < 11; i++) {
        reg_fir_coeff(i) = taps[i];
    }

}
```

```
38000094 <fir>:
38000094:	fe010113          	addi	sp,sp,-32
38000098:	00112e23          	sw	ra,28(sp)
3800009c:	00812c23          	sw	s0,24(sp)
380000a0:	02010413          	addi	s0,sp,32
380000a4:	f81ff0ef          	jal	38000024 <initfir>
380000a8:	fe042623          	sw	zero,-20(s0)
380000ac:	0c40006f          	j	38000170 <fir+0xdc>
380000b0:	fe042423          	sw	zero,-24(s0)
380000b4:	02c00713          	li	a4,44
380000b8:	fec42783          	lw	a5,-20(s0)
380000bc:	00279793          	slli	a5,a5,0x2
380000c0:	00f707b3          	add	a5,a4,a5
380000c4:	0007a703          	lw	a4,0(a5)
380000c8:	05c00693          	li	a3,92
380000cc:	fec42783          	lw	a5,-20(s0)
380000d0:	00279793          	slli	a5,a5,0x2
380000d4:	00f687b3          	add	a5,a3,a5
380000d8:	00e7a023          	sw	a4,0(a5)
380000dc:	fe042223          	sw	zero,-28(s0)
380000e0:	0600006f          	j	38000140 <fir+0xac>
380000e4:	05c00713          	li	a4,92
380000e8:	fe442783          	lw	a5,-28(s0)
380000ec:	00279793          	slli	a5,a5,0x2
380000f0:	00f707b3          	add	a5,a4,a5
380000f4:	0007a683          	lw	a3,0(a5)
380000f8:	fec42703          	lw	a4,-20(s0)
380000fc:	fe442783          	lw	a5,-28(s0)
38000100:	40f707b3          	sub	a5,a4,a5
38000104:	00000713          	li	a4,0
38000108:	00279793          	slli	a5,a5,0x2
3800010c:	00f707b3          	add	a5,a4,a5
38000110:	0007a783          	lw	a5,0(a5)
38000114:	00078593          	mv	a1,a5
38000118:	00068513          	mv	a0,a3
3800011c:	ee5ff0ef          	jal	38000000 <__mulsi3>
38000120:	00050793          	mv	a5,a0
38000124:	00078713          	mv	a4,a5
38000128:	fe842783          	lw	a5,-24(s0)
3800012c:	00e787b3          	add	a5,a5,a4
38000130:	fef42423          	sw	a5,-24(s0)
38000134:	fe442783          	lw	a5,-28(s0)
38000138:	00178793          	addi	a5,a5,1
3800013c:	fef42223          	sw	a5,-28(s0)
38000140:	fe442703          	lw	a4,-28(s0)
38000144:	fec42783          	lw	a5,-20(s0)
38000148:	f8e7dee3          	bge	a5,a4,380000e4 <fir+0x50>
3800014c:	08800713          	li	a4,136
38000150:	fec42783          	lw	a5,-20(s0)
38000154:	00279793          	slli	a5,a5,0x2
38000158:	00f707b3          	add	a5,a4,a5
3800015c:	fe842703          	lw	a4,-24(s0)
38000160:	00e7a023          	sw	a4,0(a5)
38000164:	fec42783          	lw	a5,-20(s0)
38000168:	00178793          	addi	a5,a5,1
3800016c:	fef42623          	sw	a5,-20(s0)
38000170:	fec42703          	lw	a4,-20(s0)
38000174:	00a00793          	li	a5,10
38000178:	f2e7dce3          	bge	a5,a4,380000b0 <fir+0x1c>
3800017c:	08800793          	li	a5,136
38000180:	00078513          	mv	a0,a5
38000184:	01c12083          	lw	ra,28(sp)
38000188:	01812403          	lw	s0,24(sp)
3800018c:	02010113          	addi	sp,sp,32
38000190:	00008067          	ret
```

This part is corresponding to C code
```
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
```

![image](https://hackmd.io/_uploads/r1mWLM_Gge.png)

This waveform shows the latency between two output valid signals. From observation, it excutes instrnctions from 0x38000100 to 0x3800013C, then back to 0x380000C0 and reach 0x380000FC, which is just a loop. The distance between 

The clock cycles needed for a instruction to finish is set by exemem.v, and it is set to 10 cycles here.
```
  reg [3:0] cnt; // This cnt is used for C code

  wire valid;
  wire we;
  wire en;
  
  always @(posedge wb_clk_i or posedge wb_rst_i) begin
    if (wb_rst_i) cnt <= 0;
    else begin
      if      (cnt == 4'd10)          cnt <= 0;
      else if (wbs_cyc_i & !wbs_we_i) cnt <= cnt + 1;
    end
  end

  assign valid = wbs_cyc_i & wbs_stb_i;
  assign we    = valid & wbs_we_i;
  assign en    = 1'b1;
  
  bram user_mem (
    .clk ( wb_clk_i            ),
    .WE0 ( wbs_sel_i & {4{we}} ),
    .EN0 ( en                  ),
    .Di0 ( wbs_dat_i           ),
    .Do0 ( wbs_dat_o           ),
    .A0  ( wbs_adr_i << 2      )
  );

  assign wbs_ack_o = ((valid & wbs_we_i) || cnt == 4'd10);
```

## What is the FIR engine theoretical throughput, i.e. data rate? Measured throughput?
![Screenshot 2025-05-08 at 9.51.12 PM](https://hackmd.io/_uploads/ByycO45xxe.png)

![Screenshot 2025-05-26 at 9.29.42 PM](https://hackmd.io/_uploads/SJyJ6yMMex.png)

After viewing the waveform, I found it is wierd because ideally it just takes 12 cycles to generate an output valid signl, then after analyze the code and waveform, I found my stall signal doesn't work properly. Because my output valid signal is generate by ` valid_shifter_first` signal with shifter. However, we have 
````
  assign valid_shifter_first = one_round_finish;
````
The problem is because the stall signal doesn't not be asserted, which means the calculation just start round and round again, which makes it can't generate the output valid signal correctly.

```` Original code
  assign stall = (!in_sm_tready && one_round_finish ) ? 1'b1 :
                 (all_round_finish)                   ? 1'b0 :
                 (in_ss_tvalid    )                   ? 1'b0 :
                 1'b0;
````

```` New code
  assign stall = ((!in_sm_tready) && one_round_finish ) ? 1'b1 : 1'b0;
````

Here we don't use `in_ss_tvalid` because I found the next `in_ss_tvalid` won't be generated unless it receive the output valid signal, making simulation hang.

![Screenshot 2025-05-26 at 10.12.47 PM](https://hackmd.io/_uploads/HkQWPezfgl.png)

The new waveform show it uses 14 cycles to calculate the output, the two cycles difference is mainly caused by the 2 stage valid signal pipeline, which can be considerd as the cycles need to start the engine. If the `in_ss_tvalid` can be asserted as long as `out_ss_tready` is 1, it will be 12 cycles.


## What is the latency for firmware to feed data?
It needs 12 cycles to calculation, but because of the input generate speed of SOC, it takes total 5082 cycles to calculate 11 (dlength) data.

````

****** xsim v2021.1 (64-bit)
  **** SW Build 3247384 on Thu Jun 10 19:36:07 MDT 2021
  **** IP Build 3246043 on Fri Jun 11 00:30:35 MDT 2021
    ** Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.

source xsim.dir/counter_la_fir_sim/xsim_script.tcl
# xsim {counter_la_fir_sim} -autoloadwcfg -runall
Time resolution is 1 ps
run -all
Reading counter_la_fir.hex
counter_la_fir.hex loaded into memory
Memory 5 bytes = 0x6f 0x00 0x00 0x0b 0x13
Test Started
Passed! Final Y[7:0] should be 0xa6. Latency:        5082 cycles
$finish called at time : 1604187500 ps : File "/workspace/lab-caravel_fir/testbench/counter_la_fir/counter_la_fir_tb.v" Line 173
exit
INFO: [Common 17-206] Exiting xsim at Mon May 26 14:21:31 2025...
Copying waveform file from container to host...
Successfully copied 48.1MB to /Users/yue/EESM6000C-1/Lab_4/Lab4-2/lab-caravel_fir/testbench/counter_la_fir/counter_la_fir.vcd
Waveform file copied to host.
Simulation finished.
````

![Screenshot 2025-05-26 at 10.24.54 PM](https://hackmd.io/_uploads/BJHRKxfMxg.png)

## What techniques are used to improve the throughput?
We can find that it has a very long period of time that `out_ss_tready` is 1 and waiting for the input data. We may need some methods to improve the SOC performance or optimize our C code.