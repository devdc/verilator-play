######################################################################
# Simple Makefile for SHA256 Core Testing
######################################################################

# Verilator flags
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe --build -Wall -Wno-fatal --trace --timing --assert --debug

# Simulation executable
EXECUTABLE = obj_dir/Vsha256_tb

# Verilog sources
VERILOG_SOURCES = sha256_core.v sha256_tb.v

all: $(EXECUTABLE)

$(EXECUTABLE): $(VERILOG_SOURCES) test_main.cpp
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SOURCES) test_main.cpp --top-module sha256_tb

run: $(EXECUTABLE)
	@echo "Running SHA256 core test..."
	@$(EXECUTABLE)

clean:
	rm -rf obj_dir
	rm -f *.vcd

.PHONY: all run clean 