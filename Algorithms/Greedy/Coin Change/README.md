# Coin Change (Greedy)

## Introduction
This implementation uses a greedy strategy to represent an amount with available coin denominations.

## How It Works
1. Sort denominations in descending order.
2. For each denomination, take as many coins as fit into the remaining amount.
3. Subtract their total value and continue.
4. Print the denominations that were used.

## Example
With denominations `{1, 5, 10, 20, 50, 100, 200}` and amount `1164`, the program repeatedly chooses the largest denomination that fits.

## Complexity
For `n` denominations:
- Sorting: **O(n log n)**.
- Greedy scan: **O(n)**.
- Extra storage for the result: **O(n)**.

## Advantages and Limitations
- Simple and efficient for suitable currency systems.
- Greedy choice is **not guaranteed to produce the minimum number of coins for every arbitrary denomination system**.
- The implementation assumes positive, nonzero denominations.

## Implementation
See [Coins.cpp](Coins.cpp). Copied unchanged from `LO2/Coins.cpp` in the Problem-solving repository.