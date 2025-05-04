///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 20.02.2025 19:44:04
// Design Name: 
// Module Name: brent_kung_adder_nbit
// Project Name:
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: This is a brent kung adder, you can set `ADDER_SIZE` to any value by yourself
// 
// Dependencies: "gp_unit.sv" (used to get generate and propagate)
// 
// Revision: 0.01
// 
// Additional Comments: Updated description for clarity
///////////////////////////////////////////////////////////////////////////////////////

`timescale 1ns/1ps

module brent_kung_adder_nbit #(
  parameter ADDER_SIZE = 23,
  parameter ADDER_SIZE_SYN = cal_size_syn(ADDER_SIZE)
  ) (
  input  logic [ADDER_SIZE - 1 : 0] in_op1,
  input  logic [ADDER_SIZE - 1 : 0] in_op2,
  output logic [ADDER_SIZE - 1 : 0] out_res,

  input  logic cin,
  output logic cout
);
  
  genvar i, j;
  logic [ADDER_SIZE - 1 : 0] G [2 * ($clog2(ADDER_SIZE_SYN)) - 1 : 0];
  logic [ADDER_SIZE - 1 : 0] P [2 * ($clog2(ADDER_SIZE_SYN)) - 1 : 0];
  
//------------------------ Stage 0 --------------------------------------------------//
  assign G[0][ADDER_SIZE - 1 : 1] = in_op1[ADDER_SIZE - 1 : 1] & in_op2[ADDER_SIZE - 1 : 1];
  assign P[0][ADDER_SIZE - 1 : 1] = in_op1[ADDER_SIZE - 1 : 1] ^ in_op2[ADDER_SIZE - 1 : 1];
  assign G[0][0] = (in_op1[0] && in_op2[0]) || (in_op1[0] && cin) || (in_op2[0] && cin);
  assign P[0][0] = 1'b0;
  
//------------------------ Stage 1 to log2(ADDER_SIZE_SYN) --------------------------//
  generate
    for (i = 1; i < ($clog2(ADDER_SIZE_SYN) + 1); i = i + 1) begin
      for (j = 0; j < ADDER_SIZE; j = j + 1) begin
        if (((j + 1) % (2 ** i)) == 0) begin
          gp_unit stage_gp  (
            .in_g1  ( G[i - 1][j - 2 ** (i - 1)] ),
            .in_g2  ( G[i - 1][j]                ),
            .in_p1  ( P[i - 1][j - 2 ** (i - 1)] ),
            .in_p2  ( P[i - 1][j]                ),
            .out_g  ( G[i][j]                    ),
            .out_p  ( P[i][j]                    )
          );
        end else begin
          assign G[i][j] = G[i - 1][j];
          assign P[i][j] = P[i - 1][j];
        end
      end 
    end
  endgenerate
///////////////////////////////////////////////////////////////////////////////////////

//------------------------ Last stage to stage 2log2(ADDER_SIZE_SYN) - 1 ------------//
  generate
    localparam b = $clog2(ADDER_SIZE_SYN);          // The last row for the first part
    localparam e = 2 * $clog2(ADDER_SIZE_SYN) - 1;  // The end row for the second part
    for (i = b + 1; i < e + 1; i = i + 1) begin
      for (j = 0; j < ADDER_SIZE; j = j + 1) begin
    // ** The if condition below may looks confusing. It can be written with 
    //    another structure: if ((j - a) % b ==0) && ((j - a) >= 0). 'a' is the 
    //    first bit that uses gp_unit in each row of the second part. It can be 
    //    written as a = (ADDER_SIZE_SYN / (2 ** (i - b + 1))) * 3 - 1. 'b' is the 
    //    distance between two gp_unit in each row. b = ADDER_SIZE_SYN / (2 ** (i - b)). 
    //    The last condition ((j - a) >= 0) is to throw the bits on the right side 
    //    of the a. For example, 3(j here) - 11(a here) = -8(-b here), -8 % 8 is 
    //    also 0, but this kind of bit should not be used with gp_unit.
        if (
            (
             ((j - ((ADDER_SIZE_SYN / (2 ** (i - b + 1))) * 3 - 1))
           % (ADDER_SIZE_SYN / (2 ** (i - b)))) 
          == 0
            )
         && ( (j - ((ADDER_SIZE_SYN / (2 ** (i - b + 1))) * 3 - 1)) >= 0)
           ) begin
          gp_unit stage_gp (
            .in_g1  ( G[i - 1][j - ((ADDER_SIZE_SYN / (2 ** (i - b))) / 2)] ),
            .in_g2  ( G[i - 1][j]                                       ),
            .in_p1  ( P[i - 1][j - ((ADDER_SIZE_SYN / (2 ** (i - b))) / 2)] ),
            .in_p2  ( P[i - 1][j]                                       ),
            .out_g  ( G[i][j]                                           ),
            .out_p  ( P[i][j]                                           )
        );
        end else begin
          assign G[i][j] = G[i - 1][j];
          assign P[i][j] = P[i - 1][j];
        end
      end
    end
  endgenerate

//------------------------ Calculate Result -----------------------------------------//
  logic [ADDER_SIZE - 1 : 0] COUT;
  logic [ADDER_SIZE - 1 : 0] CIN;
  assign COUT = G[2 * ($clog2(ADDER_SIZE_SYN)) - 1];
  assign CIN = {COUT[ADDER_SIZE - 2 : 0], cin};
  
  assign out_res[ADDER_SIZE - 1 : 1] = P[0][ADDER_SIZE - 1 : 1] ^ CIN[ADDER_SIZE - 1 : 1];
  assign out_res[0] = in_op1[0] ^^ in_op2[0] ^^ CIN[0];  
  assign cout = COUT[ADDER_SIZE - 1];

//------------------------ Function Define ------------------------------------------//
  // ** In the first version of this design, we just use parameter `ADDER_SIZE_SYN` to
  //    generate a half-fixed size adder (the size will be restricted to 2, 4, 8, 16, 
  //    32, 64, 128, 256 .... ). In this new design, we will use `ADDER_SIZE` to "cut off"
  //    the unused bits. For example, if ADDER_SIZE = 23, orginally we will try to build
  //    a 32-bit adder, but now we will just use gp_unit to instantiate 23 bits.
  function int cal_size_syn (input int size_conf);
    for (int i = 0; (2 ** i) < size_conf; i = i + 1) begin
      if ((2 ** (i + 1)) >= size_conf) begin
        cal_size_syn = 2 ** i;
        return cal_size_syn;
      end
    end
  endfunction

endmodule
