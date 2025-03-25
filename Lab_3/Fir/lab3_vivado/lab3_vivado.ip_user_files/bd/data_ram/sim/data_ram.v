//Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
//Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2023.1 (win64) Build 3865809 Sun May  7 15:05:29 MDT 2023
//Date        : Sun Mar 23 19:25:42 2025
//Host        : CCVDIAI3007 running 64-bit major release  (build 9200)
//Command     : generate_target data_ram.bd
//Design      : data_ram
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "data_ram,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=data_ram,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=1,numReposBlks=1,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=USER,da_clkrst_cnt=1,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "data_ram.hwdef" *) 
module data_ram
   (A,
    CE,
    CLK,
    DIN,
    DOUT);
  input [9:0]A;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clockenable:1.0 CE.CE CE" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CE.CE, POLARITY ACTIVE_HIGH" *) input CE;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.CLK CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.CLK, CLK_DOMAIN data_ram_CLK, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, INSERT_VIP 0, PHASE 0.0" *) input CLK;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.DIN DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.DIN, LAYERED_METADATA undef" *) input [31:0]DIN;
  output [31:0]DOUT;

  wire [9:0]A_1;
  wire CE_1;
  wire CLK_1;
  wire [31:0]DIN_1;
  wire [31:0]data_ram_Q;

  assign A_1 = A[9:0];
  assign CE_1 = CE;
  assign CLK_1 = CLK;
  assign DIN_1 = DIN[31:0];
  assign DOUT[31:0] = data_ram_Q;
  data_ram_c_shift_ram_0_0 data_ram
       (.A(A_1),
        .CE(CE_1),
        .CLK(CLK_1),
        .D(DIN_1),
        .Q(data_ram_Q));
endmodule
