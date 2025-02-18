`include "define.sv"
module brent_kung_adder (
  input  logic [`ADDER_SIZE-1:0] in_op1,
  input  logic [`ADDER_SIZE-1:0] in_op2,
  output logic [`ADDER_SIZE-1:0] out_res,

  input  logic Cin,
  output logic Cout
);

    logic [`ADDER_SIZE-1:0] P;  // 生成传播信号
    logic [`ADDER_SIZE-1:0] G;  // 生成进位信号
    logic [`ADDER_SIZE-1:0] C;  // 进位信号

    // 第一步：计算传播和生成信号
    assign P = in_op1 ^ in_op2;
    assign G = in_op1 & in_op2;

    // 第二步：计算进位信号（in_op2rent - Kung算法）
    // 级别1
    logic [15:0] P1;
    logic [15:0] G1;
    generate
        genvar i;
        for (i = 0; i < 16; i = i + 1) begin
            assign P1[i] = P[2*i] & P[2*i+1];
            assign G1[i] = G[2*i+1] | (G[2*i] & P[2*i+1]);
        end
    endgenerate

    // 级别2
    logic [7:0] P2;
    logic [7:0] G2;
    generate
        for (i = 0; i < 8; i = i + 1) begin
            assign P2[i] = P1[2*i] & P1[2*i+1];
            assign G2[i] = G1[2*i+1] | (G1[2*i] & P1[2*i+1]);
        end
    endgenerate

    // 级别3
    logic [3:0] P3;
    logic [3:0] G3;
    generate
        for (i = 0; i < 4; i = i + 1) begin
            assign P3[i] = P2[2*i] & P2[2*i+1];
            assign G3[i] = G2[2*i+1] | (G2[2*i] & P2[2*i+1]);
        end
    endgenerate

    // 级别4
    logic [1:0] P4;
    logic [1:0] G4;
    assign P4[0] = P3[0] & P3[1];
    assign G4[0] = G3[1] | (G3[0] & P3[1]);
    assign P4[1] = P3[2] & P3[3];
    assign G4[1] = G3[3] | (G3[2] & P3[3]);

    // 级别5
    logic P5;
    logic G5;
    assign P5 = P4[0] & P4[1];
    assign G5 = G4[1] | (G4[0] & P4[1]);

    // 回溯计算进位信号
    // 最高位进位
    assign C[`ADDER_SIZE-1] = G[`ADDER_SIZE-1] | (G[30] & P[`ADDER_SIZE-1]) | (G2[7] & P[`ADDER_SIZE-1] & P[30]) | (G3[3] & P[`ADDER_SIZE-1] & P[30] & P1[15]) | (G4[1] & P[`ADDER_SIZE-1] & P[30] & P1[15] & P2[7]) | (G5 & P[`ADDER_SIZE-1] & P[30] & P1[15] & P2[7] & P3[3]);
    // 其他进位
    generate
        for (i = 30; i > 0; i = i - 1) begin
            if (i % 2 == 1) begin
                assign C[i] = G[i] | (G[i-1] & P[i]);
            end else if (i % 4 == 0) begin
                assign C[i] = G[i] | (G[i+1] & P[i]) | (G2[i/4] & P[i] & P[i+1]);
            end else if (i % 8 == 0) begin
                assign C[i] = G[i] | (G[i+1] & P[i]) | (G2[(i+2)/4] & P[i] & P[i+1]) | (G3[i/8] & P[i] & P[i+1] & P1[(i+2)/2]);
            end else if (i % 16 == 0) begin
                assign C[i] = G[i] | (G[i+1] & P[i]) | (G2[(i+2)/4] & P[i] & P[i+1]) | (G3[(i+4)/8] & P[i] & P[i+1] & P1[(i+2)/2]) | (G4[i/16] & P[i] & P[i+1] & P1[(i+2)/2] & P2[(i+4)/4]);
            end
        end
    endgenerate
    assign C[0] = Cin;

    // 第三步：计算和
    assign out_res = P ^ C;
    assign Cout = C[`ADDER_SIZE-1];

endmodule