module brent_kung_adder (
  input  logic [16 - 1 : 0] in_op1,
  input  logic [16 - 1 : 0] in_op2,
  output logic [16 - 1 : 0] out_res,

  input  logic cin,
  output logic cout
);

  genvar i;

//------------------------ Stage 0 -------------------------//
  logic [16 - 1 : 0] P0;  // Propagate signal
  logic [16 - 1 : 0] G0;  // Generate signal
  assign P0 = in_op1 ^ in_op2;
  assign G0 = in_op1 & in_op2;

//------------------------ Stage 1 -------------------------//
  logic [16 / 2 - 1 : 0] P1;
  logic [16 / 2 - 1 : 0] G1;

  generate
      for (i = 0; i < (16 / 2); i = i + 1) begin : STAGE_1
        gp_unit stage_1_gp (
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
  logic [16 / 4 - 1 : 0] P2;
  logic [16 / 4 - 1 : 0] G2;

  generate
      for (i = 0; i < (16 / 4); i = i + 1) begin : STAGE_2
        gp_unit stage_2_gp (
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
  logic [16 / 8 - 1 : 0] P3;
  logic [16 / 8 - 1 : 0] G3;

  generate
      for (i = 0; i < (16 / 8); i = i + 1) begin : STAGE_3
        gp_unit stage_3_gp (
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
  logic P4;
  logic G4;

//------------------------ Stage 5 -------------------------//
  logic P5;
  logic G5;

  gp_unit stage_5_gp (
    .in_g1  ( G3[0] ),
    .in_g2  ( G2[2] ),
    .in_p1  ( P3[0] ),
    .in_p2  ( P2[2] ),
    .out_g  ( G5    ),
    .out_p  ( P5    )
  );

//------------------------ Stage 6 -------------------------//
  logic [3 - 1 : 0] P6;
  logic [3 - 1 : 0] G6;

  gp_unit stage_6_gp_0 (
    .in_g1  ( G2[0] ),
    .in_g2  ( G1[2] ),
    .in_p1  ( P2[0] ),
    .in_p2  ( P1[2] ),
    .out_g  ( G6[0] ),
    .out_p  ( P6[0] )
  );

  gp_unit stage_6_gp_1 (
    .in_g1  ( G3[0] ),
    .in_g2  ( G1[4] ),
    .in_p1  ( P3[0] ),
    .in_p2  ( P1[4] ),
    .out_g  ( G6[1] ),
    .out_p  ( P6[1] )
  );

  gp_unit stage_6_gp_2 (
    .in_g1  ( G5    ),
    .in_g2  ( G1[6] ),
    .in_p1  ( P5    ),
    .in_p2  ( P1[6] ),
    .out_g  ( G6[2] ),
    .out_p  ( P6[2] )
  );

//------------------------ Stage 7 -------------------------//
  logic [7 - 1 : 0] P7;
  logic [7 - 1 : 0] G7;

  gp_unit stage_7_gp_0 (
    .in_g1  ( G1[0] ),
    .in_g2  ( G0[2] ),
    .in_p1  ( P1[0] ),
    .in_p2  ( P0[2] ),
    .out_g  ( G7[0] ),
    .out_p  ( P7[0] )
  );

  gp_unit stage_7_gp_1 (
    .in_g1  ( G2[0] ),
    .in_g2  ( G0[4] ),
    .in_p1  ( P2[0] ),
    .in_p2  ( P0[4] ),
    .out_g  ( G7[1] ),
    .out_p  ( P7[1] )
  );

  gp_unit stage_7_gp_2 (
    .in_g1  ( G6[0] ),
    .in_g2  ( G0[6] ),
    .in_p1  ( P6[0] ),
    .in_p2  ( P0[6] ),
    .out_g  ( G7[2] ),
    .out_p  ( P7[2] )
  );

  gp_unit stage_7_gp_3 (
    .in_g1  ( G3[0] ),
    .in_g2  ( G0[8] ),
    .in_p1  ( P3[0] ),
    .in_p2  ( P0[8] ),
    .out_g  ( G7[3] ),
    .out_p  ( P7[3] )
  );

  gp_unit stage_7_gp_4 (
    .in_g1  ( G6[1] ),
    .in_g2  ( G0[10] ),
    .in_p1  ( P6[1] ),
    .in_p2  ( P0[10] ),
    .out_g  ( G7[4] ),
    .out_p  ( P7[4] )
  );

  gp_unit stage_7_gp_5 (
    .in_g1  ( G5     ),
    .in_g2  ( G0[12] ),
    .in_p1  ( P5     ),
    .in_p2  ( P0[12] ),
    .out_g  ( G7[5]  ),
    .out_p  ( P7[5]  )
  );

  gp_unit stage_7_gp_6 (
    .in_g1  ( G6[2]  ),
    .in_g2  ( G0[14] ),
    .in_p1  ( P6[2]  ),
    .in_p2  ( P0[14] ),
    .out_g  ( G7[6]  ),
    .out_p  ( P7[6]  )
  );

//------------------------ Calculate Carry -----------------//
  logic [15 : 0] COUT;
  logic [15 : 0] CIN;
  //------------------------ Carry In ----------------------//
  assign CIN[0]    = cin;
  assign CIN[15:1] = COUT[14:0]
  
  //------------------------ Other Carry  Out --------------//
  ////////////////////////////////////////////////////////////
  // Bits 0, 1, 5, 0, 11, 13
  ////////////////////////////////////////////////////////////
  assign COUT[0]  = G0[0];
  assign COUT[1]  = G1[0];
  assign COUT[3]  = G2[0];
  assign COUT[5]  = G6[0];
  assign COUT[7]  = G3[0];
  assign COUT[9]  = G6[1];
  assign COUT[11] = G5;
  assign COUT[13] = G6[2];
  assign COUT[15] = G4;

  ////////////////////////////////////////////////////////////
  // Bits 2, 4, 6, 8, 10, 12, 14
  ////////////////////////////////////////////////////////////
  generate
    for (i = 2; i < 15; i = i + 2) begin
      COUT[i] = G7[i / 2];
    end
  endgenerate

//------------------------ Calculate Result ----------------//
  assign out_res = P0 ^ CIN;
  assign cout    = COUT[15];

endmodule