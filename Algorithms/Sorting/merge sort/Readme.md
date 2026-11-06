# Merge Sort

## 1. Introduction

Merge Sort is a sorting algorithm based on the **Divide and Conquer** technique.

It divides an array into smaller subarrays, sorts each subarray, and then merges them to produce a sorted array.

## 2. How Does It Work?

Merge Sort works in three main steps:

1. **Divide:** Divide the array into two halves.
2. **Conquer:** Recursively sort each half.
3. **Merge:** Merge the two sorted halves into one sorted array.

### Example

Suppose we have this array:

`[8, 3, 5, 4]`

**Step 1: Divide**

```text
       [8, 3, 5, 4]
         /       \
      [8, 3]    [5, 4]
      /   \     /   \
    [8]  [3]  [5]  [4]
```

**Step 2: Sort and Merge**

```text
    [3, 8]      [4, 5]
         \      /
        [3, 4, 5, 8]
```

Final sorted array:

`[3, 4, 5, 8]`

## 3. Complexity Analysis

| Complexity | Value | Explanation |
|---|---|---|
| Best Case | O(n log n) | The array is divided into log n levels. |
| Average Case | O(n log n) | Each level processes n elements. |
| Worst Case | O(n log n) | The same divide-and-merge process is performed. |
| Space Complexity | O(n) | Temporary storage is needed during merging. |

## 4. Advantages

- Efficient for large datasets.
- Guaranteed O(n log n) time complexity.
- Stable sorting algorithm.

## 5. Disadvantages

- Requires extra memory.
- Usually more complicated to implement than simple sorting algorithms.

## 6. Implementation

The C++ implementation is available in:

[`merge_sort.cpp`](./mergeSort.cpp)

## 7. Key Concepts

- Divide and Conquer
- Recursion
- Merging sorted arrays
- Time Complexity
- Space Complexity