transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

vlib work
vmap -link {C:/Users/ytangdg/lab3_vivado/lab3_vivado.cache/compile_simlib/riviera}
vlib riviera/xbip_utils_v3_0_10
vlib riviera/c_reg_fd_v12_0_6
vlib riviera/c_mux_bit_v12_0_6
vlib riviera/c_shift_ram_v12_0_14
vlib riviera/xil_defaultlib

vcom -work xbip_utils_v3_0_10 -93  -incr \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/ipshared/364f/hdl/xbip_utils_v3_0_vh_rfs.vhd" \

vcom -work c_reg_fd_v12_0_6 -93  -incr \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/ipshared/edec/hdl/c_reg_fd_v12_0_vh_rfs.vhd" \

vcom -work c_mux_bit_v12_0_6 -93  -incr \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/ipshared/ecb4/hdl/c_mux_bit_v12_0_vh_rfs.vhd" \

vcom -work c_shift_ram_v12_0_14 -93  -incr \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/ipshared/2598/hdl/c_shift_ram_v12_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93  -incr \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/ip/data_ram_c_shift_ram_0_0/sim/data_ram_c_shift_ram_0_0.vhd" \

vlog -work xil_defaultlib  -incr -v2k5 -l xbip_utils_v3_0_10 -l c_reg_fd_v12_0_6 -l c_mux_bit_v12_0_6 -l c_shift_ram_v12_0_14 -l xil_defaultlib \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/sim/data_ram.v" \


vlog -work xil_defaultlib \
"glbl.v"

