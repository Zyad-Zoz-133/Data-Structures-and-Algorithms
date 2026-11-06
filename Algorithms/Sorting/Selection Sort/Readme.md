# Selection Sort

## 1. Introduction

Selection Sort is a simple sorting algorithm that sorts an array by repeatedly finding the smallest element in the unsorted part.

In this implementation, we use **Repeated Swapping** to keep the smallest element found so far.

## 2. How Does It Work?

The algorithm divides the array into two parts:

- **Sorted Part:** Elements that are already in their correct positions.
- **Unsorted Part:** Elements that we still need to sort.

For each pass:

1. Store the first element of the unsorted part in `M`.
2. Compare `M` with every element after it.
3. If a smaller element is found, swap it with `M`.
4. After finishing the inner loop, place `M` in its correct position.
5. Repeat until the array is sorted.

## 3. Example

Initial Array:

`[64, 25, 12, 22, 11]`

| Pass | Array |
|---|---|
| Initial | `[64, 25, 12, 22, 11]` |
| Pass 1 | `[11, 64, 25, 22, 12]` |
| Pass 2 | `[11, 12, 64, 25, 22]` |
| Pass 3 | `[11, 12, 22, 64, 25]` |
| Pass 4 | `[11, 12, 22, 25, 64]` |

## 4. Time & Space Complexity

| Case | Complexity |
|---|---|
| Best Case | O(n²) |
| Average Case | O(n²) |
| Worst Case | O(n²) |
| Space Complexity | O(1) |

**Why O(n²)?**

The outer loop runs approximately `n` times, and the inner loop performs comparisons over the remaining elements.

## 5. Advantages

- Easy to understand and implement.
- Uses constant extra space.
- Does not require additional arrays.

## 6. Disadvantages

- Slow for large datasets.
- Performs O(n²) comparisons even if the array is already sorted.
- This repeated-swapping implementation may perform more swaps than the traditional Selection Sort implementation.

## 7. Implementation

Check the C++ implementation here:

[selection_sort.cpp](selection_sort.cpp)

## 8. Key Concepts

- Sorted and Unsorted Parts
- Minimum Element
- Repeated Swapping
- Nested Loops
- Time Complexity: O(n²)