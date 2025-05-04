	.file	"fir_control.c"
	.option nopic
	.attribute arch, "rv32i2p1_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/Users/yue/hkust-soc-lab/Lab4/Lab4-2/lab-caravel_fir/testbench/counter_la_fir" "fir_control.c"
	.align	2
	.type	flush_cpu_icache, @function
flush_cpu_icache:
.LFB21:
	.file 1 "../../firmware/system.h"
	.loc 1 15 1
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sw	ra,12(sp)
	sw	s0,8(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 26 1
	nop
	lw	ra,12(sp)
	.cfi_restore 1
	lw	s0,8(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 16
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE21:
	.size	flush_cpu_icache, .-flush_cpu_icache
	.align	2
	.type	flush_cpu_dcache, @function
flush_cpu_dcache:
.LFB22:
	.loc 1 29 1
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sw	ra,12(sp)
	sw	s0,8(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 33 1
	nop
	lw	ra,12(sp)
	.cfi_restore 1
	lw	s0,8(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 16
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE22:
	.size	flush_cpu_dcache, .-flush_cpu_dcache
	.section	.mprjram,"ax",@progbits
	.align	2
	.globl	init_fir_control
	.type	init_fir_control, @function
init_fir_control:
.LFB316:
	.file 2 "fir_control.c"
	.loc 2 5 70
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sw	ra,12(sp)
	sw	s0,8(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 2 7 5
	li	a5,805306368
	.loc 2 7 49
	sw	zero,0(a5)
	.loc 2 10 5
	li	a5,805306368
	addi	a5,a5,16
	.loc 2 10 49
	li	a4,64
	sw	a4,0(a5)
	.loc 2 11 1
	nop
	lw	ra,12(sp)
	.cfi_restore 1
	lw	s0,8(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 16
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE316:
	.size	init_fir_control, .-init_fir_control
	.align	2
	.globl	program_fir_coeffs
	.type	program_fir_coeffs, @function
program_fir_coeffs:
.LFB317:
	.loc 2 14 100
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sw	ra,44(sp)
	sw	s0,40(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	sw	a0,-36(s0)
	sw	a1,-40(s0)
	.loc 2 16 12
	sw	zero,-20(s0)
	.loc 2 16 5
	j	.L5
.L6:
	.loc 2 17 71
	lw	a5,-20(s0)
	slli	a5,a5,2
	lw	a4,-36(s0)
	add	a5,a4,a5
	lw	a3,0(a5)
	.loc 2 17 51
	lw	a4,-20(s0)
	li	a5,201326592
	addi	a5,a5,16
	add	a5,a4,a5
	slli	a5,a5,2
	.loc 2 17 71
	mv	a4,a3
	.loc 2 17 63
	sw	a4,0(a5)
	.loc 2 16 34 discriminator 3
	lw	a5,-20(s0)
	addi	a5,a5,1
	sw	a5,-20(s0)
.L5:
	.loc 2 16 19 discriminator 1
	lw	a4,-20(s0)
	lw	a5,-40(s0)
	blt	a4,a5,.L6
	.loc 2 19 1
	nop
	nop
	lw	ra,44(sp)
	.cfi_restore 1
	lw	s0,40(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE317:
	.size	program_fir_coeffs, .-program_fir_coeffs
	.align	2
	.globl	get_data
	.type	get_data, @function
get_data:
.LFB318:
	.loc 2 22 66
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sw	ra,28(sp)
	sw	s0,24(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 2 24 11
	nop
.L8:
	.loc 2 24 14 discriminator 1
	li	a5,805306368
	lw	a5,0(a5)
	.loc 2 24 58 discriminator 1
	andi	a5,a5,32
	.loc 2 24 12 discriminator 1
	beq	a5,zero,.L8
	.loc 2 27 21
	li	a5,805306368
	addi	a5,a5,132
	.loc 2 27 14
	lw	a5,0(a5)
	sw	a5,-20(s0)
	.loc 2 31 31
	li	a5,805306368
	lw	a5,0(a5)
	.loc 2 31 23
	sw	a5,-24(s0)
	.loc 2 33 12
	lw	a5,-20(s0)
	.loc 2 34 1
	mv	a0,a5
	lw	ra,28(sp)
	.cfi_restore 1
	lw	s0,24(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE318:
	.size	get_data, .-get_data
	.align	2
	.globl	wait_for_fir_ready
	.type	wait_for_fir_ready, @function
wait_for_fir_ready:
.LFB319:
	.loc 2 37 72
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sw	ra,12(sp)
	sw	s0,8(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 2 38 11
	nop
.L11:
	.loc 2 38 14 discriminator 1
	li	a5,805306368
	lw	a5,0(a5)
	.loc 2 38 58 discriminator 1
	andi	a5,a5,16
	.loc 2 38 12 discriminator 1
	beq	a5,zero,.L11
	.loc 2 39 1
	nop
	nop
	lw	ra,12(sp)
	.cfi_restore 1
	lw	s0,8(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 16
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE319:
	.size	wait_for_fir_ready, .-wait_for_fir_ready
	.align	2
	.globl	send_data_to_fir
	.type	send_data_to_fir, @function
send_data_to_fir:
.LFB320:
	.loc 2 42 78
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sw	ra,28(sp)
	sw	s0,24(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	sw	a0,-20(s0)
	.loc 2 44 5
	call	wait_for_fir_ready
	.loc 2 45 5
	li	a5,805306368
	addi	a5,a5,128
	.loc 2 45 49
	lw	a4,-20(s0)
	sw	a4,0(a5)
	.loc 2 46 1
	nop
	lw	ra,28(sp)
	.cfi_restore 1
	lw	s0,24(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE320:
	.size	send_data_to_fir, .-send_data_to_fir
	.align	2
	.globl	receive_data_from_fir
	.type	receive_data_from_fir, @function
receive_data_from_fir:
.LFB321:
	.loc 2 49 74
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sw	ra,12(sp)
	sw	s0,8(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 2 51 11
	nop
.L14:
	.loc 2 51 14 discriminator 1
	li	a5,805306368
	lw	a5,0(a5)
	.loc 2 51 58 discriminator 1
	andi	a5,a5,32
	.loc 2 51 12 discriminator 1
	beq	a5,zero,.L14
	.loc 2 54 12
	li	a5,805306368
	addi	a5,a5,132
	lw	a5,0(a5)
	.loc 2 55 1
	mv	a0,a5
	lw	ra,12(sp)
	.cfi_restore 1
	lw	s0,8(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 16
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE321:
	.size	receive_data_from_fir, .-receive_data_from_fir
	.align	2
	.globl	start_fir_calculation
	.type	start_fir_calculation, @function
start_fir_calculation:
.LFB322:
	.loc 2 58 75
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sw	ra,12(sp)
	sw	s0,8(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 2 60 5
	li	a5,805306368
	.loc 2 60 49
	li	a4,1
	sw	a4,0(a5)
	.loc 2 61 1
	nop
	lw	ra,12(sp)
	.cfi_restore 1
	lw	s0,8(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 16
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE322:
	.size	start_fir_calculation, .-start_fir_calculation
	.align	2
	.globl	wait_for_fir_done
	.type	wait_for_fir_done, @function
wait_for_fir_done:
.LFB323:
	.loc 2 64 71
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sw	ra,12(sp)
	sw	s0,8(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 2 65 11
	nop
.L18:
	.loc 2 65 14 discriminator 1
	li	a5,805306368
	lw	a5,0(a5)
	.loc 2 65 58 discriminator 1
	andi	a5,a5,2
	.loc 2 65 12 discriminator 1
	beq	a5,zero,.L18
	.loc 2 66 1
	nop
	nop
	lw	ra,12(sp)
	.cfi_restore 1
	lw	s0,8(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 16
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE323:
	.size	wait_for_fir_done, .-wait_for_fir_done
	.text
.Letext0:
	.file 3 "/opt/homebrew/Cellar/riscv-gnu-toolchain/main/lib/gcc/riscv64-unknown-elf/14.2.0/include/stdint-gcc.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x192
	.2byte	0x5
	.byte	0x1
	.byte	0x4
	.4byte	.Ldebug_abbrev0
	.uleb128 0x6
	.4byte	.LASF24
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.4byte	.LLRL0
	.4byte	0
	.4byte	.Ldebug_line0
	.uleb128 0x1
	.byte	0x4
	.byte	0x7
	.4byte	.LASF2
	.uleb128 0x7
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x1
	.byte	0x1
	.byte	0x6
	.4byte	.LASF3
	.uleb128 0x1
	.byte	0x2
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x1
	.byte	0x4
	.byte	0x5
	.4byte	.LASF5
	.uleb128 0x1
	.byte	0x8
	.byte	0x5
	.4byte	.LASF6
	.uleb128 0x1
	.byte	0x1
	.byte	0x8
	.4byte	.LASF7
	.uleb128 0x1
	.byte	0x2
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0x8
	.4byte	.LASF25
	.byte	0x3
	.byte	0x34
	.byte	0x1b
	.4byte	0x6f
	.uleb128 0x9
	.4byte	0x5e
	.uleb128 0x1
	.byte	0x4
	.byte	0x7
	.4byte	.LASF9
	.uleb128 0x1
	.byte	0x8
	.byte	0x7
	.4byte	.LASF10
	.uleb128 0x2
	.4byte	.LASF11
	.byte	0x40
	.4byte	.LFB323
	.4byte	.LFE323-.LFB323
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x2
	.4byte	.LASF12
	.byte	0x3a
	.4byte	.LFB322
	.4byte	.LFE322-.LFB322
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xa
	.4byte	.LASF26
	.byte	0x2
	.byte	0x31
	.byte	0x32
	.4byte	0x2d
	.4byte	.LFB321
	.4byte	.LFE321-.LFB321
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xb
	.4byte	.LASF14
	.byte	0x2
	.byte	0x2a
	.byte	0x33
	.4byte	.LFB320
	.4byte	.LFE320-.LFB320
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd8
	.uleb128 0x3
	.4byte	.LASF16
	.byte	0x2a
	.byte	0x48
	.4byte	0x2d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x2
	.4byte	.LASF13
	.byte	0x25
	.4byte	.LFB319
	.4byte	.LFE319-.LFB319
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xc
	.4byte	.LASF15
	.byte	0x2
	.byte	0x16
	.byte	0x37
	.4byte	0x5e
	.4byte	.LFB318
	.4byte	.LFE318-.LFB318
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x11f
	.uleb128 0x4
	.4byte	.LASF16
	.byte	0x1b
	.byte	0xe
	.4byte	0x5e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.4byte	.LASF17
	.byte	0x1f
	.byte	0x17
	.4byte	0x6a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF18
	.byte	0x2
	.byte	0xe
	.byte	0x33
	.4byte	.LFB317
	.4byte	.LFE317-.LFB317
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x15f
	.uleb128 0x3
	.4byte	.LASF19
	.byte	0xe
	.byte	0x4a
	.4byte	0x15f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.4byte	.LASF20
	.byte	0xe
	.byte	0x58
	.4byte	0x2d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xe
	.string	"i"
	.byte	0x2
	.byte	0xf
	.byte	0x9
	.4byte	0x2d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0xf
	.byte	0x4
	.4byte	0x2d
	.uleb128 0x2
	.4byte	.LASF21
	.byte	0x5
	.4byte	.LFB316
	.4byte	.LFE316-.LFB316
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x5
	.4byte	.LASF22
	.byte	0x1c
	.4byte	.LFB22
	.4byte	.LFE22-.LFB22
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x5
	.4byte	.LASF23
	.byte	0xe
	.4byte	.LFB21
	.4byte	.LFE21-.LFB21
	.uleb128 0x1
	.byte	0x9c
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 51
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 37
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x1f
	.uleb128 0x1b
	.uleb128 0x1f
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x35
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.4byte	0x5c
	.2byte	0x2
	.4byte	.Ldebug_info0
	.byte	0x4
	.byte	0
	.2byte	0
	.2byte	0
	.4byte	.Ltext0
	.4byte	.Letext0-.Ltext0
	.4byte	.LFB316
	.4byte	.LFE316-.LFB316
	.4byte	.LFB317
	.4byte	.LFE317-.LFB317
	.4byte	.LFB318
	.4byte	.LFE318-.LFB318
	.4byte	.LFB319
	.4byte	.LFE319-.LFB319
	.4byte	.LFB320
	.4byte	.LFE320-.LFB320
	.4byte	.LFB321
	.4byte	.LFE321-.LFB321
	.4byte	.LFB322
	.4byte	.LFE322-.LFB322
	.4byte	.LFB323
	.4byte	.LFE323-.LFB323
	.4byte	0
	.4byte	0
	.section	.debug_rnglists,"",@progbits
.Ldebug_ranges0:
	.4byte	.Ldebug_ranges3-.Ldebug_ranges2
.Ldebug_ranges2:
	.2byte	0x5
	.byte	0x4
	.byte	0
	.4byte	0
.LLRL0:
	.byte	0x7
	.4byte	.Ltext0
	.uleb128 .Letext0-.Ltext0
	.byte	0x7
	.4byte	.LFB316
	.uleb128 .LFE316-.LFB316
	.byte	0x7
	.4byte	.LFB317
	.uleb128 .LFE317-.LFB317
	.byte	0x7
	.4byte	.LFB318
	.uleb128 .LFE318-.LFB318
	.byte	0x7
	.4byte	.LFB319
	.uleb128 .LFE319-.LFB319
	.byte	0x7
	.4byte	.LFB320
	.uleb128 .LFE320-.LFB320
	.byte	0x7
	.4byte	.LFB321
	.uleb128 .LFE321-.LFB321
	.byte	0x7
	.4byte	.LFB322
	.uleb128 .LFE322-.LFB322
	.byte	0x7
	.4byte	.LFB323
	.uleb128 .LFE323-.LFB323
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF19:
	.string	"coeffs"
.LASF24:
	.string	"GNU C17 14.2.0 -mabi=ilp32 -mtune=rocket -misa-spec=20191213 -march=rv32i_zicsr -g -ffreestanding"
.LASF20:
	.string	"num_coeffs"
.LASF22:
	.string	"flush_cpu_dcache"
.LASF16:
	.string	"data"
.LASF26:
	.string	"receive_data_from_fir"
.LASF7:
	.string	"unsigned char"
.LASF12:
	.string	"start_fir_calculation"
.LASF9:
	.string	"long unsigned int"
.LASF8:
	.string	"short unsigned int"
.LASF11:
	.string	"wait_for_fir_done"
.LASF21:
	.string	"init_fir_control"
.LASF14:
	.string	"send_data_to_fir"
.LASF2:
	.string	"unsigned int"
.LASF10:
	.string	"long long unsigned int"
.LASF15:
	.string	"get_data"
.LASF23:
	.string	"flush_cpu_icache"
.LASF6:
	.string	"long long int"
.LASF4:
	.string	"short int"
.LASF17:
	.string	"dummy"
.LASF25:
	.string	"uint32_t"
.LASF5:
	.string	"long int"
.LASF3:
	.string	"signed char"
.LASF13:
	.string	"wait_for_fir_ready"
.LASF18:
	.string	"program_fir_coeffs"
	.section	.debug_line_str,"MS",@progbits,1
.LASF1:
	.string	"/Users/yue/hkust-soc-lab/Lab4/Lab4-2/lab-caravel_fir/testbench/counter_la_fir"
.LASF0:
	.string	"fir_control.c"
	.ident	"GCC: (g04696df09) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
