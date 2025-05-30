# SHA256 1KB Processor

This project implements a complete SHA256 processor in Verilog that can process 1KB of data and output the SHA256 hash result. The design uses Verilator for simulation and verification.

## Design Overview

### Architecture
- **sha256_1kb_processor.v**: Top-level processor that handles 1KB data input
- **sha256_core_chained.v**: Modified SHA256 core that supports block chaining
- **sha256_1kb_processor_tb.v**: Testbench with test data generation
- **sha256_1kb_sim_main.cpp**: C++ simulation driver for Verilator

### Key Features
- Processes exactly 1KB (1024 bytes) of input data
- Implements proper SHA256 padding according to the specification
- Supports block chaining for multi-block messages
- Generates VCD waveform files for debugging
- Includes verification against expected results

### SHA256 Implementation Details
1. **Input Processing**: 1KB input is padded to 17 blocks of 512 bits each
2. **Padding**: Follows SHA256 specification (append '1', pad with zeros, append length)
3. **Block Processing**: Each 512-bit block is processed sequentially
4. **Hash Chaining**: Output of each block becomes input hash for next block
5. **Final Output**: 256-bit SHA256 hash of the complete 1KB message

## File Structure
```
sha256_1kb_processor.v      - Main processor module
sha256_1kb_processor_tb.v   - Testbench
sha256_1kb_sim_main.cpp     - C++ simulation main
Makefile_1kb                - Build and run automation
README_1KB.md               - This documentation
```

## Building and Running

### Prerequisites
- Verilator (for simulation)
- GTKWave (optional, for waveform viewing)
- Python3 (for verification)

### Quick Start
```bash
# Build and run the simulation
make -f Makefile_1kb run

# Generate expected hash for verification
make -f Makefile_1kb verify

# View waveforms (if GTKWave is installed)
make -f Makefile_1kb wave

# Clean build artifacts
make -f Makefile_1kb clean
```

### Manual Build
```bash
# Build with Verilator
verilator -Wall -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNSIGNED \
    --cc --exe --build --trace \
    -top-module sha256_1kb_processor_tb \
    sha256_1kb_processor.v sha256_1kb_processor_tb.v sha256_1kb_sim_main.cpp \
    -o sha256_1kb_sim

# Run simulation
./obj_dir/sha256_1kb_sim
```

## Test Data

The testbench generates 1KB of test data with an incrementing byte pattern:
- Byte 0: 0x00
- Byte 1: 0x01
- Byte 2: 0x02
- ...
- Byte 255: 0xFF
- Byte 256: 0x00 (wraps around)
- ...
- Byte 1023: 0xFF

This pattern repeats 4 times to fill the complete 1KB.

## Verification

To verify the implementation:
1. Run `make -f Makefile_1kb verify` to get the expected SHA256 hash
2. Run `make -f Makefile_1kb run` to get the simulated result
3. Compare the two hashes - they should match exactly

## Performance

- **Clock Frequency**: 100MHz (10ns period)
- **Processing Time**: ~1700 clock cycles for 1KB
- **Throughput**: ~600KB/s at 100MHz
- **Latency**: ~17μs for 1KB block

## Design Parameters

- **Input Data Width**: 8192 bits (1KB)
- **Output Hash Width**: 256 bits
- **Block Size**: 512 bits (SHA256 standard)
- **Number of Blocks**: 17 (16 data + 1 padding)
- **SHA256 Rounds**: 64 per block

## Debugging

The design includes extensive debug output:
- Block-by-block processing status
- Hash values at each stage
- Timing information
- Error detection and reporting

Waveform files are generated automatically and can be viewed with GTKWave for detailed signal analysis.

## Future Enhancements

Possible improvements:
- Pipeline the SHA256 core for higher throughput
- Add support for variable-length messages
- Implement parallel processing for multiple blocks
- Add hardware acceleration features
- Support for other hash algorithms (SHA512, etc.) 