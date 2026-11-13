# Rod Cutting

## Introduction
Rod Cutting finds the maximum obtainable revenue by cutting a rod into pieces, given a price for each possible piece length.

## How It Works
The dynamic programming array `dp[i]` stores the maximum revenue for a rod of length `i`. For each length, the algorithm tries every possible first piece and combines its price with the best revenue for the remaining length.

## Example
The source file uses prices `{2, 5, 7, 8}` for lengths 1 through 4.

## Complexity
For a rod of length `n`:
- Time: **O(n²)** from the two nested loops.
- Space: **O(n)** for the DP array.

## Notes
The implementation assumes the price vector provides a price for every piece length from 1 to the full rod length.

## Implementation
See [rodeCut.cpp](rodeCut.cpp). Copied unchanged from `LO2/rodeCut.cpp` in the Problem-solving repository.