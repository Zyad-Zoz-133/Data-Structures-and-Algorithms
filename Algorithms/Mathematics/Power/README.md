# Power (Recursive Exponentiation)

## Introduction
Exponentiation calculates `base` raised to an integer exponent. This file attempts to use recursion and exponent halving.

## Intended Approach
For a nonnegative exponent, calculate the power for half the exponent once, then square that result. For odd exponents, the result should include one additional factor of the base. Negative exponents are handled by taking the reciprocal of the base.

## Complexity
The intended exponentiation-by-squaring approach takes **O(log |pow|)** time and **O(log |pow|)** recursive space.

## Important Note About This Source
The C++ file is copied unchanged. Its parity condition `pow&1==0` is affected by operator precedence, and its odd-exponent branch returns `temp*temp*temp` rather than multiplying by the original base. Therefore the current implementation does not reliably calculate powers as intended. Negating the minimum `int` exponent can also overflow.

## Implementation
See [power.cpp](power.cpp). Copied unchanged from `LO3/power.cpp` in the Problem-solving repository.