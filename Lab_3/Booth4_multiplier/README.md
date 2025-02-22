This is a Booth4-based multiplier.

It takes half-width numbers’ cycles to get the output.

You can set the width of the multiplier and adder (it instantiates an adder inside) in "define.sv". You should notice that you can set the MUL_WIDTH to be 4, 16, 32, 64, 128, 256, .... (2 ^ n) but you must make sure the ADDER_WIDTH = 2 * MUL_WIDTH, unless it won't work.

It uses ready and valid signals to handshake.

in_valid comes from the data source. It won't begin to calculate unless in_valid is 1.

out_ready is an output of the multiplier. It shows whether the multiplier is ready to get the data. It will be 0 if the multiplier is still calculating or the result hasn't been received by the destination module.

in_ready comes from the destination module. When the calculation has finished, the multiplier will keep the result unless the destination module has received it. Please kindly note that the multiplier won't begin a new round of calculation unless the destination module has received the result.

out_valid is an output of the multiplier. It shows whether the result is valid.


![alt text](rtl/png/Simulation_result_wave.png)

![alt text](rtl/png/Simulation_result_test.png)