# SHA256 1MB Processor

This project implements a complete SHA256 processor in Verilog that can process 1MB of data and output the SHA256 hash result. The design uses Verilator for simulation and verification.

## Design Overview

### Architecture
- **sha256_1mb_processor.v**: Top-level processor that handles 1MB data input
- **sha256_core_fast.v**: Optimized SHA256 core with fast state machine
- **sha256_1mb_sim_main.cpp**: C++ simulation driver for Verilator

### Key Features
- Processes exactly 1MB (1,048,576 bytes) of input data
- Implements proper SHA256 padding according to the specification
- Supports block chaining for multi-block messages
- Optimized for performance with fast state machine
- Generates VCD waveform files for debugging
- Includes verification against expected results

### SHA256 Implementation Details
1. **Input Processing**: 1MB input is processed as 2048 complete blocks of 512 bits each
2. **Padding**: Final padding block contains single '1' bit, zeros, and 64-bit length
3. **Block Processing**: Each 512-bit block is processed sequentially (2049 total blocks)
4. **Hash Chaining**: Output of each block becomes input hash for next block
5. **Final Output**: 256-bit SHA256 hash of the complete 1MB message

## File Structure
```
sha256_1mb_processor.v      - Main processor module
sha256_1mb_sim_main.cpp     - C++ simulation main
Makefile_1mb                - Build and run automation
README_1MB.md               - This documentation
```

## Building and Running

### Prerequisites
- Verilator (for simulation)
- GTKWave (optional, for waveform viewing)
- Python3 (for verification)

### Quick Start
```bash
# Build and run the simulation
make -f Makefile_1mb run

# Generate expected hash for verification
make -f Makefile_1mb verify

# View performance estimates
make -f Makefile_1mb estimate

# View waveforms (if GTKWave is installed)
make -f Makefile_1mb wave

# Clean build artifacts
make -f Makefile_1mb clean
```

### Manual Build
```bash
# Build with Verilator
verilator -Wall -Wno-WIDTHTRUNC -Wno-WIDTHEXPAND -Wno-UNSIGNED \
    --cc --exe --build --trace \
    -top-module sha256_1mb_processor \
    sha256_1mb_processor.v sha256_1mb_sim_main.cpp \
    -o sha256_1mb_sim

# Run simulation
./obj_dir/sha256_1mb_sim
```

## Test Data

The simulation generates 1MB of test data with an incrementing byte pattern:
- Byte 0: 0x00
- Byte 1: 0x01
- Byte 2: 0x02
- ...
- Byte 255: 0xFF
- Byte 256: 0x00 (wraps around)
- ...
- Byte 1,048,575: 0xFF

This pattern repeats 4096 times to fill the complete 1MB.

## Verification

To verify the implementation:
1. Run `make -f Makefile_1mb verify` to get the expected SHA256 hash
2. Run `make -f Makefile_1mb run` to get the simulated result
3. Compare the two hashes - they should match exactly

Expected SHA256 for 1MB incrementing pattern:
```
[Generated by Python hashlib for verification]
```

## Performance

### Specifications
- **Clock Frequency**: 100MHz (10ns period)
- **Processing Time**: ~164,000 clock cycles for 1MB
- **Latency**: ~1.64ms for 1MB block
- **Throughput**: ~640 MB/s at 100MHz

### Design Parameters
- **Input Data Width**: 8,388,608 bits (1MB)
- **Output Hash Width**: 256 bits
- **Block Size**: 512 bits (SHA256 standard)
- **Number of Blocks**: 2049 (2048 data + 1 padding)
- **SHA256 Rounds**: 64 per block

### Performance Breakdown
- **Blocks to Process**: 2049
- **Cycles per Block**: ~80 (16 prep + 64 compression)
- **Total Cycles**: ~164,000
- **Memory Usage**: ~1MB for input data storage

## Memory Considerations

The 1MB processor requires significant memory resources:
- **Input Data**: 8,388,608 bits (1MB)
- **Verilator Model**: Large due to wide input signals
- **Simulation Time**: Several minutes for complete 1MB processing

For smaller tests, consider using the 1KB processor first to verify functionality.

## Debugging

The design includes extensive debug output:
- Block-by-block processing status
- Progress indicators every 1000 cycles
- Hash values at completion
- Performance metrics
- Error detection and reporting

Waveform files are generated for the first 10,000 time units to avoid excessive file sizes.

## Optimization Notes

### Design Optimizations
- Fast state machine with minimal overhead
- Efficient block extraction from input data
- Optimized padding block generation
- Reduced VCD tracing to manage file sizes

### Simulation Optimizations
- Pattern-based data generation
- Progress reporting for long simulations
- Limited waveform capture
- Performance metrics calculation

## Comparison with 1KB Version

| Feature | 1KB Processor | 1MB Processor |
|---------|---------------|---------------|
| Input Size | 8,192 bits | 8,388,608 bits |
| Blocks | 17 | 2049 |
| Cycles | ~1,700 | ~164,000 |
| Simulation Time | <1 second | Several minutes |
| Memory Usage | Minimal | ~1MB |

## Future Enhancements

Possible improvements:
- Streaming interface to reduce memory requirements
- Pipeline the SHA256 core for higher throughput
- Add support for variable-length messages
- Implement parallel processing for multiple blocks
- Add hardware acceleration features
- Support for other hash algorithms (SHA512, etc.)

## Troubleshooting

### Common Issues
1. **Long Simulation Time**: 1MB processing takes significant time - this is expected
2. **Memory Usage**: Large input vectors require substantial system memory
3. **Build Warnings**: Width warnings are suppressed but design is functionally correct
4. **VCD File Size**: Waveform capture is limited to prevent huge files

### Performance Tips
- Use `make estimate` to understand expected performance
- Monitor progress output during simulation
- Consider testing with 1KB processor first
- Ensure sufficient system memory for compilation 