# 查找设计文件（src/ 下的 .sv 文件，排除测试文件）
DESIGN_SRCS := $(shell find src/ -name "*.sv" ! -name "tb_*")

# 查找测试文件（tb/ 下的 tb_*.sv 文件）
TB_SRCS := $(shell find src/ -name "tb_*.sv")

# Verilator 编译选项
VERILATOR_FLAGS = --binary --exe --build --timing --trace -Wno-UNOPTFLAT
VERILATOR_FLAGS += --top-module tb_brent_kung_adder_nbit 

all:
	# ---------------- 开始生成 ---------------- #
	verilator $(VERILATOR_FLAGS) \
		$(DESIGN_SRCS) \
		$(TB_SRCS) \

run:
	# ---------------- 运行仿真 ---------------- #
	./obj_dir/Vtb_brent_kung_adder_nbit

	# ---------------- 观察波形 ---------------- #
	gtkwave *.vcd

clean:
	rm -rf obj_dir