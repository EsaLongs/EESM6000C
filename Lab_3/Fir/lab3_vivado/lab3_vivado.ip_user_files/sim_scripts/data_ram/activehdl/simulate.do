transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+data_ram  -L xbip_utils_v3_0_10 -L c_reg_fd_v12_0_6 -L c_mux_bit_v12_0_6 -L c_shift_ram_v12_0_14 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.data_ram xil_defaultlib.glbl

do {data_ram.udo}

run 1000ns

endsim

quit -force
