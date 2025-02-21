This is a brent kung adder. It can be synthesized as any bits of 2 ^ n. (4, 8,16 , 32, 64, 128 ....).

The essential files are "Brent_Kung_Adder_nbit.sv", "define.sv" and "pg_unit.sv". You can set the bits you want in "define.sv". You can also integrate them in one file by yourself.

Here shows the schematic of this kind of adder with setting size to be 32, 64, 128 bit. 

For 32 bits, it shows that we use 57 (number of cells - 12) gp_units in total and is equal to original algorithm's value.
(16 + 8 + 4 + 2 + 1 + 1 + 3 + 7 + 15 = 57).
![alt text](png/schematic_32bit.png)

For 64 bits, it shows that we use 120 gp_units in total and is equal to original algorithm's value.
(32 + 16 + 8 + 4 + 2 + 1 + 1 + 3 + 7 + 15 + 31 = 120).
 ![alt text](png/schematic_64bit.png)

For 128 bits, it shows that we use 247 gp_units in total and is equal to original algorithm's value.
(64 + 32 + 16 + 8 + 4 + 2 + 1 + 1 + 3 + 7 + 15 + 31 + 63= 247).
![alt text](png/schematic_128bit.png)
