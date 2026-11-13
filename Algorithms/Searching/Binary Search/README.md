# Binary Search

## Introduction
Binary Search finds a target in a **sorted** array by repeatedly dividing the remaining search range in half.

## How It Works
1. Calculate the middle index.
2. If the middle value equals the target, return its index.
3. If the target is larger, search the right half.
4. Otherwise, search the left half.
5. If the range becomes empty, return `-1`.

## Example
For `[1, 4, 6, 7, 8, 9, 12]`, searching for `8` returns index `4` (zero-based).

## Complexity
- Time: **O(log n)** in the average and worst cases.
- Auxiliary space: **O(log n)** because this implementation is recursive.

## Advantages and Limitations
- Efficient for large sorted arrays.
- Requires sorted input.
- This implementation returns an index, or `-1` when the target is absent.

## Implementation
See [binarySearch.cpp](binarySearch.cpp). The file is copied unchanged from `LO2/binarySearch.cpp` in the Problem-solving repository.