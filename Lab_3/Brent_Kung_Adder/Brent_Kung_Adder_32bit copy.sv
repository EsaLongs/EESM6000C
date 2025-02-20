module brent_kung_adder_`ADDER_SIZEbit (
  input  logic [`ADDER_SIZE - 1 : 0] in_op1,
  input  logic [`ADDER_SIZE - 1 : 0] in_op2,
  output logic [`ADDER_SIZE - 1 : 0] out_res,

  input  logic cin,
  output logic cout
);

  logic [`ADDER_SIZE - 1 : 0] G [2 * ($clog2(`ADDER_SIZE)) - 1 : 0];
  
//------------------------ Stage 0 --------------------------------------------------//
  assign G[0][`ADDER_SIZE - 1 : 1] = in_op1[`ADDER_SIZE - 1 : 1] & in_op2[`ADDER_SIZE - 1 : 1];
  assign P[0][`ADDER_SIZE - 1 : 1] = in_op1[`ADDER_SIZE - 1 : 1] ^ in_op2[`ADDER_SIZE - 1 : 1];
  assign G[0][0] = (in_op1[0] && in_op2[0]) || (in_op1[0] && cin) || (in_op2[0] && cin);
  assign P[0][0] = 1'b0;
  
//------------------------ Stage 1 to log2(`ADDER_SIZE) -----------------------------//
  genvar i, j;
  
  generate
    for (i = 1; i < ($clog2(`ADDER_SIZE) + 1); i = i + 1) begin
      for (j = 0; j < (`ADDER_SIZE); j = j + 1) begin :
        if ((j + 1) % (2 * i) == 0) begin
          gp_unit stage_gp (
            .in_g1  ( G[i - 1][j - 1] ),
            .in_g2  ( G[i - 1][j]     ),
            .in_p1  ( P[i - 1][j - 1] ),
            .in_p2  ( P[i - 1][j]     ),
            .out_g  ( G[i][j]         ),
            .out_p  ( P[i][j]         )
        );
        end else begin
          assign G[i][j] = G[i - 1][j];
          assign P[i][j] = P[i - 1][j];
        end
      end
    end
  endgenerate

//------------------------ Stage log2(`ADDER_SIZE) + 1 to 2log2(`ADDER_SIZE) - 1 ----//
  generate
    for (i = 1; i < ($clog2(`ADDER_SIZE) + 1); i = i + 1) begin
      for (j = 0; j < (`ADDER_SIZE); j = j + 1) begin :
        if ((j + 1) % (2 * i) == 0) begin
          gp_unit stage_gp (
            .in_g1  ( G[i - 1][j - 1] ),
            .in_g2  ( G[i - 1][j]     ),
            .in_p1  ( P[i - 1][j - 1] ),
            .in_p2  ( P[i - 1][j]     ),
            .out_g  ( G[i][j]         ),
            .out_p  ( P[i][j]         )
        );
        end else begin
          assign G[i][j] = G[i - 1][j];
          assign P[i][j] = P[i - 1][j];
        end
      end
    end
  endgenerate





//------------------------ Stage 1 to (log2(`ADDER_SIZE)) ---------------------------//

//------------------------ Stage 1 -------------------------//
  logic [`ADDER_SIZE - 1 : 0] P1;
  logic [`ADDER_SIZE - 1 : 0] G1;

  generate
    for (i = 0; i < (`ADDER_SIZE); i = i + 1) begin : STAGE_1
      if ((i + 1) % 2 == 0) begin
        gp_unit stage_1_gp (
          .in_g1  ( G[0][i - 1]     ),
          .in_g2  ( G[0][i]         ),
          .in_p1  ( P[0][i - 1]     ),
          .in_p2  ( P[0][i]         ),
          .out_g  ( G1[i]         ),
          .out_p  ( P1[i]         )
      );
      end else begin
        assign G1[i] = G[0][i];
        assign P1[i] = P[0][i];
      end
    end
  endgenerate

//------------------------ Stage 2 -------------------------//  
  //------------------------ Stage 1 -------------------------//
  logic [`ADDER_SIZE - 1 : 0] P2;
  logic [`ADDER_SIZE - 1 : 0] G2;

  generate
    for (i = 0; i < (`ADDER_SIZE); i = i + 1) begin : STAGE_2
      if ((i + 1) % 2 == 0) begin
        gp_unit stage_2_gp (
          .in_g1  ( G1[i - 1]     ),
          .in_g2  ( G1[i]         ),
          .in_p1  ( P1[i - 1]     ),
          .in_p2  ( P1[i]         ),
          .out_g  ( G2[i]         ),
          .out_p  ( P2[i]         )
      );
      end else begin
        assign G2[i] = G1[i];
        assign P2[i] = P1[i];
      end
    end
  endgenerate

//------------------------ Stage 3 -------------------------//
  logic [`ADDER_SIZE - 1 : 0] P3;
  logic [`ADDER_SIZE - 1 : 0] G3;

  generate
    for (i = 0; i < (`ADDER_SIZE); i = i + 1) begin : STAGE_2
      if ((i + 1) % 2 == 0) begin
        gp_unit stage_3_gp (
          .in_g1  ( G2[i - 1]     ),
          .in_g2  ( G2[i]         ),
          .in_p1  ( P2[i - 1]     ),
          .in_p2  ( P2[i]         ),
          .out_g  ( G3[i]         ),
          .out_p  ( P3[i]         )
      );
      end else begin
        assign G3[i] = G2[i];
        assign P3[i] = P2[i];
      end
    end
  endgenerate

//------------------------ Stage 4 -------------------------//
  logic [`ADDER_SIZE - 1 : 0] P4;
  logic [`ADDER_SIZE - 1 : 0] G4;

  generate
    for (i = 0; i < (`ADDER_SIZE); i = i + 1) begin : STAGE_2
      if ((i + 1) % 2 == 0) begin
        gp_unit stage_4_gp (
          .in_g1  ( G3[i - 1]     ),
          .in_g2  ( G3[i]         ),
          .in_p1  ( P3[i - 1]     ),
          .in_p2  ( P3[i]         ),
          .out_g  ( G4[i]         ),
          .out_p  ( P4[i]         )
      );
      end else begin
        assign G4[i] = G3[i];
        assign P4[i] = P3[i];
      end
    end
  endgenerate

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
    .in_g2  ( G[0][2] ),
    .in_p1  ( P1[0] ),
    .in_p2  ( P[0][2] ),
    .out_g  ( G7[0] ),
    .out_p  ( P7[0] )
  );

  gp_unit stage_7_gp_1 (
    .in_g1  ( G2[0] ),
    .in_g2  ( G[0][4] ),
    .in_p1  ( P2[0] ),
    .in_p2  ( P[0][4] ),
    .out_g  ( G7[1] ),
    .out_p  ( P7[1] )
  );

  gp_unit stage_7_gp_2 (
    .in_g1  ( G6[0] ),
    .in_g2  ( G[0][6] ),
    .in_p1  ( P6[0] ),
    .in_p2  ( P[0][6] ),
    .out_g  ( G7[2] ),
    .out_p  ( P7[2] )
  );

  gp_unit stage_7_gp_3 (
    .in_g1  ( G3[0] ),
    .in_g2  ( G[0][8] ),
    .in_p1  ( P3[0] ),
    .in_p2  ( P[0][8] ),
    .out_g  ( G7[3] ),
    .out_p  ( P7[3] )
  );

  gp_unit stage_7_gp_4 (
    .in_g1  ( G6[1] ),
    .in_g2  ( G[0][10] ),
    .in_p1  ( P6[1] ),
    .in_p2  ( P[0][10] ),
    .out_g  ( G7[4] ),
    .out_p  ( P7[4] )
  );

  gp_unit stage_7_gp_5 (
    .in_g1  ( G5     ),
    .in_g2  ( G[0][12] ),
    .in_p1  ( P5     ),
    .in_p2  ( P[0][12] ),
    .out_g  ( G7[5]  ),
    .out_p  ( P7[5]  )
  );

  gp_unit stage_7_gp_6 (
    .in_g1  ( G6[2]  ),
    .in_g2  ( G[0][14] ),
    .in_p1  ( P6[2]  ),
    .in_p2  ( P[0][14] ),
    .out_g  ( G7[6]  ),
    .out_p  ( P7[6]  )
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
  assign COUT[0]  = G[0][0];
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
  assign out_res[15 : 1] = P[0][15 : 1] ^ CIN[15 : 1];
  assign out_res[0] = cin ^^ in_op1[0] ^^ in_op2[0];
  assign cout    = COUT[15];

endmodule