transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

vlib work
vmap -link {C:/Users/ytangdg/lab3_vivado/lab3_vivado.cache/compile_simlib/activehdl}
vlib activehdl/xbip_utils_v3_0_10
vlib activehdl/c_reg_fd_v12_0_6
vlib activehdl/c_mux_bit_v12_0_6
vlib activehdl/c_shift_ram_v12_0_14
vlib activehdl/xil_defaultlib

vcom -work xbip_utils_v3_0_10 -93  \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/ipshared/364f/hdl/xbip_utils_v3_0_vh_rfs.vhd" \

vcom -work c_reg_fd_v12_0_6 -93  \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/ipshared/edec/hdl/c_reg_fd_v12_0_vh_rfs.vhd" \

vcom -work c_mux_bit_v12_0_6 -93  \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/ipshared/ecb4/hdl/c_mux_bit_v12_0_vh_rfs.vhd" \

vcom -work c_shift_ram_v12_0_14 -93  \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/ipshared/2598/hdl/c_shift_ram_v12_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93  \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/ip/data_ram_c_shift_ram_0_0/sim/data_ram_c_shift_ram_0_0.vhd" \

vlog -work xil_defaultlib  -v2k5 -l xbip_utils_v3_0_10 -l c_reg_fd_v12_0_6 -l c_mux_bit_v12_0_6 -l c_shift_ram_v12_0_14 -l xil_defaultlib \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/data_ram/sim/data_ram.v" \


vlog -work xil_defaultlib \
"glbl.v"

