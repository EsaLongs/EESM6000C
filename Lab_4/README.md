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

## Waveform
![Screenshot 2025-05-08 at 9.54.51 PM](https://hackmd.io/_uploads/r1XvdE5glx.png)

<p style="text-align:center; color:black; font-size:16px;">Writting to tap RAM</p>

![Screenshot 2025-05-08 at 9.55.51 PM](https://hackmd.io/_uploads/rJHP_45xee.png)

<p style="text-align:center; color:black; font-size:16px;">Read from data RAM</p>

![Screenshot 2025-05-08 at 9.57.32 PM](https://hackmd.io/_uploads/S1vPONqglx.png)

<p style="text-align:center; color:black; font-size:16px;">Fir output</p>

## What is the FIR engine theoretical throughput, i.e. data rate? Measured throughput?
Idealy it needs 12 cycles, but actually costs 5151 / 11 around 469 cycles

![Screenshot 2025-05-08 at 9.51.12 PM](https://hackmd.io/_uploads/ByycO45xxe.png)


## What is the latency for firmware to feed data?
It takes total 5151 cycles to calculate 11 (dlength) data.

## What techniques are used to improve the throughput?
From the perspective of the FIR, since there is no external buffer for this FIR, the calculation and data reception will be suspended when the receiving end is not ready to receive. Therefore, a FIFO can be connected at the input and output ends to temporarily store data and reduce the stall situation.

From the software perspective, there is a large delay in the data provided by the firmware. To improve this, the input of X[n] can be separated from the output of Y[n], and X[n] can be allowed to be input into the user project area before receiving the output of Y[n]. This will improve the delay between each data input and increase the throughput.

## Any other insights?
No.