module brent_kung_adder_32bit (
  input  logic [32 - 1 : 0] in_op1,
  input  logic [32 - 1 : 0] in_op2,
  output logic [32 - 1 : 0] out_res,

  input  logic cin,
  output logic cout
);

  genvar i;

//------------------------ Stage 0 -------------------------//
  logic [32 - 1 : 0] P0;  // Propagate signal
  logic [32 - 1 : 0] G0;  // Generate signal
  
  assign P0[32 - 1 : 1] = in_op1[32 - 1 : 1] ^ in_op2[32 - 1 : 1];
  assign G0[32 - 1 : 1] = in_op1[32 - 1 : 1] & in_op2[32 - 1 : 1];
  assign P0[0] = 1'b0;
  assign G0[0] = (in_op1[0] && in_op2[0]) || (in_op1[0] && cin) || (in_op2[0] && cin);

//------------------------ Stage 1 -------------------------//
  logic [32 / 2 - 1 : 0] P1;
  logic [32 / 2 - 1 : 0] G1;

  generate
    for (i = 0; i < (32 / 2); i = i + 1) begin : STAGE_1
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
  logic [32 / 4 - 1 : 0] P2;
  logic [32 / 4 - 1 : 0] G2;

  generate
    for (i = 0; i < (32 / 4); i = i + 1) begin : STAGE_2
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
  logic [32 / 8 - 1 : 0] P3;
  logic [32 / 8 - 1 : 0] G3;

  generate
    for (i = 0; i < (32 / 8); i = i + 1) begin : STAGE_3
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
  logic [32 / 16 - 1 : 0] P4;
  logic [32 / 16 - 1 : 0] G4;

  generate
    for (i = 0; i < (32 / 16); i = i + 1) begin : STAGE_3
      gp_unit stage_4_gp (
        .in_g1  ( G2[i * 2]     ),
        .in_g2  ( G2[i * 2 + 1] ),
        .in_p1  ( P2[i * 2]     ),
        .in_p2  ( P2[i * 2 + 1] ),
        .out_g  ( G3[i]         ),
        .out_p  ( P3[i]         )
      );
    end
  endgenerate

//------------------------ Stage 5 -------------------------//
  logic P5;
  logic G5;

  gp_unit stage_5_gp (
    .in_g1  ( G4[0] ),
    .in_g2  ( G4[1] ),
    .in_p1  ( P4[0] ),
    .in_p2  ( P4[1] ),
    .out_g  ( G5    ),
    .out_p  ( P5    )
  );

//------------------------ Stage 6 -------------------------//
  logic P6;
  logic G6;

  gp_unit stage_6_gp (
    .in_g1  ( G4[0] ),
    .in_g2  ( G3[2] ),
    .in_p1  ( P4[0] ),
    .in_p2  ( P3[2] ),
    .out_g  ( G6    ),
    .out_p  ( P6    )
  );

//------------------------ Stage 7 -------------------------//
  logic [3 - 1 : 0] P7;
  logic [3 - 1 : 0] G7;

  gp_unit stage_7_gp_0 (
    .in_g1  ( G3[0] ),
    .in_g2  ( G2[2] ),
    .in_p1  ( P3[0] ),
    .in_p2  ( P2[2] ),
    .out_g  ( G7[0] ),
    .out_p  ( P7[0] )
  );

  gp_unit stage_7_gp_1 (
    .in_g1  ( G4[0] ),
    .in_g2  ( G2[4] ),
    .in_p1  ( P4[0] ),
    .in_p2  ( P2[4] ),
    .out_g  ( G7[1] ),
    .out_p  ( P7[1] )
  );

  gp_unit stage_7_gp_2 (
    .in_g1  ( G6    ),
    .in_g2  ( G2[6] ),
    .in_p1  ( P6    ),
    .in_p2  ( P2[6] ),
    .out_g  ( G7[2] ),
    .out_p  ( P7[2] )
  );

//------------------------ Stage 8 -------------------------//
  logic [7 - 1 : 0] P8;
  logic [7 - 1 : 0] G8;

  gp_unit stage_8_gp_0 (
    .in_g1  ( G2[0] ),
    .in_g2  ( G1[2] ),
    .in_p1  ( P2[0] ),
    .in_p2  ( P1[2] ),
    .out_g  ( G8[0] ),
    .out_p  ( P8[0] )
  );

  gp_unit stage_8_gp_1 (
    .in_g1  ( G3[0] ),
    .in_g2  ( G1[4] ),
    .in_p1  ( P3[0] ),
    .in_p2  ( P1[4] ),
    .out_g  ( G8[1] ),
    .out_p  ( P8[1] )
  );

  gp_unit stage_8_gp_2 (
    .in_g1  ( G7[0] ),
    .in_g2  ( G1[6] ),
    .in_p1  ( P7[0] ),
    .in_p2  ( P1[6] ),
    .out_g  ( G8[2] ),
    .out_p  ( P8[2] )
  );

  gp_unit stage_8_gp_3 (
    .in_g1  ( G4[0] ),
    .in_g2  ( G1[8] ),
    .in_p1  ( P4[0] ),
    .in_p2  ( P1[8] ),
    .out_g  ( G8[3] ),
    .out_p  ( P8[3] )
  );

  gp_unit stage_8_gp_4 (
    .in_g1  ( G7[1] ),
    .in_g2  ( G1[10] ),
    .in_p1  ( P7[1] ),
    .in_p2  ( P1[10] ),
    .out_g  ( G8[4] ),
    .out_p  ( P8[4] )
  );

  gp_unit stage_8_gp_5 (
    .in_g1  ( G6     ),
    .in_g2  ( G1[12] ),
    .in_p1  ( P6     ),
    .in_p2  ( P1[12] ),
    .out_g  ( G8[5]  ),
    .out_p  ( P8[5]  )
  );

  gp_unit stage_8_gp_6 (
    .in_g1  ( G7[2]  ),
    .in_g2  ( G1[14] ),
    .in_p1  ( P7[2]  ),
    .in_p2  ( P1[14] ),
    .out_g  ( G8[6]  ),
    .out_p  ( P8[6]  )
  );

//------------------------ Stage 9 -------------------------//
  logic [7 - 1 : 0] P8;
  logic [7 - 1 : 0] G8;

  gp_unit stage_8_gp_0 (
    .in_g1  ( G2[0] ),
    .in_g2  ( G1[2] ),
    .in_p1  ( P2[0] ),
    .in_p2  ( P1[2] ),
    .out_g  ( G8[0] ),
    .out_p  ( P8[0] )
  );

  gp_unit stage_8_gp_1 (
    .in_g1  ( G3[0] ),
    .in_g2  ( G1[4] ),
    .in_p1  ( P3[0] ),
    .in_p2  ( P1[4] ),
    .out_g  ( G8[1] ),
    .out_p  ( P8[1] )
  );

  gp_unit stage_8_gp_2 (
    .in_g1  ( G7[0] ),
    .in_g2  ( G1[6] ),
    .in_p1  ( P7[0] ),
    .in_p2  ( P1[6] ),
    .out_g  ( G8[2] ),
    .out_p  ( P8[2] )
  );

  gp_unit stage_8_gp_3 (
    .in_g1  ( G4[0] ),
    .in_g2  ( G1[8] ),
    .in_p1  ( P4[0] ),
    .in_p2  ( P1[8] ),
    .out_g  ( G8[3] ),
    .out_p  ( P8[3] )
  );

  gp_unit stage_8_gp_4 (
    .in_g1  ( G7[1] ),
    .in_g2  ( G1[10] ),
    .in_p1  ( P7[1] ),
    .in_p2  ( P1[10] ),
    .out_g  ( G8[4] ),
    .out_p  ( P8[4] )
  );

  gp_unit stage_8_gp_5 (
    .in_g1  ( G6     ),
    .in_g2  ( G1[12] ),
    .in_p1  ( P6     ),
    .in_p2  ( P1[12] ),
    .out_g  ( G8[5]  ),
    .out_p  ( P8[5]  )
  );

  gp_unit stage_8_gp_6 (
    .in_g1  ( G7[2]  ),
    .in_g2  ( G1[14] ),
    .in_p1  ( P7[2]  ),
    .in_p2  ( P1[14] ),
    .out_g  ( G8[6]  ),
    .out_p  ( P8[6]  )
  );

//------------------------ Calculate Carry -----------------//
  logic [15 : 0] COUT;
  logic [15 : 0] CIN;
  //------------------------ Carry In ----------------------//
  assign CIN[15:0] = {COUT[14:0], 1'b0};
  
  //------------------------ Carry  Out --------------------//
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
      assign COUT[i] = G7[i / 2 - 1];
    end
  endgenerate

//------------------------ Calculate Result ----------------//
  assign out_res[15 : 1] = P0[15 : 1] ^ CIN[15 : 1];
  assign out_res[0] = cin ^^ in_op1[0] ^^ in_op2[0];
  assign cout    = COUT[15];

endmodule