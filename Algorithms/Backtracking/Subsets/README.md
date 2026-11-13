# Generate All Subsets

## Introduction
A subset contains any selection of elements from an input collection, including the empty subset and the complete collection.

## How It Works
For each element, the recursive function explores two choices:
1. Exclude the current element.
2. Include the current element, recurse, then remove it with `pop_back()` to restore the previous state (backtracking).

When all elements have been processed, the current subset is added to the results.

## Example
For `[1, 2]`, the subsets are `[]`, `[2]`, `[1]`, and `[1, 2]` (the order follows the recursion).

## Complexity
- Time: **O(n × 2^n)** including copying each subset into the results.
- Output space: **O(n × 2^n)** for all subsets.
- Recursion depth: **O(n)**.

## Implementation
See [find all subset.cpp](find%20all%20subset.cpp). Copied unchanged from `LO2/find all subset.cpp` in the Problem-solving repository.