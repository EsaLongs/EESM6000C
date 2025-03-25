vlib questa_lib/work
vlib questa_lib/msim

vlib questa_lib/msim/blk_mem_gen_v8_4_6
vlib questa_lib/msim/xil_defaultlib

vmap blk_mem_gen_v8_4_6 questa_lib/msim/blk_mem_gen_v8_4_6
vmap xil_defaultlib questa_lib/msim/xil_defaultlib

vlog -work blk_mem_gen_v8_4_6  -incr -mfcu  \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/tap_ram/ipshared/bb55/simulation/blk_mem_gen_v8_4.v" \

vlog -work xil_defaultlib  -incr -mfcu  \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/tap_ram/ip/tap_ram_blk_mem_gen_0_0/sim/tap_ram_blk_mem_gen_0_0.v" \
"../../../../../lab3_example/lab3_example.gen/sources_1/bd/tap_ram/sim/tap_ram.v" \

vlog -work xil_defaultlib \
"glbl.v"

