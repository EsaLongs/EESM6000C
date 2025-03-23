//Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
//Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2023.1 (win64) Build 3865809 Sun May  7 15:05:29 MDT 2023
//Date        : Sun Mar 23 19:25:34 2025
//Host        : CCVDIAI3007 running 64-bit major release  (build 9200)
//Command     : generate_target tap_ram.bd
//Design      : tap_ram
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "tap_ram,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=tap_ram,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=1,numReposBlks=1,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=USER,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "tap_ram.hwdef" *) 
module tap_ram
   (A,
    CLK,
    DIN,
    DOUT,
    EN,
    WE);
  input [9:0]A;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.CLK CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.CLK, CLK_DOMAIN tap_ram_CLK, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, INSERT_VIP 0, PHASE 0.0" *) input CLK;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.DIN DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.DIN, LAYERED_METADATA undef" *) input [31:0]DIN;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 DATA.DOUT DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DATA.DOUT, LAYERED_METADATA undef" *) output [31:0]DOUT;
  input EN;
  input [3:0]WE;

  wire [9:0]A_1;
  wire CLK_1;
  wire [31:0]DIN_1;
  wire EN_1;
  wire [3:0]WE_1;
  wire [31:0]tap_ram_douta;

  assign A_1 = A[9:0];
  assign CLK_1 = CLK;
  assign DIN_1 = DIN[31:0];
  assign DOUT[31:0] = tap_ram_douta;
  assign EN_1 = EN;
  assign WE_1 = WE[3:0];
  tap_ram_blk_mem_gen_0_0 tap_ram
       (.addra(A_1),
        .clka(CLK_1),
        .dina(DIN_1),
        .douta(tap_ram_douta),
        .ena(EN_1),
        .wea(WE_1));
endmodule
