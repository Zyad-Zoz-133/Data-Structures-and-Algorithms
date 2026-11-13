# Fractional Knapsack

## Introduction
Fractional Knapsack maximizes total value under a weight capacity when an item may be taken partially.

## How It Works
1. Calculate each item's value-to-weight ratio.
2. Sort items by that ratio in descending order.
3. Take a whole item when it fits.
4. Otherwise, take the fraction that fills the remaining capacity and stop.

## Example
The source program uses capacity 15, weights `{8, 9, 7}`, and values `{100, 20, 70}`.

## Complexity
For `n` items:
- Building ratios: **O(n)**.
- Sorting: **O(n log n)**.
- Selecting items: **O(n)**.
- Extra storage: **O(n)**.

## Notes and Limitations
The greedy strategy is appropriate for the fractional version, not the 0/1 version. The implementation assumes matching weight/value vector sizes and positive item weights.

## Implementation
See [fractionalKnapSack.cpp](fractionalKnapSack.cpp). Copied unchanged from `LO2/fractionalKnapSack.cpp` in the Problem-solving repository.