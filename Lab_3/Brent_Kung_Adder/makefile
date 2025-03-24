# 编译器设置
COMPILER = iverilog
COMPILE_FLAGS = -g2012 -o sim_out

# 源文件路径
RTL_DIR = rtl
TB_DIR = tb

# 自动查找所有 SystemVerilog 文件
RTL_SRC := $(shell find $(RTL_DIR) -name '*.sv')
TB_SRC := $(shell find $(TB_DIR) -name '*.sv')
ALL_SRC = $(RTL_SRC) $(TB_SRC)

# 默认目标：编译并生成可执行文件
all: sim_out

sim_out: $(ALL_SRC)
	$(COMPILER) $(COMPILE_FLAGS) $(ALL_SRC)
	
# 运行仿真并生成波形文件
run: sim_out
	vvp sim_out
	@echo "波形文件已生成: wave.vcd"
	@echo "自动打开波形查看器..."
	@gtkwave wave.vcd &

view:
	@if [ -f wave.vcd ]; then \
		gtkwave wave.vcd & \
	else \
		echo "错误：未找到波形文件 wave.vcd"; \
		exit 1; \
	fi

# 清理生成文件
clean:
	rm -f sim_out
	rm -f dump.vcd
	rm -f vivado*.log
	rm -f xsim*.jou

# 声明伪目标
.PHONY: all run clean