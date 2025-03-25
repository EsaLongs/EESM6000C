transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+tap_ram  -L blk_mem_gen_v8_4_6 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.tap_ram xil_defaultlib.glbl

do {tap_ram.udo}

run 1000ns

endsim

quit -force
