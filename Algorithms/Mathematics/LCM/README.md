# Least Common Multiple (LCM)

## Introduction
The Least Common Multiple of two integers is the smallest positive integer divisible by both.

## How It Works
The file first calculates GCD using the Euclidean algorithm, then applies:
`LCM(a, b) = (a × b) / GCD(a, b)`.

## Example
For `18` and `48`, the LCM is `144`.

## Complexity
- Time: **O(log(min(a, b)))** for the GCD calculation.
- Auxiliary space: **O(log(min(a, b)))** due to recursion.

## Notes and Limitations
The current multiplication `a * b` can overflow an `int` before division. The implementation also does not define special handling for zero or negative inputs.

## Implementation
See [LCM.cpp](LCM.cpp). Copied unchanged from `LO3/LCM.cpp` in the Problem-solving repository.