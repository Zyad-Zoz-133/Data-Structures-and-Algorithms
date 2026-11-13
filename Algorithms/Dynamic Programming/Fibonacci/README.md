# Fibonacci

## Introduction
The Fibonacci sequence starts with 0 and 1. Each later value is the sum of the two previous values.

## Implementations in This File
- **Plain recursion (`fib`)**: computes the same subproblems repeatedly.
- **Memoization (`fibMemo`)**: stores calculated values in a vector to avoid repeated work.
- **Tabulation (`fibTabo`)**: builds the sequence from the bottom up in a vector.

## Example
For `n = 10`, all three approaches calculate `55`.

## Complexity
| Approach | Time | Extra space |
|---|---:|---:|
| Plain recursion | O(2^n) | O(n) call stack |
| Memoization | O(n) | O(n) |
| Tabulation | O(n) | O(n) |

## Notes
The memoization vector must have at least `n + 1` entries initialized to `-1`. The tabulation vector must have at least two entries for the current implementation's assignments to indices 0 and 1.

## Implementation
See [fib.cpp](fib.cpp). Copied unchanged from `LO2/fib.cpp` in the Problem-solving repository.