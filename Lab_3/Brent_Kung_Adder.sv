`include "define.sv"
module adder_unit (
  input  logic in_g1, in_g2,
  input  logic in_p1, in_p2,
  output logic out_g,
  output logic out_p,
);

  assign out_g = in_g2 || (in_p2 && in_g1);
  assign out_p = in_p2 && in_p1;

endmodule


module brent_kung_adder (
  input  logic [`ADDER_SIZE - 1 : 0] in_op1,
  input  logic [`ADDER_SIZE - 1 : 0] in_op2,
  output logic [`ADDER_SIZE - 1 : 0] out_res,

  input  logic cin,
  output logic cout
);

//------------------------ Stage 0 -------------------------//
  logic [`ADDER_SIZE - 1 : 0] P0;  // Propagate signal
  logic [`ADDER_SIZE - 1 : 0] G0;  // Generate signal
  assign P0 = in_op1 ^ in_op2;
  assign G0 = in_op1 & in_op2;

//------------------------ Stage 1 -------------------------//
  logic [`ADDER_SIZE / 2 - 1 : 0] P1;
  logic [`ADDER_SIZE / 2 - 1 : 0] G1;
  
  genvar i;
  generate
    for (i = 0; i < (`ADDER_SIZE / 2); i = i + 1) begin : STAGE_1
      adder_unit stage_1_gp(
        .in_g1  ( G0[i * 2]     ),
        .in_g2  ( G0[i * 2 + 1] ),
        .in_p1  ( P0[i * 2]     ),
        .in_p2  ( P0[i * 2 + 1] ),
        .out_g  ( G1[i]         ),
        .out_p  ( P1[i]         )
      );
    end
  endgenerate

//------------------------ Stage 2 -------------------------//
  logic [`ADDER_SIZE / 4 - 1 : 0] P2;
  logic [`ADDER_SIZE / 4 - 1 : 0] G2;
  
  generate
    for (i = 0; i < (`ADDER_SIZE / 4); i = i + 1) begin : STAGE_2
      adder_unit stage_2_gp(
        .in_g1  ( G1[i * 2]     ),
        .in_g2  ( G1[i * 2 + 1] ),
        .in_p1  ( P1[i * 2]     ),
        .in_p2  ( P1[i * 2 + 1] ),
        .out_g  ( G2[i]         ),
        .out_p  ( P2[i]         )
      );
    end
  endgenerate

//------------------------ Stage 3 -------------------------//
  logic [`ADDER_SIZE / 8 - 1 : 0] P3;
  logic [`ADDER_SIZE / 8 - 1 : 0] G3;
  
  generate
    for (i = 0; i < (`ADDER_SIZE / 8); i = i + 1) begin : STAGE_3
      adder_unit stage_3_gp(
        .in_g1  ( G2[i * 2]     ),
        .in_g2  ( G2[i * 2 + 1] ),
        .in_p1  ( P2[i * 2]     ),
        .in_p2  ( P2[i * 2 + 1] ),
        .out_g  ( G3[i]         ),
        .out_p  ( P3[i]         )
      );
  end
  endgenerate

//------------------------ Stage 4 -------------------------//
  logic [`ADDER_SIZE / 16 - 1 : 0] P4;
  logic [`ADDER_SIZE / 16 - 1 : 0] G4;
  
  generate
    for (i = 0; i < (`ADDER_SIZE / 16); i = i + 1) begin : STAGE_4
      adder_unit stage_4_gp(
        .in_g1  ( G3[i*2]   ),
        .in_g2  ( G3[i*2+1] ),
        .in_p1  ( P3[i*2]   ),
        .in_p2  ( P3[i*2+1] ),
        .out_g  ( G4[i]     ),
        .out_p  ( P4[i]     )
      );
    end
  endgenerate

//------------------------ Stage 5 -------------------------//
  logic [`ADDER_SIZE / 32 - 1 : 0] P5;
  logic [`ADDER_SIZE / 32 - 1 : 0] G5;
  
  generate
    for (i = 0; i < (`ADDER_SIZE / 32); i = i + 1) begin : STAGE_5
      adder_unit stage_5_gp(
        .in_g1  ( G4[i * 2]     ),
        .in_g2  ( G4[i * 2 + 1] ),
        .in_p1  ( P4[i * 2]     ),
        .in_p2  ( P4[i * 2 + 1] ),
        .out_g  ( G5[i]         ),
        .out_p  ( P5[i]         )
      );
    end
  endgenerate

//------------------------ Stage 6 -------------------------//
  logic [`ADDER_SIZE / 64 - 1 : 0] P6;
  logic [`ADDER_SIZE / 64 - 1 : 0] G6;
  
  generate
    for (i = 0; i < (`ADDER_SIZE / 64); i = i + 1) begin: STAGE_6
      adder_unit stage_6_gp(
        .in_g1  ( G5[i * 2]     ),
        .in_g2  ( G5[i * 2 + 1] ),
        .in_p1  ( P5[i * 2]     ),
        .in_p2  ( P5[i * 2 + 1] ),
        .out_g  ( G6[i]         ),
        .out_p  ( P6[i]         )
      );
    end
  endgenerate

//------------------------ Calculate Carry in --------------//
  logic [`ADDER_SIZE - 1 : 0] CIN;
  
  //------------------------ Highest bit Carry in ----------//
  assign CIN[`ADDER_SIZE - 1] = (G0[`ADDER_SIZE - 1])
                             || (G0[`ADDER_SIZE - 2]      && P0[`ADDER_SIZE - 1]) 
                             || (G1[`ADDER_SIZE / 2 - 1]  && P0[`ADDER_SIZE - 1] && P0[`ADDER_SIZE - 2]) 
                             || (G2[`ADDER_SIZE / 4 - 1]  && P0[`ADDER_SIZE - 1] && P0[`ADDER_SIZE - 2] && P1[`ADDER_SIZE / 2 - 1]) 
                             || (G3[`ADDER_SIZE / 8 - 1]  && P0[`ADDER_SIZE - 1] && P0[`ADDER_SIZE - 2] && P1[`ADDER_SIZE / 2 - 1] && P2[`ADDER_SIZE / 4 - 1]) 
                             || (G4[`ADDER_SIZE / 16 - 1] && P0[`ADDER_SIZE - 1] && P0[`ADDER_SIZE - 2] && P1[`ADDER_SIZE / 2 - 1] && P2[`ADDER_SIZE / 4 - 1] && P3[`ADDER_SIZE / 8 - 1]) 
                             || (G5[`ADDER_SIZE / 32 - 1] && P0[`ADDER_SIZE - 1] && P0[`ADDER_SIZE - 2] && P1[`ADDER_SIZE / 2 - 1] && P2[`ADDER_SIZE / 4 - 1] && P3[`ADDER_SIZE / 8 - 1] && P4[`ADDER_SIZE / 16 - 1]) 
                             || (G6[`ADDER_SIZE / 64 - 1] && P0[`ADDER_SIZE - 1] && P0[`ADDER_SIZE - 2] && P1[`ADDER_SIZE / 2 - 1] && P2[`ADDER_SIZE / 4 - 1] && P3[`ADDER_SIZE / 8 - 1] && P4[`ADDER_SIZE / 16 - 1] && P5[`ADDER_SIZE / 32 - 1]);
  
  //------------------------ Lowest bit Carry in -----------//
  assign CIN[0] = cin;

  //------------------------ Other bits Carry in -----------//
  ////////////////////////////////////////////////////////////
  // Odd bits
  ////////////////////////////////////////////////////////////
  generate
    for (i = 1; i < (`ADDER_SIZE - 1); i = i + 2) begin
      assign CIN[i] = G0[i] || (G0[i - 1] && P0[i]);
    end
  endgenerate

  ////////////////////////////////////////////////////////////
  // Bits that divisible by 4
  ////////////////////////////////////////////////////////////
  generate
    for (i = 4; i < (`ADDER_SIZE - 1); i = i + 4) begin
      assign CIN[i] = (G0[i])
                   || (G0[i + 1] && P0[i]) 
                   || (G1[i / 4] && P0[i] && P0[i + 1]);
    end
  endgenerate

  ////////////////////////////////////////////////////////////
  // Bits that divisible by 8
  ////////////////////////////////////////////////////////////
  generate
    for (i = 8; i < (`ADDER_SIZE - 1); i = i + 8) begin
      assign CIN[i] = (G0[i])
                   || (G0[i + 1] && P0[i]) 
                   || (G1[(i + 2) / 4] && P0[i] && P0[i + 1]) 
                   || (G2[i / 8] && P0[i] && P0[i + 1] && P1[(i + 2) / 2]);
    end
  endgenerate

  ////////////////////////////////////////////////////////////
  // Bits that divisible by 16
  ////////////////////////////////////////////////////////////
  generate
    for (i = 16; i < (`ADDER_SIZE - 1); i = i + 16) begin
      assign CIN[i] = (G0[i])
                   || (G0[i + 1]       && P0[i]) 
                   || (G1[(i + 2) / 4] && P0[i] && P0[i + 1]) 
                   || (G2[(i + 4) / 8] && P0[i] && P0[i + 1] && P1[(i + 2) / 2]) 
                   || (G3[i / 16]      && P0[i] && P0[i + 1] && P1[(i + 2) / 2] && P2[(i + 4) / 4]);
    end
  endgenerate

  ////////////////////////////////////////////////////////////
  // Bits that divisible by 32
  ////////////////////////////////////////////////////////////
  generate
    for (i = 32; i < (`ADDER_SIZE - 1); i = i + 32) begin
      assign CIN[i] = (G0[i]) 
                   || (G0[i + 1]        && P0[i])
                   || (G1[(i + 2) / 4]  && P0[i] && P0[i + 1]) 
                   || (G2[(i + 4) / 8]  && P0[i] && P0[i + 1] && P1[(i + 2) / 2]) 
                   || (G3[(i + 8) / 16] && P0[i] && P0[i + 1] && P1[(i + 2) / 2] && P2[(i + 4) / 4]) 
                   || (G4[i / 32]       && P0[i] && P0[i + 1] && P1[(i + 2) / 2] && P2[(i + 4) / 4] && P3[(i + 8) / 16]);
    end
  endgenerate

//------------------------ Calculate Result ----------------//
    assign out_res = P0 ^ CIN;
    assign cout = G0[`ADDER_SIZE - 1] || (P0[`ADDER_SIZE - 1] && CIN[`ADDER_SIZE - 1]);

endmodule