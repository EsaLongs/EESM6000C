###############################################################################################################################################
# Makefile for Xilinx Vivado Simulation
# Author: AI 
# Create for : TANG Yue
# Date: March 30, 2025
# Description: This Makefile automates the simulation workflow for SystemVerilog
#              designs using Xilinx Vivado tools in a Docker container. It supports
#              compiling RTL files, running simulations, and viewing waveforms with
#              GTKWave.
# Version: 1.0
###############################################################################################################################################

# Project name - dynamically determined from directory name
PROJECT_NAME = $(shell basename $(shell dirname $(realpath $(lastword $(MAKEFILE_LIST)))))

# Path definitions for files in the Docker container
RTL_DIR = /Xilinx_Project/$(PROJECT_NAME)/rtl
TB_DIR = /Xilinx_Project/$(PROJECT_NAME)/tb
VIVADO_PATH = /tools/xilinx/Vivado/2021.1
SCHEMATIC_DIR = /Xilinx_Project/$(PROJECT_NAME)/schematic

# Docker command definitions
DOCKER_CMD = docker exec -e DISPLAY=:0 -e LC_ALL=C -e LANG=C -e xilinx_JAVA_HOME=/tools/xilinx/Vivado/2021.1/tps/lnx64/jre11.0.2 vivado_x86
DOCKER_CMD_WITH_PATH = docker exec -e DISPLAY=:0 -e LC_ALL=C -e LANG=C -e xilinx_JAVA_HOME=/tools/xilinx/Vivado/2021.1/tps/lnx64/jre11.0.2 -w /workspace vivado_x86

# Automatically find all SystemVerilog files
RTL_FILES = $(shell $(DOCKER_CMD) find $(RTL_DIR) -name "*.sv" 2>/dev/null)
TB_FILES = $(shell $(DOCKER_CMD) find $(TB_DIR) -name "*.sv" 2>/dev/null)

# Extract testbench name automatically
TB_NAME = $(shell $(DOCKER_CMD) find $(TB_DIR) -name "tb_*.sv" 2>/dev/null | xargs basename | sed 's/\.sv//')

# Extract top module name from testbench name (remove 'tb_' prefix)
MODULE_NAME = $(shell echo $(TB_NAME) | sed 's/^tb_//')

# Top module for schematic generation (default to the module being tested)
SCHEMATIC_TOP ?= $(MODULE_NAME)

# Simulation configuration
SIM_SNAPSHOT = $(TB_NAME)_sim
CONTAINER_WORK_DIR = /workspace
HOST_WORK_DIR = $(HOME)/Xilinx_Project/$(PROJECT_NAME)

# Default target - runs complete simulation flow
all: compile elaborate simulate

# Check if Docker daemon is running, start if needed
check_docker:
	@if ! docker info >/dev/null 2>&1; then \
		open -a "Docker Desktop"; \
		for i in $$(seq 1 12); do \
			if docker info >/dev/null 2>&1; then \
				break; \
			fi; \
			sleep 5; \
		done; \
	fi

# Check if Vivado container is running, start if needed
check_container: check_docker
	@if ! docker ps | grep -q "vivado_x86"; then \
		if docker ps -a | grep -q "vivado_x86"; then \
			docker start vivado_x86; \
			sleep 2; \
		else \
			exit 1; \
		fi; \
	fi

# Print discovered RTL and testbench files
print-vars:
	@echo "RTL files: $(RTL_FILES)"
	@echo "TB files: $(TB_FILES)"

# Add this target to copy input files to the container
copy-data-files: check_container
	@echo "Copying input data files to Docker container..."
	docker cp $(HOST_WORK_DIR)/samples_triangular_wave.txt vivado_x86:$(CONTAINER_WORK_DIR)/
	docker cp $(HOST_WORK_DIR)/out_gold.txt vivado_x86:$(CONTAINER_WORK_DIR)/
	@echo "Data files copied successfully."

# Compile RTL and testbench files
compile: check_container
	@if [ -n "$(RTL_FILES)" ]; then \
		$(DOCKER_CMD) $(VIVADO_PATH)/bin/xvlog -sv $(RTL_FILES); \
	else \
		exit 1; \
	fi
	@if [ -n "$(TB_FILES)" ]; then \
		$(DOCKER_CMD) $(VIVADO_PATH)/bin/xvlog -sv $(TB_FILES); \
	else \
		exit 1; \
	fi

# Elaborate the design
elaborate: check_container
	$(DOCKER_CMD) $(VIVADO_PATH)/bin/xelab -debug all $(TB_NAME) -s $(SIM_SNAPSHOT)

# Run simulation in batch mode
simulate-batch: check_container
	$(DOCKER_CMD) $(VIVADO_PATH)/bin/xsim $(SIM_SNAPSHOT) -runall

# Run simulation and generate waveform
simulate-wave: check_container
	$(DOCKER_CMD_WITH_PATH) $(VIVADO_PATH)/bin/xsim $(SIM_SNAPSHOT) -runall
	docker cp vivado_x86:$(CONTAINER_WORK_DIR)/$(TB_NAME).vcd $(HOST_WORK_DIR)/

# View waveform using GTKWave
view-wave:
	gtkwave $(HOST_WORK_DIR)/$(TB_NAME).vcd &

# Clean simulation files
clean: check_container
	$(DOCKER_CMD) rm -rf xsim.dir
	$(DOCKER_CMD) rm -f webtalk*
	$(DOCKER_CMD) rm -f xvlog*
	$(DOCKER_CMD) rm -f xelab*
	$(DOCKER_CMD) rm -f xsim*
	$(DOCKER_CMD) rm -f *.wdb
	$(DOCKER_CMD) rm -f *.vcd
	rm -f *.wdb
	rm -f *.vcd

# Clean workspace directory in the container
clean-workspace: check_container
	@echo "Cleaning workspace directory in the container..."
	$(DOCKER_CMD_WITH_PATH) rm -rf .Xil project_1 temp_project vivado_temp sche_out
	$(DOCKER_CMD_WITH_PATH) find . -type f \( -name "*.v" -o -name "*.edif" -o -name "*.jou" -o -name "*.log" \
		-o -name "*.pb" -o -name "*.tcl" -o -name "hs_err_pid*" -o -name "*.wdb" -o -name "*.vcd" \
		-o -name "webtalk*" -o -name "xsim*" -o -name "xvlog*" -o -name "xelab*" -o -name "vivado*" \) -delete
	@echo "Workspace directory cleaned."

# Clean everything (simulation files and workspace)
clean-all: clean clean-workspace

# Clean and rebuild everything
rebuild: clean all

# Complete simulation flow with waveform viewing
wave: compile elaborate simulate-wave view-wave

# Reopen the waveform viewer without rerunning simulation
reopen-wave:
	@if [ -f $(HOST_WORK_DIR)/$(TB_NAME).vcd ]; then \
		gtkwave $(HOST_WORK_DIR)/$(TB_NAME).vcd & \
	else \
		echo "Error: VCD file not found at $(HOST_WORK_DIR)/$(TB_NAME).vcd"; \
		echo "Please run 'make wave' first to generate the waveform file."; \
	fi

# Run Vivado GUI for interactive simulation (with single instance only)
wave-gui: check_container
	@echo "Starting Vivado in GUI mode for interactive simulation..."
	# Create the Tcl script for simulation setup
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'create_project -force sim_project [file normalize [pwd]/sim_project]' > wave_gui.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'add_files -norecurse {$(RTL_FILES)}' >> wave_gui.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'add_files -fileset sim_1 -norecurse {$(TB_FILES)}' >> wave_gui.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'import_files -force -norecurse' >> wave_gui.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'set_property top $(TB_NAME) [get_filesets sim_1]' >> wave_gui.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'set_property target_simulator XSim [current_project]' >> wave_gui.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'update_compile_order -fileset sim_1' >> wave_gui.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'set_property -name {xsim.simulate.runtime} -value {all} -objects [get_filesets sim_1]' >> wave_gui.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'set_property -name {xsim.simulate.log_all_signals} -value {true} -objects [get_filesets sim_1]' >> wave_gui.tcl" 
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'puts \"\\n============== Design Simulation Setup ===============\"' >> wave_gui.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'puts \"Project created and files imported successfully!\"' >> wave_gui.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'puts \"To launch the simulation, follow these steps:\"' >> wave_gui.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'puts \"  1. Click Run Simulation in the Flow Navigator panel\"' >> wave_gui.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'puts \"  2. Choose Run Behavioral Simulation\"' >> wave_gui.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'puts \"  3. Use the simulator interface to add signals and analyze waveforms\"' >> wave_gui.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'puts \"================================================================\\n\"' >> wave_gui.tcl"
	# Directly modify Vivado init file to source our wave_gui.tcl
	$(DOCKER_CMD) sh -c "echo 'if {[llength [get_projects]] == 0} { create_project -in_memory temp }' > /tools/xilinx/Vivado/2021.1/scripts/Vivado_init.tcl"
	$(DOCKER_CMD) sh -c "echo 'source /workspace/wave_gui.tcl' >> /tools/xilinx/Vivado/2021.1/scripts/Vivado_init.tcl"
	@echo "====================== SIMULATION INSTRUCTIONS ======================"
	@echo "Launching Vivado GUI for interactive simulation..."
	@echo ""
	@echo "Vivado will:"
	@echo "1. Create a simulation project and import files"
	@echo "2. Set up the simulation environment"
	@echo ""
	@echo "Once Vivado opens, to view waveforms:"
	@echo "1. Run the simulation (Flow Navigator > Run Simulation > Run Behavioral Simulation)"
	@echo "2. In the simulation window, right-click on signals to add them to the waveform viewer"
	@echo "3. Click 'Run All' to execute the complete simulation"
	@echo ""
	# Launch Vivado directly without additional options
	@if [ -f $(HOME)/xilinx/run_vivado.sh ]; then \
		echo "Using run_vivado.sh script..."; \
		cd $(HOME)/xilinx && ./run_vivado.sh $(VIVADO_PATH)/bin/vivado; \
	else \
		echo "Warning: Could not find run_vivado.sh at $(HOME)/xilinx/run_vivado.sh"; \
		echo "Using fallback method..."; \
		$(DOCKER_CMD) -e DISPLAY=host.docker.internal:0 $(VIVADO_PATH)/bin/vivado; \
	fi
	@echo "=========================================================================="

# Create directory for schematic output
create-schematic-dir: check_container
	$(DOCKER_CMD) mkdir -p $(SCHEMATIC_DIR)
	mkdir -p $(HOST_WORK_DIR)/schematic

# Generate schematic using Vivado (netlist-based approach)
sche: check_container create-schematic-dir
	@echo "Generating schematic data for $(SCHEMATIC_TOP)..."
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'read_verilog -sv $(RTL_FILES)' > schematic.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'synth_design -rtl -top $(SCHEMATIC_TOP) -name rtl_1' >> schematic.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'write_verilog -force $(CONTAINER_WORK_DIR)/$(SCHEMATIC_TOP)_netlist.sv' >> schematic.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'write_edif -force $(CONTAINER_WORK_DIR)/$(SCHEMATIC_TOP)_netlist.edif' >> schematic.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'quit' >> schematic.tcl"
	$(DOCKER_CMD) $(VIVADO_PATH)/bin/vivado -mode batch -source $(CONTAINER_WORK_DIR)/schematic.tcl
	# Check if the files were created
	$(DOCKER_CMD) sh -c "if [ -f $(CONTAINER_WORK_DIR)/$(SCHEMATIC_TOP)_netlist.sv ]; then echo 'Netlist file found in workspace'; else echo 'Netlist file not found in workspace'; fi"
	$(DOCKER_CMD) sh -c "if [ -f $(CONTAINER_WORK_DIR)/$(SCHEMATIC_TOP)_netlist.edif]; then echo 'EDIF file found in workspace'; else echo 'EDIF file not found in workspace'; fi"
	# Copy the files to the host
	docker cp vivado_x86:$(CONTAINER_WORK_DIR)/$(SCHEMATIC_TOP)_netlist.sv $(HOST_WORK_DIR)/schematic/ || echo "Netlist file could not be copied from workspace"
	docker cp vivado_x86:$(CONTAINER_WORK_DIR)/$(SCHEMATIC_TOP)_netlist.edif $(HOST_WORK_DIR)/schematic/ || echo "EDIF file could not be copied from workspace"
	# Create a Tcl script for viewing the schematic
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'set_property source_mgmt_mode DisplayOnly [current_project]' > view_schematic.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'read_edif $(CONTAINER_WORK_DIR)/$(SCHEMATIC_TOP)_netlist.edif' >> view_schematic.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'open_schematic [get_files $(CONTAINER_WORK_DIR)/$(SCHEMATIC_TOP)_netlist.edif]' >> view_schematic.tcl"
	@echo "Schematic generation complete."
	@echo "Netlist file should be available at: $(HOST_WORK_DIR)/schematic/$(SCHEMATIC_TOP)_netlist.sv"
	@echo "EDIF file should be available at: $(HOST_WORK_DIR)/schematic/$(SCHEMATIC_TOP)_netlist.edif"
	@echo "To view the schematic, run 'make view-sche'"

# Generate a TCL script for schematic viewing
gen-sche-tcl: check_container
	@echo "Generating Tcl script for schematic viewing..."
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'create_project -in_memory temp' > view_schematic.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'read_edif $(CONTAINER_WORK_DIR)/$(SCHEMATIC_TOP)_netlist.edif' >> view_schematic.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'link_design -part xc7k70tfbv676-1 -name $(SCHEMATIC_TOP)' >> view_schematic.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'puts \"Opening schematic view for $(SCHEMATIC_TOP)...\"' >> view_schematic.tcl"
	$(DOCKER_CMD) sh -c "cd $(CONTAINER_WORK_DIR) && echo 'show_schematic [get_nets *]' >> view_schematic.tcl"
	@echo "Tcl script generated at $(CONTAINER_WORK_DIR)/view_schematic.tcl"

# Modify Vivado initialization to automatically source our script
setup-auto-source: gen-sche-tcl
	@echo "Setting up automatic script sourcing for Vivado..."
	$(DOCKER_CMD) sh -c "mkdir -p /tools/xilinx/Vivado/2021.1/scripts/"
	$(DOCKER_CMD) sh -c "echo 'if {[llength [get_projects]] == 0} { create_project -in_memory temp }' > /tools/xilinx/Vivado/2021.1/scripts/Vivado_init.tcl"
	$(DOCKER_CMD) sh -c "echo 'source $(CONTAINER_WORK_DIR)/view_schematic.tcl' >> /tools/xilinx/Vivado/2021.1/scripts/Vivado_init.tcl"
	@echo "Vivado initialization modified to automatically source the schematic script."

# View schematic using Vivado GUI with automatic script execution
view-sche: check_container setup-auto-source
	@echo "====================== SCHEMATIC VIEWING INSTRUCTIONS ======================"
	@echo "Launching Vivado GUI with automatic schematic loading..."
	@echo ""
	@echo "Vivado will:"
	@echo "1. Start in GUI mode"
	@echo "2. Automatically execute the script via Vivado_init.tcl"
	@echo "3. Display the schematic view of $(SCHEMATIC_TOP)"
	@echo ""
	@if [ -f $(HOME)/xilinx/run_vivado.sh ]; then \
		cd $(HOME)/xilinx && ./run_vivado.sh; \
	else \
		echo "Warning: Could not find run_vivado.sh at $(HOME)/xilinx/run_vivado.sh"; \
		echo "Using fallback method..."; \
		$(DOCKER_CMD) -e DISPLAY=host.docker.internal:0 $(VIVADO_PATH)/bin/vivado; \
	fi
	@echo "=========================================================================="

# Mark targets that don't create files
.PHONY: all compile elaborate simulate simulate-batch simulate-wave view-wave clean rebuild print-vars check_docker check_container wave reopen-wave create-schematic-dir sche view-sche clean-workspace clean-all gen-sche-tcl setup-auto-source vivado-gui