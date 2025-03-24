///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 20.02.2025 19:44 : 04
// Design Name: 
// Module Name: brent_kung_adder_nbit
// Project Name: Brent Kung Adder Design
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: This is a brent kung adder, you can set the value of ADDER_SIZE to be
//              2 ^ n (2, 4, 8, 16, 32, 64, 128 ....).
// 
// Dependencies: "gp_unit.sv" (used to get generate and propagate)
// 
// Revision: 0.01
// 
// Additional Comments: Nothing
// 
///////////////////////////////////////////////////////////////////////////////////////

`timescale 1ns/1ps

module tb_brent_kung_adder_nbit();

//------------------------ Prepare --------------------------------------------------//
  parameter ADDER_SIZE = 64;
  parameter TEST_NUM   = 20;

  logic [ADDER_SIZE - 1 : 0] in_op1, in_op2, out_res;
  logic [ADDER_SIZE - 1 : 0] exp_res;
  logic cin;
  logic cout;

  brent_kung_adder_nbit #(
    .ADDER_SIZE (ADDER_SIZE)
    ) dut (
      .in_op1  ( in_op1  ),
      .in_op2  ( in_op2  ), 
      .cin     ( cin     ), 
      .out_res ( out_res ), 
      .cout    ( cout    )
    );

  int err = 0;

//------------------------ Simulation -----------------------------------------------//
  initial begin
    $display("Starting Brent-Kung Adder Test");

    test();
    #10;
    $display("\nAll tests completed. Total errors = %0d", err);
    $finish;
  end

  initial begin
    $dumpfile("wave.vcd");
    $dumpvars();
  end

//------------------------ Task Define ----------------------------------------------//
  /////////////////////////////////////////////////////////////////////////////////////
  // Test
  /////////////////////////////////////////////////////////////////////////////////////
  task test();
    $display("\nTesting %0d-bit adder...", ADDER_SIZE);
    
    repeat(TEST_NUM) begin
      in_op1 = $signed(random_gen()); 
      in_op2 = $signed(random_gen());
      cin = $random[0];
      exp_res = $signed(in_op1 + in_op2 + {{(ADDER_SIZE - 1){1'b0}},{cin}});
      #10;
      check();
    end
  endtask

  /////////////////////////////////////////////////////////////////////////////////////
  // Check
  /////////////////////////////////////////////////////////////////////////////////////
  task automatic check( );
    if (out_res !== exp_res) begin
      $display("%0d-bit test FAIL: op1=%h op2=%h sum=%h (expected %h)",
               ADDER_SIZE, in_op1[ADDER_SIZE - 1 : 0], in_op2[ADDER_SIZE - 1 : 0], 
               out_res, exp_res);
      err = err + 1;
    end else begin 
      $display("%0d-bit test PASS: op1=%h op2=%h sum=%h (expected %h)",
               ADDER_SIZE, in_op1[ADDER_SIZE - 1 : 0], in_op2[ADDER_SIZE - 1 : 0], 
               out_res, exp_res);
    end
  endtask

//------------------------ Function Define ------------------------------------------//
  // **** Define function generate random number
  function automatic logic [ADDER_SIZE - 1 : 0] random_gen();
    for (int i = 0; i < ADDER_SIZE; i = i + 1) begin
      random_gen[i] = $random[0];
    end
    return random_gen;
  endfunction

endmodule