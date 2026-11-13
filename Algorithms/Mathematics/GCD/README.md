# Greatest Common Divisor (GCD)

## Introduction
The Greatest Common Divisor of two integers is the greatest positive integer that divides both of them.

## How It Works
This file uses the recursive Euclidean algorithm:
- If `b == 0`, return `a`.
- Otherwise, continue with `GCD(b, a % b)`.

## Example
For `18` and `48`, the GCD is `6`.

## Complexity
- Time: **O(log(min(a, b)))** for nonnegative inputs.
- Auxiliary space: **O(log(min(a, b)))** recursive calls.

## Notes
The implementation is written for the sample's positive integers; handling negative inputs generally requires normalizing signs.

## Implementation
See [GCD.cpp](GCD.cpp). Copied unchanged from `LO3/GCD.cpp` in the Problem-solving repository.