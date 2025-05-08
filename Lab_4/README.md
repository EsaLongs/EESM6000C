## At the begining
Please refer to `Lab4-2/lab-caravel_fir/testbench/counter_la_fir/run_sim` if you want to repulicated this lab. Please kindly notice that you need to use vivado to simulate since iverilog doesn't support system verilog very well. In this lab, I used vivado inside my docker container to finish the simulation but you can use others.

## Block diagram
![Screenshot 2025-05-05 at 7.16.04 PM](https://hackmd.io/_uploads/SkrqRfIlge.png)

The figure above shows how the SoC works. If you want to know more about the structure of fir, please refer to https://github.com/EsaLongs/EESM6000C/tree/main/Lab_3/Fir.

## The interface protocal

### Firmware and User Project
In the realm of data transfer, the Wishbone protocol comes into play. The RISC - V CPU will carry out the instructions stored in the firmware. Subsequently, it will transfer data to both the FIR engine and the EXMEM component through the Wishbone interface. At the same time, a Wishbone decoder will keep track of the access address of the transaction.

The firmware gains access to the FIR engine within the User Project by means of a Wishbone - to - AXI conversion layer. This conversion layer is responsible for detecting Wishbone requests aimed at accessing the FIR engine. Once detected, it transforms the access into either the AXI - Lite or AXI - Stream format.

### Firmware and Testbench
The Firmware and the Testbench establish communication via the mprj_io signal. The testbench designates mprj_io[23:16] as the checkbits for assessing the project's status. When the firmware initializes the FIR engine, it sets the checkbits to 8'A5. This serves as a signal to the testbench, prompting it to begin verifying the FIR output and measuring the latency.

Once the FIR processing is finished, the firmware instructs the CPU to set the checkbits to 8'h5A. The testbench then compares the final Y[n] output with a reference output and logs the latency

## Waveform
![Screenshot 2025-05-08 at 9.54.51 PM](https://hackmd.io/_uploads/r1XvdE5glx.png)
![Screenshot 2025-05-08 at 9.55.51 PM](https://hackmd.io/_uploads/rJHP_45xee.png)
![Screenshot 2025-05-08 at 9.57.32 PM](https://hackmd.io/_uploads/S1vPONqglx.png)

## What is the FIR engine theoretical throughput, i.e. data rate? Measured throughput?
Idealy it needs 12 cycles, but actually costs 5151 / 11 around 469 cycles

![Screenshot 2025-05-08 at 9.51.12 PM](https://hackmd.io/_uploads/ByycO45xxe.png)


## What is the latency for firmware to feed data?
It takes total 5151 cycles to calculate 11 (dlength) data.

## What techniques are used to improve the throughput?
Optimize C code, but I don't know how.

## Any other insights?
No.