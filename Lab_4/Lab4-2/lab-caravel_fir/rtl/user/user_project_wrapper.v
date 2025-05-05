// SPDX-FileCopyrightText: 2020 Efabless Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// SPDX-License-Identifier: Apache-2.0

`default_nettype wire
/*
 *-------------------------------------------------------------
 *
 * user_project_wrapper
 *
 * This wrapper enumerates all of the pins available to the
 * user for the user project.
 *
 * An example user project is provided in this wrapper.  The
 * example should be removed and replaced with the actual
 * user project.
 *
 *-------------------------------------------------------------
 */

module user_project_wrapper #(
    parameter BITS = 32
) (
`ifdef USE_POWER_PINS
    inout vdda1,	// User area 1 3.3V supply
    inout vdda2,	// User area 2 3.3V supply
    inout vssa1,	// User area 1 analog ground
    inout vssa2,	// User area 2 analog ground
    inout vccd1,	// User area 1 1.8V supply
    inout vccd2,	// User area 2 1.8v supply
    inout vssd1,	// User area 1 digital ground
    inout vssd2,	// User area 2 digital ground
`endif

    // Wishbone Slave ports (WB MI A)
    input           wb_clk_i,
    input           wb_rst_i,
    input           wbs_stb_i,
    input           wbs_cyc_i,
    input           wbs_we_i,
    input  [3  : 0] wbs_sel_i,
    input  [31 : 0] wbs_dat_i,
    input  [31 : 0] wbs_adr_i,
    output          wbs_ack_o,
    output [31 : 0] wbs_dat_o,

    // Logic Analyzer Signals
    input  [127 : 0] la_data_in,
    output [127 : 0] la_data_out,
    input  [127 : 0] la_oenb,

    // IOs
    input  [`MPRJ_IO_PADS - 1 : 0] io_in,
    output [`MPRJ_IO_PADS - 1 : 0] io_out,
    output [`MPRJ_IO_PADS - 1 : 0] io_oeb,

    // Analog (direct connection to GPIO pad---use with caution)
    // Note that analog I/O is not available on the 7 lowest-numbered
    // GPIO pads, and so the analog_io indexing is offset from the
    // GPIO indexing by 7 (also upper 2 GPIOs do not have analog_io).
    inout [`MPRJ_IO_PADS - 10 : 0] analog_io,

    // Independent clock (on independent integer divider)
    input user_clock2,

    // User maskable interrupt signals
    output [2 : 0] user_irq
);

    wire          mem_cyc, axi_cyc;
    wire          mem_sel, axi_sel;
    wire          mem_ack, axi_ack;
    wire [31 : 0] mem_dat, axi_dat;

    // AXI-Lite
    wire          awready;
    wire          wready;
    wire          awvalid;
    wire [31 : 0] awaddr;
    wire          wvalid;
    wire [31 : 0] wdata;
    wire          arready;
    wire          rready;
    wire          arvalid;
    wire [31 : 0] araddr;
    wire          rvalid;
    wire [31 : 0] rdata;
    // AXIS
    wire          ss_tvalid;
    wire [31 : 0] ss_tdata;
    wire          ss_tlast;
    wire          ss_tready;
    wire          sm_tready;
    wire          sm_tvalid;
    wire [31 : 0] sm_tdata;
    wire          sm_tlast;
    // Tap and data RAM
    wire [3 : 0]  tap_WE;
    wire          tap_EN;
    wire [31 : 0] tap_Di;
    wire [9 : 0]  tap_A;
    wire [31 : 0] tap_Do;
    wire          data_EN;
    wire [31 : 0] data_Di;
    wire [9 : 0]  data_A;
    wire [31 : 0] data_Do;

    assign mem_sel = (wbs_adr_i[31:22] == 10'b0011_1000_00);
    assign axi_sel = (wbs_adr_i[31:20] == 12'b0011_0000_0000);
    assign mem_cyc = wbs_cyc_i & mem_sel;
    assign axi_cyc = wbs_cyc_i & axi_sel;
    assign wbs_ack_o = mem_ack | axi_ack;
    assign wbs_dat_o = ({ 32{mem_sel} } & mem_dat) | ({ 32{axi_sel} } & axi_dat);

    // user_project_exmen
    exmem exmem (
        .wb_clk_i(wb_clk_i),
        .wb_rst_i(wb_rst_i),
        .wbs_stb_i(wbs_stb_i),
        .wbs_cyc_i(mem_cyc),
        .wbs_we_i(wbs_we_i),
        .wbs_sel_i(wbs_sel_i),
        .wbs_dat_i(wbs_dat_i),
        .wbs_adr_i(wbs_adr_i),
        .wbs_ack_o(mem_ack),
        .wbs_dat_o(mem_dat)
    );

    // WB to AXI
    wb2axi wb2axi (
        .wb_clk_i(wb_clk_i),
        .wb_rst_i(wb_rst_i),
        .wbs_stb_i(wbs_stb_i),
        .wbs_cyc_i(axi_cyc),
        .wbs_we_i(wbs_we_i),
        .wbs_sel_i(wbs_sel_i),
        .wbs_dat_i(wbs_dat_i),
        .wbs_adr_i(wbs_adr_i),
        .wbs_ack_o(axi_ack),
        .wbs_dat_o(axi_dat),
        .awready(awready),
        .wready(wready),
        .awvalid(awvalid),
        .awaddr(awaddr),
        .wvalid(wvalid),
        .wdata(wdata),
        .arready(arready),
        .rready(rready),
        .arvalid(arvalid),
        .araddr(araddr),
        .rvalid(rvalid),
        .rdata(rdata),
        .ss_tvalid(ss_tvalid),
        .ss_tdata(ss_tdata),
        .ss_tlast(ss_tlast),
        .ss_tready(ss_tready),
        .sm_tready(sm_tready),
        .sm_tvalid(sm_tvalid),
        .sm_tdata(sm_tdata),
        .sm_tlast(sm_tlast)
    );

    // FIR
    fir_top fir_top (
        .out_s_awready(awready),
        .out_s_wready(wready),
        .in_s_awvalid(awvalid),
        .in_s_awaddr(awaddr),
        .in_s_wvalid(wvalid),
        .in_s_wdata(wdata),
        .out_s_arready(arready),
        .in_s_rready(rready),
        .in_s_arvalid(arvalid),
        .in_s_araddr(araddr),
        .out_s_rvalid(rvalid),
        .out_s_rdata(rdata),
        .in_ss_tvalid(ss_tvalid),
        .in_ss_tdata(ss_tdata),
        .in_ss_tlast(ss_tlast),
        .out_ss_tready(ss_tready),
        .in_sm_tready(sm_tready),
        .out_sm_tvalid(sm_tvalid),
        .out_sm_tdata(sm_tdata),
        .out_sm_tlast(sm_tlast),
        .out_tap_WE(tap_WE),
        .out_tap_EN(tap_EN),
        .out_tap_Di(tap_Di),
        .out_tap_A(tap_A),
        .in_tap_Do(tap_Do),
        .out_data_EN(data_EN),
        .out_data_Di(data_Di),
        .out_data_A(data_A),
        .in_data_Do(data_Do),
        .aclk(wb_clk_i),
        .aresetn(!wb_rst_i)
    );

    // bram for FIR
    tap_ram_behav tap_ram (
        .clk(wb_clk_i),
        .in_WE(tap_WE),
        .in_EN(tap_EN),
        .in_Di(tap_Di),
        .out_Do(tap_Do),
        .in_A(tap_A)
    );

    data_ram_behav data_ram (
        .clk(wb_clk_i),
        .in_CE(data_EN),
        .in_Di(data_Di),
        .out_Do(data_Do),
        .in_A(data_A)
    );

endmodule	// user_project_wrapper
