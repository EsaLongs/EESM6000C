module op_n_to_2_nbit #(
  parameter OP_NUM = 8,
  parameter OP_WIDTH = 32,
  parameter MAX_STAGE_NUM = 16
) (
  input  logic [OP_WIDTH - 1 : 0] in_op [OP_NUM - 1 : 0],
  output logic [OP_WIDTH - 1 : 0] out_op [1: 0]
);
    
       
// This part is to calculate how many stages we need  
  function integer STAGE_NUM_RETURN();
    integer i;
    for (i = 0; i < MAX_STAGE_NUM; i = i + 1) begin
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

  typedef int CAL_OP_NUM[STAGE_NUM - 1 : 0];

  function CAL_OP_NUM OP_NUM_STAGE_RETURN();
    integer i;
    for (i = 0; i < STAGE_NUM; i = i + 1) begin
      if (i == 0) OP_NUM_STAGE_RETURN[i] = OP_NUM;
      else OP_NUM_STAGE_RETURN[i] = (OP_NUM_STAGE_RETURN[i - 1] % 3) + (2 * (OP_NUM_STAGE_RETURN[i - 1] - (OP_NUM_STAGE_RETURN[i - 1] % 3)) / 3);
    end
    return OP_NUM_STAGE_RETURN;
  endfunction

  localparam int OP_NUM_STAGE [STAGE_NUM - 1 : 0] = OP_NUM_STAGE_RETURN();

  typedef int CAL_3TO2_NUM[STAGE_NUM - 1 : 0];

  function CAL_3TO2_NUM NUM_3TO2_STAGE_RETURN();
    integer i;
    for (i = 0; i < STAGE_NUM; i = i + 1) begin
      NUM_3TO2_STAGE_RETURN[i] = $floor(OP_NUM_STAGE[i] / 3);
    end
    return NUM_3TO2_STAGE_RETURN;
  endfunction

  localparam int NUM_3TO2_STAGE [STAGE_NUM - 1 : 0] = NUM_3TO2_STAGE_RETURN();
  
  initial begin
  $display(STAGE_NUM, OP_NUM_STAGE, NUM_3TO2_STAGE);
  end
  
  
 endmodule