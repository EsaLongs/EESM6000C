###############################################################################
# Makefile for SystemVerilog FIR Project
# This Makefile is configured to use slang for SystemVerilog syntax checking
###############################################################################

# Define the SystemVerilog compiler (slang) and its standard version
# slang is used for parsing and checking SystemVerilog syntax
SLANG := slang
STD := --std 1800-2017  # Use SystemVerilog 2017 standard

# Project directory structure
# TB_DIR: Contains testbench files
# RTL_DIR: Contains RTL design files
# BUILD_DIR: Output directory for build artifacts
TB_DIR  := tb
RTL_DIR := rtl
BUILD_DIR := build

# Automatically find all SystemVerilog (.sv) files in the project
# TB_FILES: List of all testbench files
# RTL_FILES: List of all RTL design files
TB_FILES  := $(wildcard $(TB_DIR)/*.sv)
RTL_FILES := $(wildcard $(RTL_DIR)/*.sv)

# Default target - what happens when you just type 'make'
# This will trigger the syntax check
all: compile

# Create the build directory if it doesn't exist
# This target is a prerequisite for compilation
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Syntax checking target
# This target compiles all SystemVerilog files using slang
# -I$(RTL_DIR): Add RTL directory to include path for finding referenced files
compile: $(TB_FILES) $(RTL_FILES)
	$(SLANG) $(STD) -I$(RTL_DIR) $(TB_FILES) $(RTL_FILES)

# Clean target - removes all generated files
# Useful for ensuring a clean build
# Removes:
#   - build directory (BUILD_DIR)
#   - VCD waveform files (*.vcd)
#   - Object files (*.o)
#   - Output files (*.out)
clean:
	rm -rf $(BUILD_DIR) *.vcd *.o *.out

# Declare phony targets
# These targets don't represent actual files
# This prevents conflicts with files that might have the same name
.PHONY: all compile clean

