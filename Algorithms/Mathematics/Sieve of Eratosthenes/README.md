# Sieve of Eratosthenes

## Introduction
The Sieve of Eratosthenes finds all prime numbers up to a given limit `n`.

## How It Works
1. Initially mark every number as prime.
2. Mark 0 and 1 as non-prime.
3. For each prime candidate `p` up to the square root of `n`, mark its multiples starting at `p * p` as non-prime.
4. Print the numbers that remain marked as prime.

## Example
For `n = 20`, the primes are 2, 3, 5, 7, 11, 13, 17, and 19.

## Complexity
- Time: **O(n log log n)**.
- Space: **O(n)** for the boolean marking vector.

## Important Note About This Source
The source file is preserved exactly. The call to `isprime(n)` in `main` is missing a semicolon, so the file as currently written will not compile until that syntax issue is addressed.

## Implementation
See [Seive prime.cpp](Seive%20prime.cpp). Copied unchanged from `LO4/Seive prime.cpp` in the Problem-solving repository.