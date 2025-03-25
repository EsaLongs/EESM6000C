transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

vlib work
vmap -link {C:/Users/ytangdg/lab3_vivado/lab3_vivado.cache/compile_simlib/riviera}
vlib riviera/blk_mem_gen_v8_4_6
vlib riviera/xil_defaultlib

vlog -work blk_mem_gen_v8_4_6  -incr -v2k5 -l blk_mem_gen_v8_4_6 -l xil_defaultlib \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/tap_ram/ipshared/bb55/simulation/blk_mem_gen_v8_4.v" \

vlog -work xil_defaultlib  -incr -v2k5 -l blk_mem_gen_v8_4_6 -l xil_defaultlib \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/tap_ram/ip/tap_ram_blk_mem_gen_0_0/sim/tap_ram_blk_mem_gen_0_0.v" \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/tap_ram/sim/tap_ram.v" \

vlog -work xil_defaultlib \
"glbl.v"

