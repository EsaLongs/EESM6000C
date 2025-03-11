# Fir
## How It Works
### Basic Steps
Here will explain the basic idea of how it runs. The details will be showed in following part.

In this design, you can access three places: **Tap RAM**, **Data RAM**, and **Configrue Register**.

First of all, you should write all the taps you have to "Tap RAM" (the maximum number you can write in this module is 1023).

Secondly, you should set the number of your tap (how many taps you have) and the number of your data (how many data you have) to "Configrue Register".

Then you should prepare your data and make sure each time you can send a new data to module when "ss_tdata" is 1.

Finally, you write a special instruction to "Configrue Register" agiain and start the FIR, then it will gives you a sequence of results.

### Address Map
Here will show how to access each parts mentioned before.

#### Access Tap RAM
It uses AXI4-lite interface to access the "Tap RAM". You should set the first 4 bits of you address to "0011", which is corresponded to "32'h3xxx_xxxx". The lower **10** bits will be used as address of the "tap_RAM". In this design, we use "Tap RAM" and "Data RAM" with a depth of 1024, and that's why only the lower 10 bits will be used as RAM address. **Please kindly know that the "Tap RAM" and "Data RAM" should have same depth. Meanwhile, you should write you tap continuously from the address "32'h3000_0000" (each time plus 1).**

#### Access Configure Register
It also uses AXI4-lite interface to access the "Configrue Register". Inside the "Configrue Register", you have three desination to access. 

The first one is "Ctrl Register", with 3 bits, it is responsible for starting the FIR (ap_start) and show the state of fir (ap_done, ap_idle).You can only write to "ap_start", but you can read all of them. Once you write "ap_start" to 1. The calculation will start, so **please make sure you have prepared everything before calculation!** In order to access "Ctrl Register", you should set the first 4 bits of you address to "0000", which is corresponded to "32'h0xxx_xxxx". If you want to write "ap_start" to 1, then you should set the lowest bit of your data to 1 like "32'hxxxx_xxx1" (other bits are useless). 

The second one is "Tap Register", you should write how many taps you have to this register (has 10 bits to store the number, which matches with the depth of RAM). The corresponding address is "32'h1xxxx_xxxx" (other bits are useless).

The third one is "Data Register", you should write how many input data you have to this register (also has 10 bits to store the number, which matches with the depth of RAM). The corresponding address is "32'h2xxxx_xxxx" (other bits are useless).

#### Access Data RAM
You can only write to "Data RAM". The FIR will need new data through AXI4-stream interface during calculation. You just need to make sure the master of this interface can provide new data after each receiving. **You don't need to store all the data to "Data RAM" in advance.**

## About Files
All files in this directory are needed. Here I will show you what they are used for.

The relationship looks like this.

  fir_top.sv

    fir_core.sv

      booth4wallace_multiplier_nbit.sv

        booth4_op_generator.sv

          op_n_to_2_nbit.sv

            op_n_to_2_nbit_onestage.sv

              op_3_to_2_nbit.sv

                onebit_adder.sv

        brent_kung_adder_nbit.sv
          
          pg_unit.sv

      brent_kung_adder_nbit.sv
        
        pg_unit.sv

    axi4_lite_slave.sv

      axi4_lite_slave_bram.sv

      axi4_lite_slave_conf.sv

    axi4_stream_slave_bram.sv

    bram_access_arbiter.sv

### "fir_top.sv"
The top module, has AXI4-lite and AXI4-stream (slave and master) interface. It also has two RAM interface.

#### "fir_core.sv":
The core module, which is responsible for the calculation. It uses booth4 based wallace multiplier and brent kung adder.

#### "axi4_lite_slave.sv"
The AXI4-lite interface moudle. It has submodule of "axi4_lite_slave.sv", which is used for accessing "Tap RAM", and submodule of "axi4_lite_slave.sv", which is used for accessing  "Configure Register".

**"bram_access_arbiter.sv":** 
Used for avoiding access conflicting.

## About IP

## Simulation Result
![alt text](Pass.png)

## Others
Actually the results have considered about the carry, but here we just use the lower 32 bits as the output.

About scalability, idealy you can change the parameter and get different size's FIR.
The "pDATA_WIDTH" can be set as "8, 16, 32, 64, 128 ...." (2 ^ n, n >= 3), and the "TAP_NUM_WIDTH" and "DATA_NUM_WIDTH" can be set as any value as long as they matched the depth of RAM you used. (again, please notice that the depth of two same should be same, and should be larger that the number of tap you want to calculate). However, I haven't verified this, I will finish this job later.
