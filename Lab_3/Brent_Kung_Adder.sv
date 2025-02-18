`include "define.sv"
module _unit (
  input  logic in_g1, in_g2,
  input  logic in_p1, in_p2,
  output logic out_g,
  output logic out_p
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

  genvar i;

//------------------------ Stage 0 -------------------------//
  logic [`ADDER_SIZE - 1 : 0] P0;  // Propagate signal
  logic [`ADDER_SIZE - 1 : 0] G0;  // Generate signal
  assign P0 = in_op1 ^ in_op2;
  assign G0 = in_op1 & in_op2;

//------------------------ Stage 1 -------------------------//
  generate
    if (`ADDER_SIZE > (1 - 1)) begin

      logic [`ADDER_SIZE / 2 - 1 : 0] P1;
      logic [`ADDER_SIZE / 2 - 1 : 0] G1;

      for (i = 0; i < (`ADDER_SIZE / 2); i = i + 1) begin : STAGE_1
        gp_unit stage_1_gp (
          .in_g1  ( G0[i * 2]     ),
          .in_g2  ( G0[i * 2 + 1] ),
          .in_p1  ( P0[i * 2]     ),
          .in_p2  ( P0[i * 2 + 1] ),
          .out_g  ( G1[i]         ),
          .out_p  ( P1[i]         )
        );
      end
    end
  endgenerate

//------------------------ Stage 2 -------------------------//  
  generate
    if (`ADDER_SIZE > (4 - 1)) begin

      logic [`ADDER_SIZE / 4 - 1 : 0] P2;
      logic [`ADDER_SIZE / 4 - 1 : 0] G2;

      for (i = 0; i < (`ADDER_SIZE / 4); i = i + 1) begin : STAGE_2
        gp_unit stage_2_gp (
          .in_g1  ( G1[i * 2]     ),
          .in_g2  ( G1[i * 2 + 1] ),
          .in_p1  ( P1[i * 2]     ),
          .in_p2  ( P1[i * 2 + 1] ),
          .out_g  ( G2[i]         ),
          .out_p  ( P2[i]         )
        );
      end
    end
  endgenerate

//------------------------ Stage 3 -------------------------//
  generate
    if (`ADDER_SIZE > (8 - 1)) begin
      logic [`ADDER_SIZE / 8 - 1 : 0] P3;
      logic [`ADDER_SIZE / 8 - 1 : 0] G3;

      for (i = 0; i < (`ADDER_SIZE / 8); i = i + 1) begin : STAGE_3
        gp_unit stage_3_gp (
          .in_g1  ( G2[i * 2]     ),
          .in_g2  ( G2[i * 2 + 1] ),
          .in_p1  ( P2[i * 2]     ),
          .in_p2  ( P2[i * 2 + 1] ),
          .out_g  ( G3[i]         ),
          .out_p  ( P3[i]         )
        );
      end
    end
  endgenerate

//------------------------ Stage 4 -------------------------//
  generate
    if (`ADDER_SIZE > (16 - 1)) begin
      
      logic [`ADDER_SIZE / 16 - 1 : 0] P4;
      logic [`ADDER_SIZE / 16 - 1 : 0] G4;

      for (i = 0; i < (`ADDER_SIZE / 16); i = i + 1) begin : STAGE_4
        gp_unit stage_4_gp (
          .in_g1  ( G3[i*2]   ),
          .in_g2  ( G3[i*2+1] ),
          .in_p1  ( P3[i*2]   ),
          .in_p2  ( P3[i*2+1] ),
          .out_g  ( G4[i]     ),
          .out_p  ( P4[i]     )
        );
      end
    end
  endgenerate

//------------------------ Stage 5 -------------------------//
  generate
    if (`ADDER_SIZE > (32 - 1)) begin

      logic [`ADDER_SIZE / 32 - 1 : 0] P5;
      logic [`ADDER_SIZE / 32 - 1 : 0] G5;

      for (i = 0; i < (`ADDER_SIZE / 32); i = i + 1) begin : STAGE_5
        gp_unit stage_5_gp (
          .in_g1  ( G4[i * 2]     ),
          .in_g2  ( G4[i * 2 + 1] ),
          .in_p1  ( P4[i * 2]     ),
          .in_p2  ( P4[i * 2 + 1] ),
          .out_g  ( G5[i]         ),
          .out_p  ( P5[i]         )
        );
      end
    end
  endgenerate

//------------------------ Stage 6 -------------------------//
  generate
    if (`ADDER_SIZE > (64 - 1)) begin

      logic [`ADDER_SIZE / 64 - 1 : 0] P6;
      logic [`ADDER_SIZE / 64 - 1 : 0] G6;

      for (i = 0; i < (`ADDER_SIZE / 64); i = i + 1) begin : STAGE_5
        gp_unit stage_5_gp (
          .in_g1  ( G4[i * 2]     ),
          .in_g2  ( G4[i * 2 + 1] ),
          .in_p1  ( P4[i * 2]     ),
          .in_p2  ( P4[i * 2 + 1] ),
          .out_g  ( G5[i]         ),
          .out_p  ( P5[i]         )
        );
      end
    end
  endgenerate

//------------------------ Calculate Carry in --------------//
  logic [`ADDER_SIZE - 1 : 0] CIN;
  
  //------------------------ Lowest bit Carry in -----------//
  assign CIN[0] = cin;

  //------------------------ Other bits Carry in -----------//
  ////////////////////////////////////////////////////////////
  // Bits that divisible by 32
  ////////////////////////////////////////////////////////////
  generate
    for (i = 32; i < (`ADDER_SIZE - 1); i = i + 32) begin
      assign CIN[i] = G5[0] || (P5[0] && cin);
    end
  endgenerate

  ////////////////////////////////////////////////////////////
  // Bits that divisible by 16 but not 32
  ////////////////////////////////////////////////////////////
  generate
    for (i = 16; i < (`ADDER_SIZE - 1); i = i + 32) begin
        assign CIN[i] = G4[0] || (P5[0] && cin);
    end
  endgenerate  
      
  ////////////////////////////////////////////////////////////
  // Bits that divisible by 8 but not 16, 32
  ////////////////////////////////////////////////////////////
  generate
    for (i = 8; i < (`ADDER_SIZE - 1); i = i + 16) begin
        assign CIN[i] = (G0[i])
                     || (G0[i + 1] && P0[i]) 
                     || (G1[(i + 2) / 4] && P0[i] && P0[i + 1]) 
                     || (G2[i / 8] && P0[i] && P0[i + 1] && P1[(i + 2) / 2]);
    end
  endgenerate    
      
  ////////////////////////////////////////////////////////////
  // Bits that divisible by 4 but not 8, 16, 32
  ////////////////////////////////////////////////////////////
  generate
    for (i = 4; i < (`ADDER_SIZE - 1); i = i + 8) begin  
      assign CIN[i] = (G0[i])
                   || (G0[i + 1] && P0[i]) 
                   || (G1[i / 4] && P0[i] && P0[i + 1]);
    end
  endgenerate

  ////////////////////////////////////////////////////////////
  // Bits that divisible by 2 but not 4, 8, 16, 32
  ////////////////////////////////////////////////////////////
  generate
    for (i = 2; i < (`ADDER_SIZE - 1); i = i + 4) begin  
      assign CIN[i] = G0[i] || (G0[i - 1] && P0[i]);
    end
  endgenerate

  ////////////////////////////////////////////////////////////
  // Odd bits
  ////////////////////////////////////////////////////////////
  generate
    for (i = 1; i < (`ADDER_SIZE - 1); i = i + 2) begin  
      assign CIN[i] = G0[i - 1] || (P0[i - 1] && CIN[i - 1]);
    end
  endgenerate 

//------------------------ Calculate Result ----------------//
    assign out_res = P0 ^ CIN;
    assign cout = G6 || (P6 && cin);

endmodule