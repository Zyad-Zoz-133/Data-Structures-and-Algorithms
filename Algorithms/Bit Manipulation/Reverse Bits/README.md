# Reverse Bits

## Introduction
Bit reversal changes the order of the bits in a fixed-width integer. This implementation processes a 32-bit unsigned integer.

## How It Works
Repeat 32 times:
1. Shift the result left to make room for the next bit.
2. Append the least significant bit of the input using bitwise OR.
3. Shift the input right to process its next bit.

## Example
The source file uses `43261596`; its reversed 32-bit value is `964176192`.

## Complexity
- Time: **O(32)**, which is constant for a fixed 32-bit width.
- Extra space: **O(1)**.

## Notes
The function uses `uint32_t` from `<cstdint>`, ensuring the operation is performed on an unsigned 32-bit value.

## Implementation
See [reverse bits .cpp](reverse%20bits%20.cpp). Copied unchanged from `LO2/reverse bits .cpp` in the Problem-solving repository.