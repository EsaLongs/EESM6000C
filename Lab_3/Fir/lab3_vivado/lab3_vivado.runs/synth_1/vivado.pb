
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2$
create_project: 2default:default2
00:00:072default:default2
00:00:122default:default2
446.8592default:default2
164.5512default:defaultZ17-268h px� 
�
Command: %s
1870*	planAhead2�
�read_checkpoint -auto_incremental -incremental C:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/utils_1/imports/synth_1/fir_top.dcp2default:defaultZ12-2866h px� 
�
;Read reference checkpoint from %s for incremental synthesis3154*	planAhead2e
QC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/utils_1/imports/synth_1/fir_top.dcp2default:defaultZ12-5825h px� 
T
-Please ensure there are no constraint changes3725*	planAheadZ12-7989h px� 

Command: %s
53*	vivadotcl2N
:synth_design -top fir_top -part xc7z020clg400-1 -max_dsp 02default:defaultZ4-113h px� 
:
Starting synth_design
149*	vivadotclZ4-321h px� 
�
@Attempting to get a license for feature '%s' and/or device '%s'
308*common2
	Synthesis2default:default2
xc7z0202default:defaultZ17-347h px� 
�
0Got license for feature '%s' and/or device '%s'
310*common2
	Synthesis2default:default2
xc7z0202default:defaultZ17-349h px� 
~
CUser specified maximum number of block DSP allowed in design is %s
139*	vivadotcl2
02default:defaultZ4-287h px� 
V
Loading part %s157*device2#
xc7z020clg400-12default:defaultZ21-403h px� 

VNo compile time benefit to using incremental synthesis; A full resynthesis will be run2353*designutilsZ20-5440h px� 
�
�Flow is switching to default flow due to incremental criteria not met. If you would like to alter this behaviour and have the flow terminate instead, please set the following parameter config_implementation {autoIncr.Synth.RejectBehavior Terminate}2229*designutilsZ20-4379h px� 
�
HMultithreading enabled for synth_design using a maximum of %s processes.4828*oasys2
22default:defaultZ8-7079h px� 
a
?Launching helper process for spawning children vivado processes4827*oasysZ8-7078h px� 
_
#Helper process launched with PID %s4824*oasys2
96122default:defaultZ8-7075h px� 
�
%s*synth2�
yStarting RTL Elaboration : Time (s): cpu = 00:00:06 ; elapsed = 00:00:10 . Memory (MB): peak = 1294.047 ; gain = 411.391
2default:defaulth px� 
�
synthesizing module '%s'%s4497*oasys2
fir_top2default:default2
 2default:default2\
FC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/fir_top.sv2default:default2
242default:default8@Z8-6157h px� 
�
synthesizing module '%s'%s4497*oasys2#
axi4_lite_slave2default:default2
 2default:default2d
NC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/axi4_lite_salve.sv2default:default2
242default:default8@Z8-6157h px� 
_
%s
*synth2G
3	Parameter CTRL_WIDTH bound to: 3 - type: integer 
2default:defaulth p
x
� 
a
%s
*synth2I
5	Parameter pADDR_WIDTH bound to: 32 - type: integer 
2default:defaulth p
x
� 
a
%s
*synth2I
5	Parameter pDATA_WIDTH bound to: 32 - type: integer 
2default:defaulth p
x
� 
c
%s
*synth2K
7	Parameter TAP_NUM_WIDTH bound to: 10 - type: integer 
2default:defaulth p
x
� 
d
%s
*synth2L
8	Parameter DATA_NUM_WIDTH bound to: 10 - type: integer 
2default:defaulth p
x
� 
�
synthesizing module '%s'%s4497*oasys2(
axi4_lite_slave_bram2default:default2
 2default:default2i
SC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/axi4_lite_slave_bram.sv2default:default2
232default:default8@Z8-6157h px� 
a
%s
*synth2I
5	Parameter pDATA_WIDTH bound to: 32 - type: integer 
2default:defaulth p
x
� 
c
%s
*synth2K
7	Parameter TAP_NUM_WIDTH bound to: 10 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2(
axi4_lite_slave_bram2default:default2
 2default:default2
02default:default2
12default:default2i
SC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/axi4_lite_slave_bram.sv2default:default2
232default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2(
axi4_lite_slave_conf2default:default2
 2default:default2i
SC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/axi4_lite_slave_conf.sv2default:default2
232default:default8@Z8-6157h px� 
a
%s
*synth2I
5	Parameter pDATA_WIDTH bound to: 32 - type: integer 
2default:defaulth p
x
� 
_
%s
*synth2G
3	Parameter CTRL_WIDTH bound to: 3 - type: integer 
2default:defaulth p
x
� 
c
%s
*synth2K
7	Parameter TAP_NUM_WIDTH bound to: 10 - type: integer 
2default:defaulth p
x
� 
d
%s
*synth2L
8	Parameter DATA_NUM_WIDTH bound to: 10 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2(
axi4_lite_slave_conf2default:default2
 2default:default2
02default:default2
12default:default2i
SC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/axi4_lite_slave_conf.sv2default:default2
232default:default8@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2#
axi4_lite_slave2default:default2
 2default:default2
02default:default2
12default:default2d
NC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/axi4_lite_salve.sv2default:default2
242default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2*
axi4_stream_slave_bram2default:default2
 2default:default2k
UC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/axi4_stream_slave_bram.sv2default:default2
232default:default8@Z8-6157h px� 
a
%s
*synth2I
5	Parameter pDATA_WIDTH bound to: 32 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2*
axi4_stream_slave_bram2default:default2
 2default:default2
02default:default2
12default:default2k
UC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/axi4_stream_slave_bram.sv2default:default2
232default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2'
bram_access_arbiter2default:default2
 2default:default2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/bram_access_arbiter.sv2default:default2
232default:default8@Z8-6157h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2'
bram_access_arbiter2default:default2
 2default:default2
02default:default2
12default:default2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/bram_access_arbiter.sv2default:default2
232default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2
fir_core2default:default2
 2default:default2]
GC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/fir_core.sv2default:default2
232default:default8@Z8-6157h px� 
a
%s
*synth2I
5	Parameter pDATA_WIDTH bound to: 32 - type: integer 
2default:defaulth p
x
� 
c
%s
*synth2K
7	Parameter TAP_NUM_WIDTH bound to: 10 - type: integer 
2default:defaulth p
x
� 
d
%s
*synth2L
8	Parameter DATA_NUM_WIDTH bound to: 10 - type: integer 
2default:defaulth p
x
� 
�
synthesizing module '%s'%s4497*oasys21
booth4wallace_multiplier_nbit2default:default2
 2default:default2r
\C:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4wallace_multiplier_nbit.sv2default:default2
232default:default8@Z8-6157h px� 
^
%s
*synth2F
2	Parameter MUL_SIZE bound to: 32 - type: integer 
2default:defaulth p
x
� 
�
synthesizing module '%s'%s4497*oasys2'
booth4_op_generator2default:default2
 2default:default2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
42default:default8@Z8-6157h px� 
^
%s
*synth2F
2	Parameter MUL_SIZE bound to: 32 - type: integer 
2default:defaulth p
x
� 
`
%s
*synth2H
4	Parameter ADDER_SIZE bound to: 64 - type: integer 
2default:defaulth p
x
� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
512default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
772default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
default block is never used226*oasys2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
1022default:default8@Z8-226h px� 
�
synthesizing module '%s'%s4497*oasys2"
op_n_to_2_nbit2default:default2
 2default:default2c
MC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit.sv2default:default2
222default:default8@Z8-6157h px� 
\
%s
*synth2D
0	Parameter OP_NUM bound to: 17 - type: integer 
2default:defaulth p
x
� 
]
%s
*synth2E
1	Parameter OP_WIDTH bound to: 5 - type: integer 
2default:defaulth p
x
� 
�
synthesizing module '%s'%s4497*oasys2+
op_n_to_2_nbit_onestage2default:default2
 2default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6157h px� 
]
%s
*synth2E
1	Parameter OP_WIDTH bound to: 5 - type: integer 
2default:defaulth p
x
� 
_
%s
*synth2G
3	Parameter IN_OP_NUM bound to: 17 - type: integer 
2default:defaulth p
x
� 
�
synthesizing module '%s'%s4497*oasys2"
op_3_to_2_nbit2default:default2
 2default:default2c
MC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_3_to_2_nbit.sv2default:default2
222default:default8@Z8-6157h px� 
]
%s
*synth2E
1	Parameter OP_WIDTH bound to: 5 - type: integer 
2default:defaulth p
x
� 
�
synthesizing module '%s'%s4497*oasys2 
onebit_adder2default:default2
 2default:default2a
KC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/onebit_adder.sv2default:default2
222default:default8@Z8-6157h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2 
onebit_adder2default:default2
 2default:default2
02default:default2
12default:default2a
KC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/onebit_adder.sv2default:default2
222default:default8@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2"
op_3_to_2_nbit2default:default2
 2default:default2
02default:default2
12default:default2c
MC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_3_to_2_nbit.sv2default:default2
222default:default8@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2+
op_n_to_2_nbit_onestage2default:default2
 2default:default2
02default:default2
12default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2;
'op_n_to_2_nbit_onestage__parameterized02default:default2
 2default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6157h px� 
]
%s
*synth2E
1	Parameter OP_WIDTH bound to: 5 - type: integer 
2default:defaulth p
x
� 
_
%s
*synth2G
3	Parameter IN_OP_NUM bound to: 12 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2;
'op_n_to_2_nbit_onestage__parameterized02default:default2
 2default:default2
02default:default2
12default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2;
'op_n_to_2_nbit_onestage__parameterized12default:default2
 2default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6157h px� 
]
%s
*synth2E
1	Parameter OP_WIDTH bound to: 5 - type: integer 
2default:defaulth p
x
� 
^
%s
*synth2F
2	Parameter IN_OP_NUM bound to: 8 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2;
'op_n_to_2_nbit_onestage__parameterized12default:default2
 2default:default2
02default:default2
12default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2;
'op_n_to_2_nbit_onestage__parameterized22default:default2
 2default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6157h px� 
]
%s
*synth2E
1	Parameter OP_WIDTH bound to: 5 - type: integer 
2default:defaulth p
x
� 
^
%s
*synth2F
2	Parameter IN_OP_NUM bound to: 6 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2;
'op_n_to_2_nbit_onestage__parameterized22default:default2
 2default:default2
02default:default2
12default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2;
'op_n_to_2_nbit_onestage__parameterized32default:default2
 2default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6157h px� 
]
%s
*synth2E
1	Parameter OP_WIDTH bound to: 5 - type: integer 
2default:defaulth p
x
� 
^
%s
*synth2F
2	Parameter IN_OP_NUM bound to: 4 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2;
'op_n_to_2_nbit_onestage__parameterized32default:default2
 2default:default2
02default:default2
12default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2;
'op_n_to_2_nbit_onestage__parameterized42default:default2
 2default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6157h px� 
]
%s
*synth2E
1	Parameter OP_WIDTH bound to: 5 - type: integer 
2default:defaulth p
x
� 
^
%s
*synth2F
2	Parameter IN_OP_NUM bound to: 3 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2;
'op_n_to_2_nbit_onestage__parameterized42default:default2
 2default:default2
02default:default2
12default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2"
op_n_to_2_nbit2default:default2
 2default:default2
02default:default2
12default:default2c
MC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit.sv2default:default2
222default:default8@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2'
booth4_op_generator2default:default2
 2default:default2
02default:default2
12default:default2h
RC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4_op_generator.sv2default:default2
42default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys22
op_n_to_2_nbit__parameterized02default:default2
 2default:default2c
MC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit.sv2default:default2
222default:default8@Z8-6157h px� 
\
%s
*synth2D
0	Parameter OP_NUM bound to: 19 - type: integer 
2default:defaulth p
x
� 
^
%s
*synth2F
2	Parameter OP_WIDTH bound to: 64 - type: integer 
2default:defaulth p
x
� 
�
synthesizing module '%s'%s4497*oasys2;
'op_n_to_2_nbit_onestage__parameterized52default:default2
 2default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6157h px� 
^
%s
*synth2F
2	Parameter OP_WIDTH bound to: 64 - type: integer 
2default:defaulth p
x
� 
_
%s
*synth2G
3	Parameter IN_OP_NUM bound to: 19 - type: integer 
2default:defaulth p
x
� 
�
synthesizing module '%s'%s4497*oasys22
op_3_to_2_nbit__parameterized02default:default2
 2default:default2c
MC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_3_to_2_nbit.sv2default:default2
222default:default8@Z8-6157h px� 
^
%s
*synth2F
2	Parameter OP_WIDTH bound to: 64 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys22
op_3_to_2_nbit__parameterized02default:default2
 2default:default2
02default:default2
12default:default2c
MC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_3_to_2_nbit.sv2default:default2
222default:default8@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2;
'op_n_to_2_nbit_onestage__parameterized52default:default2
 2default:default2
02default:default2
12default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2;
'op_n_to_2_nbit_onestage__parameterized62default:default2
 2default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6157h px� 
^
%s
*synth2F
2	Parameter OP_WIDTH bound to: 64 - type: integer 
2default:defaulth p
x
� 
_
%s
*synth2G
3	Parameter IN_OP_NUM bound to: 13 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2;
'op_n_to_2_nbit_onestage__parameterized62default:default2
 2default:default2
02default:default2
12default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2;
'op_n_to_2_nbit_onestage__parameterized72default:default2
 2default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6157h px� 
^
%s
*synth2F
2	Parameter OP_WIDTH bound to: 64 - type: integer 
2default:defaulth p
x
� 
^
%s
*synth2F
2	Parameter IN_OP_NUM bound to: 9 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2;
'op_n_to_2_nbit_onestage__parameterized72default:default2
 2default:default2
02default:default2
12default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2;
'op_n_to_2_nbit_onestage__parameterized82default:default2
 2default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6157h px� 
^
%s
*synth2F
2	Parameter OP_WIDTH bound to: 64 - type: integer 
2default:defaulth p
x
� 
^
%s
*synth2F
2	Parameter IN_OP_NUM bound to: 6 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2;
'op_n_to_2_nbit_onestage__parameterized82default:default2
 2default:default2
02default:default2
12default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2;
'op_n_to_2_nbit_onestage__parameterized92default:default2
 2default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6157h px� 
^
%s
*synth2F
2	Parameter OP_WIDTH bound to: 64 - type: integer 
2default:defaulth p
x
� 
^
%s
*synth2F
2	Parameter IN_OP_NUM bound to: 4 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2;
'op_n_to_2_nbit_onestage__parameterized92default:default2
 2default:default2
02default:default2
12default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2<
(op_n_to_2_nbit_onestage__parameterized102default:default2
 2default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6157h px� 
^
%s
*synth2F
2	Parameter OP_WIDTH bound to: 64 - type: integer 
2default:defaulth p
x
� 
^
%s
*synth2F
2	Parameter IN_OP_NUM bound to: 3 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2<
(op_n_to_2_nbit_onestage__parameterized102default:default2
 2default:default2
02default:default2
12default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2<
(op_n_to_2_nbit_onestage__parameterized112default:default2
 2default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6157h px� 
^
%s
*synth2F
2	Parameter OP_WIDTH bound to: 64 - type: integer 
2default:defaulth p
x
� 
^
%s
*synth2F
2	Parameter IN_OP_NUM bound to: 2 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2<
(op_n_to_2_nbit_onestage__parameterized112default:default2
 2default:default2
02default:default2
12default:default2l
VC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit_onestage.sv2default:default2
222default:default8@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys22
op_n_to_2_nbit__parameterized02default:default2
 2default:default2
02default:default2
12default:default2c
MC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/op_n_to_2_nbit.sv2default:default2
222default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys2)
brent_kung_adder_nbit2default:default2
 2default:default2j
TC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/brent_kung_adder_nbit.sv2default:default2
232default:default8@Z8-6157h px� 
`
%s
*synth2H
4	Parameter ADDER_SIZE bound to: 64 - type: integer 
2default:defaulth p
x
� 
�
synthesizing module '%s'%s4497*oasys2
gp_unit2default:default2
 2default:default2\
FC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/gp_unit.sv2default:default2
222default:default8@Z8-6157h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
gp_unit2default:default2
 2default:default2
02default:default2
12default:default2\
FC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/gp_unit.sv2default:default2
222default:default8@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2)
brent_kung_adder_nbit2default:default2
 2default:default2
02default:default2
12default:default2j
TC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/brent_kung_adder_nbit.sv2default:default2
232default:default8@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys21
booth4wallace_multiplier_nbit2default:default2
 2default:default2
02default:default2
12default:default2r
\C:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/booth4wallace_multiplier_nbit.sv2default:default2
232default:default8@Z8-6155h px� 
�
synthesizing module '%s'%s4497*oasys29
%brent_kung_adder_nbit__parameterized02default:default2
 2default:default2j
TC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/brent_kung_adder_nbit.sv2default:default2
232default:default8@Z8-6157h px� 
`
%s
*synth2H
4	Parameter ADDER_SIZE bound to: 10 - type: integer 
2default:defaulth p
x
� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys29
%brent_kung_adder_nbit__parameterized02default:default2
 2default:default2
02default:default2
12default:default2j
TC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/brent_kung_adder_nbit.sv2default:default2
232default:default8@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
fir_core2default:default2
 2default:default2
02default:default2
12default:default2]
GC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/fir_core.sv2default:default2
232default:default8@Z8-6155h px� 
�
'done synthesizing module '%s'%s (%s#%s)4495*oasys2
fir_top2default:default2
 2default:default2
02default:default2
12default:default2\
FC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/sources_1/new/fir_top.sv2default:default2
242default:default8@Z8-6155h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
aclk2default:default2*
axi4_stream_slave_bram2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
aresetn2default:default2*
axi4_stream_slave_bram2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[31]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[30]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[29]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[28]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[27]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[26]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[25]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[24]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[23]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[22]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[21]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[20]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[19]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[18]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[17]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[16]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[15]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[14]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[13]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[12]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[11]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_wdata[10]2default:default2(
axi4_lite_slave_conf2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
in_ss_tlast2default:default2
fir_top2default:defaultZ8-7129h px� 
�
%s*synth2�
yFinished RTL Elaboration : Time (s): cpu = 00:00:09 ; elapsed = 00:00:15 . Memory (MB): peak = 1399.523 ; gain = 516.867
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
M
%s
*synth25
!Start Handling Custom Attributes
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Handling Custom Attributes : Time (s): cpu = 00:00:09 ; elapsed = 00:00:15 . Memory (MB): peak = 1399.523 ; gain = 516.867
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished RTL Optimization Phase 1 : Time (s): cpu = 00:00:09 ; elapsed = 00:00:15 . Memory (MB): peak = 1399.523 ; gain = 516.867
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2 
00:00:00.3132default:default2
1399.5232default:default2
0.0002default:defaultZ17-268h px� 
K
)Preparing netlist for logic optimization
349*projectZ1-570h px� 
>

Processing XDC Constraints
244*projectZ1-262h px� 
=
Initializing timing engine
348*projectZ1-569h px� 
�
Parsing XDC File [%s]
179*designutils2Y
CC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/constrs_1/new/CLK.xdc2default:default8Z20-179h px� 
�
Finished Parsing XDC File [%s]
178*designutils2Y
CC:/Users/ytangdg/lab3_vivado/lab3_vivado.srcs/constrs_1/new/CLK.xdc2default:default8Z20-178h px� 
H
&Completed Processing XDC Constraints

245*projectZ1-263h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2 
00:00:00.0312default:default2
1500.0272default:default2
0.0002default:defaultZ17-268h px� 
~
!Unisim Transformation Summary:
%s111*project29
%No Unisim elements were transformed.
2default:defaultZ1-111h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common24
 Constraint Validation Runtime : 2default:default2
00:00:002default:default2 
00:00:00.1352default:default2
1500.0272default:default2
0.0002default:defaultZ17-268h px� 

VNo compile time benefit to using incremental synthesis; A full resynthesis will be run2353*designutilsZ20-5440h px� 
�
�Flow is switching to default flow due to incremental criteria not met. If you would like to alter this behaviour and have the flow terminate instead, please set the following parameter config_implementation {autoIncr.Synth.RejectBehavior Terminate}2229*designutilsZ20-4379h px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
Finished Constraint Validation : Time (s): cpu = 00:00:19 ; elapsed = 00:00:34 . Memory (MB): peak = 1500.027 ; gain = 617.371
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
V
%s
*synth2>
*Start Loading Part and Timing Information
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
J
%s
*synth22
Loading part: xc7z020clg400-1
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Loading Part and Timing Information : Time (s): cpu = 00:00:19 ; elapsed = 00:00:34 . Memory (MB): peak = 1500.027 ; gain = 617.371
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
Z
%s
*synth2B
.Start Applying 'set_property' XDC Constraints
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished applying 'set_property' XDC Constraints : Time (s): cpu = 00:00:19 ; elapsed = 00:00:34 . Memory (MB): peak = 1500.027 ; gain = 617.371
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished RTL Optimization Phase 2 : Time (s): cpu = 00:00:20 ; elapsed = 00:00:36 . Memory (MB): peak = 1500.027 ; gain = 617.371
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
L
%s
*synth24
 Start RTL Component Statistics 
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23
Detailed RTL Component Info : 
2default:defaulth p
x
� 
:
%s
*synth2"
+---Adders : 
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input   10 Bit       Adders := 3     
2default:defaulth p
x
� 
8
%s
*synth2 
+---XORs : 
2default:defaulth p
x
� 
Z
%s
*synth2B
.	   2 Input     63 Bit         XORs := 4     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	   2 Input      9 Bit         XORs := 2     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	   3 Input      1 Bit         XORs := 1166  
2default:defaulth p
x
� 
=
%s
*synth2%
+---Registers : 
2default:defaulth p
x
� 
Z
%s
*synth2B
.	               74 Bit    Registers := 1     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	               64 Bit    Registers := 22    
2default:defaulth p
x
� 
Z
%s
*synth2B
.	               32 Bit    Registers := 1     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	               10 Bit    Registers := 6     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	                2 Bit    Registers := 4     
2default:defaulth p
x
� 
Z
%s
*synth2B
.	                1 Bit    Registers := 6     
2default:defaulth p
x
� 
9
%s
*synth2!
+---Muxes : 
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input   74 Bit        Muxes := 1     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input   32 Bit        Muxes := 3     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input   10 Bit        Muxes := 3     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   2 Input    1 Bit        Muxes := 8     
2default:defaulth p
x
� 
X
%s
*synth2@
,	   8 Input    1 Bit        Muxes := 16    
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
O
%s
*synth27
#Finished RTL Component Statistics 
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
H
%s
*synth20
Start Part Resource Summary
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s
*synth2k
WPart Resources:
DSPs: 220 (col length:60)
BRAMs: 280 (col length: RAMB18 60 RAMB36 30)
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23
Finished Part Resource Summary
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
W
%s
*synth2?
+Start Cross Boundary and Area Optimization
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
H
&Parallel synthesis criteria is not met4829*oasysZ8-7080h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2#
in_s_awaddr[27]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2#
in_s_awaddr[26]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2#
in_s_awaddr[25]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2#
in_s_awaddr[24]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2#
in_s_awaddr[23]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2#
in_s_awaddr[22]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2#
in_s_awaddr[21]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2#
in_s_awaddr[20]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2#
in_s_awaddr[19]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2#
in_s_awaddr[18]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2#
in_s_awaddr[17]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2#
in_s_awaddr[16]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2#
in_s_awaddr[15]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2#
in_s_awaddr[14]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2#
in_s_awaddr[13]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2#
in_s_awaddr[12]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_awaddr[1]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2"
in_s_awaddr[0]2default:default2
fir_top2default:defaultZ8-7129h px� 
�
9Port %s in module %s is either unconnected or has no load4866*oasys2
in_ss_tlast2default:default2
fir_top2default:defaultZ8-7129h px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Cross Boundary and Area Optimization : Time (s): cpu = 00:00:28 ; elapsed = 00:00:49 . Memory (MB): peak = 1500.027 ; gain = 617.371
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
R
%s
*synth2:
&Start Applying XDC Timing Constraints
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Applying XDC Timing Constraints : Time (s): cpu = 00:00:36 ; elapsed = 00:01:00 . Memory (MB): peak = 1500.027 ; gain = 617.371
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
F
%s
*synth2.
Start Timing Optimization
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
}Finished Timing Optimization : Time (s): cpu = 00:00:38 ; elapsed = 00:01:04 . Memory (MB): peak = 1500.027 ; gain = 617.371
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
E
%s
*synth2-
Start Technology Mapping
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
|Finished Technology Mapping : Time (s): cpu = 00:00:40 ; elapsed = 00:01:07 . Memory (MB): peak = 1521.070 ; gain = 638.414
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
?
%s
*synth2'
Start IO Insertion
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
Q
%s
*synth29
%Start Flattening Before IO Insertion
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
T
%s
*synth2<
(Finished Flattening Before IO Insertion
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
H
%s
*synth20
Start Final Netlist Cleanup
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23
Finished Final Netlist Cleanup
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
vFinished IO Insertion : Time (s): cpu = 00:00:45 ; elapsed = 00:01:15 . Memory (MB): peak = 1535.887 ; gain = 653.230
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
O
%s
*synth27
#Start Renaming Generated Instances
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Renaming Generated Instances : Time (s): cpu = 00:00:45 ; elapsed = 00:01:15 . Memory (MB): peak = 1535.887 ; gain = 653.230
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
L
%s
*synth24
 Start Rebuilding User Hierarchy
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Rebuilding User Hierarchy : Time (s): cpu = 00:00:45 ; elapsed = 00:01:16 . Memory (MB): peak = 1535.887 ; gain = 653.230
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23
Start Renaming Generated Ports
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Renaming Generated Ports : Time (s): cpu = 00:00:45 ; elapsed = 00:01:16 . Memory (MB): peak = 1535.887 ; gain = 653.230
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
M
%s
*synth25
!Start Handling Custom Attributes
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Handling Custom Attributes : Time (s): cpu = 00:00:45 ; elapsed = 00:01:16 . Memory (MB): peak = 1535.887 ; gain = 653.230
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
J
%s
*synth22
Start Renaming Generated Nets
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Renaming Generated Nets : Time (s): cpu = 00:00:45 ; elapsed = 00:01:16 . Memory (MB): peak = 1535.887 ; gain = 653.230
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
K
%s
*synth23
Start Writing Synthesis Report
2default:defaulth p
x
� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
A
%s
*synth2)

Report BlackBoxes: 
2default:defaulth p
x
� 
J
%s
*synth22
+-+--------------+----------+
2default:defaulth p
x
� 
J
%s
*synth22
| |BlackBox name |Instances |
2default:defaulth p
x
� 
J
%s
*synth22
+-+--------------+----------+
2default:defaulth p
x
� 
J
%s
*synth22
+-+--------------+----------+
2default:defaulth p
x
� 
A
%s*synth2)

Report Cell Usage: 
2default:defaulth px� 
D
%s*synth2,
+------+-------+------+
2default:defaulth px� 
D
%s*synth2,
|      |Cell   |Count |
2default:defaulth px� 
D
%s*synth2,
+------+-------+------+
2default:defaulth px� 
D
%s*synth2,
|1     |BUFG   |     1|
2default:defaulth px� 
D
%s*synth2,
|2     |CARRY4 |     3|
2default:defaulth px� 
D
%s*synth2,
|3     |LUT1   |     2|
2default:defaulth px� 
D
%s*synth2,
|4     |LUT2   |    31|
2default:defaulth px� 
D
%s*synth2,
|5     |LUT3   |   302|
2default:defaulth px� 
D
%s*synth2,
|6     |LUT4   |    90|
2default:defaulth px� 
D
%s*synth2,
|7     |LUT5   |   412|
2default:defaulth px� 
D
%s*synth2,
|8     |LUT6   |   535|
2default:defaulth px� 
D
%s*synth2,
|9     |FDCE   |   526|
2default:defaulth px� 
D
%s*synth2,
|10    |FDPE   |     1|
2default:defaulth px� 
D
%s*synth2,
|11    |IBUF   |   164|
2default:defaulth px� 
D
%s*synth2,
|12    |OBUF   |   161|
2default:defaulth px� 
D
%s*synth2,
+------+-------+------+
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
�
%s*synth2�
�Finished Writing Synthesis Report : Time (s): cpu = 00:00:45 ; elapsed = 00:01:16 . Memory (MB): peak = 1535.887 ; gain = 653.230
2default:defaulth px� 
~
%s
*synth2f
R---------------------------------------------------------------------------------
2default:defaulth p
x
� 
s
%s
*synth2[
GSynthesis finished with 0 errors, 0 critical warnings and 20 warnings.
2default:defaulth p
x
� 
�
%s
*synth2�
Synthesis Optimization Runtime : Time (s): cpu = 00:00:32 ; elapsed = 00:01:09 . Memory (MB): peak = 1535.887 ; gain = 552.727
2default:defaulth p
x
� 
�
%s
*synth2�
�Synthesis Optimization Complete : Time (s): cpu = 00:00:45 ; elapsed = 00:01:16 . Memory (MB): peak = 1535.887 ; gain = 653.230
2default:defaulth p
x
� 
B
 Translating synthesized netlist
350*projectZ1-571h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2 
00:00:00.0472default:default2
1547.9572default:default2
0.0002default:defaultZ17-268h px� 
e
-Analyzing %s Unisim elements for replacement
17*netlist2
32default:defaultZ29-17h px� 
j
2Unisim Transformation completed in %s CPU seconds
28*netlist2
02default:defaultZ29-28h px� 
K
)Preparing netlist for logic optimization
349*projectZ1-570h px� 
u
)Pushed %s inverter(s) to %s load pin(s).
98*opt2
02default:default2
02default:defaultZ31-138h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2.
Netlist sorting complete. 2default:default2
00:00:002default:default2 
00:00:00.0012default:default2
1551.6452default:default2
0.0002default:defaultZ17-268h px� 
~
!Unisim Transformation Summary:
%s111*project29
%No Unisim elements were transformed.
2default:defaultZ1-111h px� 
h
%Synth Design complete | Checksum: %s
562*	vivadotcl2
fba6b9522default:defaultZ4-1430h px� 
U
Releasing license: %s
83*common2
	Synthesis2default:defaultZ17-83h px� 
�
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
1322default:default2
452default:default2
02default:default2
02default:defaultZ4-41h px� 
^
%s completed successfully
29*	vivadotcl2 
synth_design2default:defaultZ4-42h px� 
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2"
synth_design: 2default:default2
00:00:522default:default2
00:01:402default:default2
1551.6452default:default2
1075.5902default:defaultZ17-268h px� 
�
 The %s '%s' has been generated.
621*common2

checkpoint2default:default2U
AC:/Users/ytangdg/lab3_vivado/lab3_vivado.runs/synth_1/fir_top.dcp2default:defaultZ17-1381h px� 
�
%s4*runtcl2x
dExecuting : report_utilization -file fir_top_utilization_synth.rpt -pb fir_top_utilization_synth.pb
2default:defaulth px� 
�
Exiting %s at %s...
206*common2
Vivado2default:default2,
Tue Mar 25 19:11:22 20252default:defaultZ17-206h px� 


End Record