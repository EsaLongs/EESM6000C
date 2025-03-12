# Brent-Kung Adder
## Basic Function
This is a brent kung adder. You can set the ADDER_SIZE parameter as any value of **(2 ^ n)** (4, 8,16 , 32, 64, 128 ....).

### Essential Files
"Brent_Kung_Adder_nbit.sv" is the top module. You need "pg_unit.sv" as dependency.

## Simulation Result

**TEST RESULT**

The following figure shows some of the tests used to judge whether the result is correct.



## Synthesis Result

Here shows the schematic of this kind of adder with setting ADDER_SIZE to be 32, 64, 128 bit. 

**32 Bit**

For 32 bits, it shows that we use 57 (number of cells - 12) gp_units in total and is equal to original algorithm's value.

(16 + 8 + 4 + 2 + 1 + 1 + 3 + 7 + 15 = 57).

![alt text](png/schematic_32bit.png)

**64 Bit**

For 64 bits, it shows that we use 120 gp_units in total and is equal to original algorithm's value.

(32 + 16 + 8 + 4 + 2 + 1 + 1 + 3 + 7 + 15 + 31 = 120).

![alt text](png/schematic_64bit.png)

**128 Bit**

For 128 bits, it shows that we use 247 gp_units in total and is equal to original algorithm's value.

(64 + 32 + 16 + 8 + 4 + 2 + 1 + 1 + 3 + 7 + 15 + 31 + 63= 247).

![alt text](png/schematic_128bit.png)

## Contribution
Contributions to this project are highly encouraged and appreciated! Whether it's bug fixes, feature enhancements, or optimizations, your contributions can help improve the overall quality and functionality of the adder.