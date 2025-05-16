/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 3.04.2025 19:21:49
// Design Name: 
// Module Name: csa_fpm
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: Carry Save Adder (n:2)
// 
// Dependencies: csa_fpm.sv
// 
// Revision: 0.01
// 
// Additional Comments:
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module csa_nto2 #(
  parameter PAR_NUM_NOEX = 13,
  parameter PAR_WIDTH    = 24,
  parameter OUT_WIDTH    = 48,
  parameter EX_WIDTH     = 64,
  parameter SHIF_WIDTH   = 2,
  
  parameter EX_NUM       = 1,
  parameter PAR_NUM      = PAR_NUM_NOEX + EX_NUM,

  // ** Calculate how many stages we need.
  parameter int STAGE_NUM = stage_num_return(),
  // ** Calculate how many input partials it has for each stage.
  parameter int PAR_NUM_STAGE [0 : STAGE_NUM] = par_num_stage_return(),
  // ** Calculate the width of input partials for each stage.
  parameter int PAR_WIDTH_STAGE [0 : STAGE_NUM] [0 : PAR_NUM_STAGE[0] - 1] = par_width_stage_return()
  // ** Calculate the output width of the last stage.
) (
  input  logic [EX_WIDTH  - 1 : 0] in_par_ex,

  input  logic [PAR_WIDTH - 1 : 0] in_par  [0 : PAR_NUM_NOEX - 1],
  output logic [OUT_WIDTH - 1 : 0] out_par [0 : 1]
);

//------------------------------------------------ Internal Signal Define ---------------------------------//
  generate
    for (genvar i = 0; i < STAGE_NUM; i = i + 1) begin : par_stage
      for (genvar k = 0; k < PAR_NUM_STAGE[i + 1]; k = k + 1) begin: genblk1
        logic [PAR_WIDTH_STAGE[i + 1][k] - 1 : 0] par_stage_out;
      end
    end
  endgenerate

//------------------------------------------------ CSA Block Generation -----------------------------------//
  generate
    for (genvar i = 0; i < STAGE_NUM; i = i + 1) begin : csa_block
      // ** First stage
      if (i == 0) begin
        if ((PAR_NUM_STAGE[i] % 3) == 0) begin
          // ** $floor(PAR_NUM_STAGE[i] / 3) shows how many 3to2 units we need
          for (genvar j = 0; j < ($floor(PAR_NUM_STAGE[i] / 3)); j = j + 1) begin
            if (j == $floor(PAR_NUM_STAGE[i] / 3) - 1) begin
              csa_3to2 #(
                .WIDTH_1 ( PAR_WIDTH_STAGE[i][j * 3    ] ),
                .WIDTH_2 ( PAR_WIDTH_STAGE[i][j * 3 + 1] ),
                .WIDTH_3 ( PAR_WIDTH_STAGE[i][j * 3 + 2] )
              ) u_csa_3to2 (
                .in_op1 ( {in_par[j * 3    ], {((j * 3    ) * SHIF_WIDTH){1'b0}}} ),
                .in_op2 ( {in_par[j * 3 + 1], {((j * 3 + 1) * SHIF_WIDTH){1'b0}}} ),
                .in_op3 ( in_par_ex                                               ),
                .out_c  ( par_stage[i].genblk1[2 * j    ].par_stage_out           ),
                .out_s  ( par_stage[i].genblk1[2 * j + 1].par_stage_out           )
              );
            end else begin
              csa_3to2 #(
                .WIDTH_1 ( PAR_WIDTH_STAGE[i][j * 3    ] ),
                .WIDTH_2 ( PAR_WIDTH_STAGE[i][j * 3 + 1] ),
                .WIDTH_3 ( PAR_WIDTH_STAGE[i][j * 3 + 2] )
              ) u_csa_3to2 (
                .in_op1 ( {in_par[j * 3    ], {((j * 3    ) * SHIF_WIDTH){1'b0}}} ),
                .in_op2 ( {in_par[j * 3 + 1], {((j * 3 + 1) * SHIF_WIDTH){1'b0}}} ),
                .in_op3 ( {in_par[j * 3 + 2], {((j * 3 + 2) * SHIF_WIDTH){1'b0}}} ),
                .out_c  ( par_stage[i].genblk1[2 * j    ].par_stage_out                      ),
                .out_s  ( par_stage[i].genblk1[2 * j + 1].par_stage_out                      )
              );
            end
          end
        end else begin
          for (genvar j = 0; j < ($floor(PAR_NUM_STAGE[i] / 3)); j = j + 1) begin
            csa_3to2 #(
              .WIDTH_1 ( PAR_WIDTH_STAGE[i][j * 3    ] ),
              .WIDTH_2 ( PAR_WIDTH_STAGE[i][j * 3 + 1] ),
              .WIDTH_3 ( PAR_WIDTH_STAGE[i][j * 3 + 2] )
            ) u_csa_3to2 (
              .in_op1 ( {in_par[j * 3    ], {((j * 3    ) * SHIF_WIDTH){1'b0}}} ),
              .in_op2 ( {in_par[j * 3 + 1], {((j * 3 + 1) * SHIF_WIDTH){1'b0}}} ),
              .in_op3 ( {in_par[j * 3 + 2], {((j * 3 + 2) * SHIF_WIDTH){1'b0}}} ),
              .out_c  ( par_stage[i].genblk1[2 * j    ].par_stage_out                      ),
              .out_s  ( par_stage[i].genblk1[2 * j + 1].par_stage_out                      )
            );
          end
          // ** Situation when we have 1 partial left
          if ((PAR_NUM_STAGE[i] % 3) == 1) begin
            assign par_stage[i].genblk1[PAR_NUM_STAGE[i + 1] - 1].par_stage_out = in_par_ex;
          // ** Situation when we have 2 partials left
          end else if (PAR_NUM_STAGE[i] % 3 == 2) begin
            assign par_stage[i].genblk1[PAR_NUM_STAGE[i + 1] - 1].par_stage_out = in_par_ex;
            assign par_stage[i].genblk1[PAR_NUM_STAGE[i + 1] - 1 - 1].par_stage_out = {
              in_par[PAR_NUM_STAGE[i] - 1], 
              {(PAR_WIDTH_STAGE[i + 1][PAR_NUM_STAGE[i + 1] - 1 - 1] - PAR_WIDTH){1'b0}}
              };
          end
        end
      // ** Other stages
      end else begin
        // ** $floor(PAR_NUM_STAGE[i] / 3) shows how many 3to2 units we need
        for (genvar j = 0; j < ($floor(PAR_NUM_STAGE[i] / 3)); j = j + 1) begin
          csa_3to2 #(
            .WIDTH_1 ( PAR_WIDTH_STAGE[i][j * 3    ] ),
            .WIDTH_2 ( PAR_WIDTH_STAGE[i][j * 3 + 1] ),
            .WIDTH_3 ( PAR_WIDTH_STAGE[i][j * 3 + 2] )
          ) u_csa_3to2 (
            .in_op1 ( par_stage[i - 1].genblk1[j * 3    ].par_stage_out ),
            .in_op2 ( par_stage[i - 1].genblk1[j * 3 + 1].par_stage_out ),
            .in_op3 ( par_stage[i - 1].genblk1[j * 3 + 2].par_stage_out ),
            .out_c  ( par_stage[i    ].genblk1[j * 2    ].par_stage_out ),
            .out_s  ( par_stage[i    ].genblk1[j * 2 + 1].par_stage_out )
          );
        end
        // ** Situation when we have 1 partial left
        if (PAR_NUM_STAGE[i] % 3 == 1) begin 
          assign par_stage[i].genblk1[PAR_NUM_STAGE[i + 1] - 1].par_stage_out = 
            par_stage[i - 1].genblk1[PAR_NUM_STAGE[i] - 1].par_stage_out;
        // ** Situation when we have 2 partials left
        end else if (PAR_NUM_STAGE[i] % 3 == 2) begin
          assign par_stage[i].genblk1[PAR_NUM_STAGE[i + 1] - 1    ].par_stage_out = 
            par_stage[i - 1].genblk1[PAR_NUM_STAGE[i] - 1    ].par_stage_out;
          assign par_stage[i].genblk1[PAR_NUM_STAGE[i + 1] - 1 - 1].par_stage_out = 
            par_stage[i - 1].genblk1[PAR_NUM_STAGE[i] - 1 - 1].par_stage_out;
        end
      end
    end
  endgenerate

//------------------------------------------------ Output Sign Extend -------------------------------------//
  // ** Because the final 2 partials may have different width, there for we need to 
  //    sign extend them.
  logic sign1, sign2;

  assign sign1 = par_stage[STAGE_NUM - 1].genblk1[0].par_stage_out[PAR_WIDTH_STAGE[STAGE_NUM][0] - 1];
  assign sign2 = par_stage[STAGE_NUM - 1].genblk1[1].par_stage_out[PAR_WIDTH_STAGE[STAGE_NUM][1] - 1];

  assign out_par[0] = par_stage[STAGE_NUM - 1].genblk1[0].par_stage_out[OUT_WIDTH - 1 : 0];
  assign out_par[1] = par_stage[STAGE_NUM - 1].genblk1[1].par_stage_out[OUT_WIDTH - 1 : 0];

//---------------------------------------------- Function Define ------------------------------------------//
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////
  // ** This function is used to calculate how many stages we need.
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////
  function integer stage_num_return();
    integer i;
    for (i = 0; i < PAR_NUM; i = i + 1) begin
      if (
          (
           ((1 + i) * i / 2) >=  (PAR_NUM - 3)
          )
      && (
          (PAR_NUM - 3) > (i * (i - 1) / 2)
          )
        ) begin
          stage_num_return = i + 1;
          return stage_num_return;
      end else stage_num_return = stage_num_return;
    end
  endfunction

  ///////////////////////////////////////////////////////////////////////////////////////////////////////////
  // This function is used to calculate how many input partials it has for each stage. For each stage, we 
  // will have PAR_NUM % 3 partials left and assign to next stage directly. We will have $floor(PAR_NUM / 3) 
  // partials use the 3to2 unit. 
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////
  typedef int CAL_PAR_NUM_STAGE [0 : STAGE_NUM];
  
  function CAL_PAR_NUM_STAGE par_num_stage_return();
    for (int i = 0; i < STAGE_NUM + 1; i = i + 1) begin
      if (i == 0) par_num_stage_return[i] = PAR_NUM;
      else par_num_stage_return[i] = par_num_stage_return[i - 1] % 3 + 2 * (par_num_stage_return[i - 1] / 3);
    end
    return par_num_stage_return;
  endfunction

  ///////////////////////////////////////////////////////////////////////////////////////////////////////////
  // ** This function is used to calculate the width of input partials for each stage.
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////
  typedef int CAL_PAR_WIDTH_STAGE [0 : STAGE_NUM] [0 : PAR_NUM_STAGE[0] - 1];
  
  function CAL_PAR_WIDTH_STAGE par_width_stage_return();
    integer i, j;
    for (i = 0; i < STAGE_NUM + 1; i = i + 1) begin
      for (j = 0; j < PAR_NUM_STAGE[0]; j = j + 1 ) begin
        // ** Only the range j < PAR_NUM_STAGE[0] will be needed. Other parts will be set 0.
        if (j > (PAR_NUM_STAGE[i] - 1)) begin
          par_width_stage_return[i][j] = 0;
        // ** Range j < PAR_NUM_STAGE[0] will be needed
        end else begin
          if (i == 0) begin
            if (j == PAR_NUM_STAGE[i] - 1) par_width_stage_return[i][j] = EX_WIDTH;           
            else par_width_stage_return[i][j] = PAR_WIDTH + j * SHIF_WIDTH;
          end else begin
            // ** PAR_NUM_STAGE[i] - (PAR_NUM_STAGE[i - 1] % 3 
            //    This equation calculates how many 3to2 converter are needed for each stage
            if (j < (PAR_NUM_STAGE[i] - (PAR_NUM_STAGE[i - 1] % 3))) begin
	            // ** Calculate the width of output c              
              if (j % 2 == 0) begin
                par_width_stage_return[i][j] = max_width_return(
                  par_width_stage_return[i - 1][j * 3 / 2        ], 
                  par_width_stage_return[i - 1][j * 3 / 2 + 1    ], 
                  par_width_stage_return[i - 1][j * 3 / 2 + 1 + 1]
                  ) + 1;
              // ** Calculate the width of output s
              end else begin
                par_width_stage_return[i][j] = max_width_return(
                  par_width_stage_return[i - 1][(j - 1) * 3 / 2        ], 
                  par_width_stage_return[i - 1][(j - 1) * 3 / 2 + 1    ], 
                  par_width_stage_return[i - 1][(j - 1) * 3 / 2 + 1 + 1]
                  );
              end
            end else begin
              if ((PAR_NUM_STAGE[i - 1] % 3) == 1) begin
                par_width_stage_return[i][j] = par_width_stage_return[i - 1][PAR_NUM_STAGE[i - 1] - 1];
              end else begin
              // ** Situation that has 2 left
                if (j == (PAR_NUM_STAGE[i] - 1 - 1))
                  par_width_stage_return[i][j] = par_width_stage_return[i - 1][PAR_NUM_STAGE[i - 1] - 1 - 1];
                else 
                  par_width_stage_return[i][j] = par_width_stage_return[i - 1][PAR_NUM_STAGE[i - 1] - 1    ];
              end
            end
          end
        end
      end
    end
    return par_width_stage_return;
  endfunction

  ///////////////////////////////////////////////////////////////////////////////////////////////////////////
  // ** This function is judge which is the maximum width of three inputs.
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////
  function int max_width_return(input int a, input int b, input int c);
    if (OUT_WIDTH >= a && OUT_WIDTH >= b && OUT_WIDTH >= c) begin
      if (a >= b) begin
        if (a >= c) begin
          return a;
        end else begin
          return c;
        end
      end else begin
        if (b >= c) begin
          return b;
        end else begin
          return c;
        end
      end
    end else return OUT_WIDTH;
  endfunction

endmodule