# 0/1 Knapsack (Recursive Attempt)

## Introduction
In 0/1 Knapsack, each item can either be selected once or skipped. The goal is to maximize value without exceeding the capacity.

## Intended Approach
A recursive solution considers two choices for each item:
- Take it, reducing the remaining capacity by its weight.
- Skip it, keeping the capacity unchanged.
The intended result is the maximum of these two choices.

## Complexity
For the usual exhaustive recursive formulation:
- Time: **O(2^n)**.
- Auxiliary space: **O(n)** recursion depth.

## Important Note About This Source
This file is preserved exactly as it was in the source repository. Its current early `if (wight[index] < W)` branch returns the take choice immediately, without comparing it with the skip choice. The condition also uses a strict less-than comparison. Therefore, this implementation does **not** correctly implement the general 0/1 Knapsack recurrence in all cases. This README describes the intended algorithm and flags the source limitation; the C++ file has not been changed.

## Implementation
See [knapsack.cpp](knapsack.cpp). Copied unchanged from `LO2/knapsack.cpp` in the Problem-solving repository.