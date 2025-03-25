vlib questa_lib/work
vlib questa_lib/msim

vlib questa_lib/msim/xbip_utils_v3_0_10
vlib questa_lib/msim/c_reg_fd_v12_0_6
vlib questa_lib/msim/c_mux_bit_v12_0_6
vlib questa_lib/msim/c_shift_ram_v12_0_14
vlib questa_lib/msim/xil_defaultlib

vmap xbip_utils_v3_0_10 questa_lib/msim/xbip_utils_v3_0_10
vmap c_reg_fd_v12_0_6 questa_lib/msim/c_reg_fd_v12_0_6
vmap c_mux_bit_v12_0_6 questa_lib/msim/c_mux_bit_v12_0_6
vmap c_shift_ram_v12_0_14 questa_lib/msim/c_shift_ram_v12_0_14
vmap xil_defaultlib questa_lib/msim/xil_defaultlib

vcom -work xbip_utils_v3_0_10  -93  \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/ipshared/364f/hdl/xbip_utils_v3_0_vh_rfs.vhd" \

vcom -work c_reg_fd_v12_0_6  -93  \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/ipshared/edec/hdl/c_reg_fd_v12_0_vh_rfs.vhd" \

vcom -work c_mux_bit_v12_0_6  -93  \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/ipshared/ecb4/hdl/c_mux_bit_v12_0_vh_rfs.vhd" \

vcom -work c_shift_ram_v12_0_14  -93  \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/ipshared/2598/hdl/c_shift_ram_v12_0_vh_rfs.vhd" \

vcom -work xil_defaultlib  -93  \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/ip/data_ram_c_shift_ram_0_0/sim/data_ram_c_shift_ram_0_0.vhd" \

vlog -work xil_defaultlib  -incr -mfcu  \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/sim/data_ram.v" \


vlog -work xil_defaultlib \
"glbl.v"

