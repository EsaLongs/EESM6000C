module op_n_to_2_nbit #( 
  parameter OP_NUM = 4, 
  parameter OP_WIDTH = 64
) (
  input  logic [OP_WIDTH - 1 : 0] in_op [OP_NUM - 1 : 0],
  output logic [OP_WIDTH - 1 : 0] out_op [1: 0]
);

//------------------------ Parameter Calculation ------------------------------------//
  // Calculate how many stages we need  
  function integer STAGE_NUM_RETURN();
    integer i;
    for (i = 0; i < OP_NUM; i = i + 1) begin
      if (
          (
            (((1 + i) * i / 2) >  (OP_NUM - 3))
        || (((1 + i) * i / 2) == (OP_NUM - 3)) 
          )
      && (
          (OP_NUM - 3) > (i * (i - 1) / 2)
          )
        ) begin
          STAGE_NUM_RETURN = i + 1;
          return STAGE_NUM_RETURN;
      end else STAGE_NUM_RETURN = STAGE_NUM_RETURN;
    end
  endfunction

  localparam STAGE_NUM = STAGE_NUM_RETURN();

  // Calculate how many input operands it has for each stage.
  // For each stage, we will have IN_OP_NUM % 3 operands left and assign
  // to next stage directly. We will have $floor(IN_OP_NUM / 3) operands
  // use the 3to2 unit. For example, if IN_OP_NUM = 32, because 32 % 3
  // = 2, then out_op[1 : 0] will be assigned by in_op[1 : 0] (after 
  // sign extend). The out_op[OUT_OP_NUM - 1 : 2] will use 3to2 unit.
  typedef int CAL_OP_NUM[STAGE_NUM : 0];
  
  function CAL_OP_NUM OP_NUM_STAGE_RETURN();
    integer i;
    for (i = 0; i < STAGE_NUM + 1; i = i + 1) begin
      if (i == 0) OP_NUM_STAGE_RETURN[i] = OP_NUM;
      else OP_NUM_STAGE_RETURN[i] = OP_NUM_STAGE_RETURN[i - 1] % 3 + 2 * (OP_NUM_STAGE_RETURN[i - 1] / 3);
    end
    return OP_NUM_STAGE_RETURN;
  endfunction

  localparam int OP_NUM_STAGE [STAGE_NUM : 0] = OP_NUM_STAGE_RETURN();

//------------------------ Instantiate ----------------------------------------------//
  // Just used for instantiating.
  genvar i;
  
  logic [OP_WIDTH - 1 : 0] op_temp [STAGE_NUM - 1 : 0] [OP_NUM - 1 : 0];
  
  generate
    // This part looks complicated. For example, assuming that the OP_NUM = IN_OP_NUM
    // = 8, then according to the OP_NUM_STAGE parameter, we know that the output ope-
    // rands number of this stage is OP_NUM_STAGE[i + 1]. 
    // op_temp[i][OP_NUM_STAGE[i + 1] - 1 : 0][OP_WIDTH + i + 1 - 1 : 0]. op_temp is 
    // the output of each stage. The [i] means which stage it is. 
    // [OP_NUM_STAGE[i + 1] - 1 : 0] means how many outputs operands it has.
    // [OP_WIDTH + i + 1 - 1 : 0] is the width of each outputs operands.
    for (i = 0; i < STAGE_NUM; i = i + 1) begin
      if (i == 0) begin 
        op_n_to_2_nbit_onestage #(.OP_WIDTH(OP_WIDTH), .IN_OP_NUM(OP_NUM_STAGE[i])
        ) u_op_n_to_2_nbit_onestage (
          .in_op  (in_op),
          .out_op (op_temp[i][OP_NUM_STAGE[i + 1] - 1 : 0])
        );
      end else begin
        op_n_to_2_nbit_onestage #(.OP_WIDTH(OP_WIDTH), .IN_OP_NUM(OP_NUM_STAGE[i])
        ) u_op_n_to_2_nbit_onestage (
          // The last stage op_temp
          .in_op  (op_temp[i - 1][OP_NUM_STAGE[i] - 1 : 0]),
          // This stage op_temp
          .out_op (op_temp[i][OP_NUM_STAGE[i + 1] - 1 : 0])
        );
      end
    end
  endgenerate
  
  assign out_op = op_temp[STAGE_NUM - 1][1 : 0];


 endmodule
