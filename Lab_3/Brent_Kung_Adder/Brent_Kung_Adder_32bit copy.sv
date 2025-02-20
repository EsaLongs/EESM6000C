module brent_kung_adder_nbit (
  input  logic [`ADDER_SIZE - 1 : 0] in_op1,
  input  logic [`ADDER_SIZE - 1 : 0] in_op2,
  output logic [`ADDER_SIZE - 1 : 0] out_res,

  input  logic cin,
  output logic cout
);

  logic [`ADDER_SIZE - 1 : 0] G [2 * ($clog2(`ADDER_SIZE)) - 1 : 0];
  logic [`ADDER_SIZE - 1 : 0] P [2 * ($clog2(`ADDER_SIZE)) - 1 : 0];
  
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
        if (((j + 1) % (2 * i)) == 0) begin
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
    integer b, e;
    b = $clog2(`ADDER_SIZE) + 1;  // The first row for the second part
    e = 2 * log2(`ADDER_SIZE);    // The end row for the second part

    integer k, h;
    h = (`ADDER_SIZE / (4 * (i - b))) * 3 - 1;
    // h is the first bit that has gp_unit in each row
    k = `ADDER_SIZE / (2 ** (i - b));
    // k is the distance between two gp_unit in each row
    
    for (i = b + 1; i < e; i = i + 1) begin
      for (j = 0; j < (`ADDER_SIZE); j = j + 1) begin :
        if ((j - h) % k == 0) begin
          gp_unit stage_gp (
            .in_g1  ( G[i - 1][j - (k / 2)] ),
            .in_g2  ( G[i - 1][j]           ),
            .in_p1  ( P[i - 1][j - (k / 2)] ),
            .in_p2  ( P[i - 1][j]           ),
            .out_g  ( G[i][j]               ),
            .out_p  ( P[i][j]               )
        );
        end else begin
          assign G[i][j] = G[i - 1][j];
          assign P[i][j] = P[i - 1][j];
        end
      end
    end
  endgenerate

//------------------------ Calculate Result -----------------------------------------//
  logic [`ADDER_SIZE - 1 : 0] COUT;
  logic [`ADDER_SIZE - 1 : 0] CIN;
  assign COUT = G[2 * ($clog2(`ADDER_SIZE)) - 1];
  assign CIN = {COUT[`ADDER_SIZE - 1 : 1] : cin};
  
  assign out_res[`ADDER_SIZE - 1 : 1] = P[0][15 : 1] ^ CIN[15 : 1];
  assign out_res[0] = in_op1[0] ^^ in_op2[0] ^^ CIN[0];  
  assign cout = COUT[`ADDER_SIZE - 1];

endmodule