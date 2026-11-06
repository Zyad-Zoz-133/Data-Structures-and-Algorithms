# Bubble Sort

## 1. Introduction

Bubble Sort is a simple sorting algorithm that repeatedly compares adjacent elements and swaps them if they are in the wrong order.

It sorts the array by moving the largest elements toward the end with each pass.

## 2. How Does It Work?

The algorithm works using two nested loops:

1. Start from the first element.
2. Compare the current element with the next element.
3. If the current element is greater than or equal to the next element, swap them.
4. Continue comparing adjacent elements until reaching the end of the array.
5. Repeat the process until all elements are sorted.

## 3. Example

Initial Array:

`[2, 6, 1, 64, 45]`

| Pass | Array |
|---|---|
| Initial | `[2, 6, 1, 64, 45]` |
| Pass 1 | `[2, 1, 6, 45, 64]` |
| Pass 2 | `[1, 2, 6, 45, 64]` |
| Pass 3 | `[1, 2, 6, 45, 64]` |
| Pass 4 | `[1, 2, 6, 45, 64]` |

After each pass, the largest unsorted element reaches its correct position.

## 4. Time & Space Complexity

| Case | Complexity |
|---|---|
| Best Case | O(n²) |
| Average Case | O(n²) |
| Worst Case | O(n²) |
| Space Complexity | O(1) |

**Why O(n²)?**

The algorithm uses two nested loops. The outer loop runs `n` times, and the inner loop performs approximately `n` comparisons.

> Note: This implementation does not use an early-stop optimization, so even an already sorted array takes O(n²)