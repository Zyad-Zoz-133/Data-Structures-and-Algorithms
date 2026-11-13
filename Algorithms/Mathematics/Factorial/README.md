# Factorial (Recursion)

## Introduction
The factorial of a positive integer `n`, written `n!`, is the product of all positive integers from 1 through `n`.

## How It Works
The recursive function returns 1 when `n == 1`; otherwise it returns `n * factorial(n - 1)`.

## Example
`5! = 5 × 4 × 3 × 2 × 1 = 120`.

## Complexity
- Time: **O(n)**.
- Auxiliary space: **O(n)** due to recursive calls.

## Notes and Limitations
- The current base case handles `n == 1`, but not `n == 0`; calling it with zero does not terminate correctly.
- `long long` has a limited range, so sufficiently large factorials overflow.

## Implementation
See [factorial.cpp](factorial.cpp). Copied unchanged from `LO2/factorial.cpp` in the Problem-solving repository.