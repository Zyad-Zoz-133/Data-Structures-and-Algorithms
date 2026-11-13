# Activity Selection (Maximum Non-overlapping Tasks)

## Introduction
The Activity Selection problem asks for the largest number of tasks that do not overlap, when each task has a start and finish time.

## How It Works
1. Sort tasks by increasing finish time.
2. Keep the finish time of the last selected task.
3. Select a task when its start time is greater than or equal to that finish time.
4. Update the finish time and continue.

## Example
The source file defines five tasks and selects compatible tasks after sorting by finish time.

## Complexity
For `n` tasks:
- Sorting: **O(n log n)**.
- One scan: **O(n)**.
- Extra space: depends on the sorting implementation; the algorithm itself uses **O(1)** additional state.

## Notes and Limitations
The current code initializes the previous finish time to 0, so it assumes task start times are nonnegative. The compatibility check allows a task to start exactly when the previous one ends.

## Implementation
See [maxnonoverlappingtasks.cpp](maxnonoverlappingtasks.cpp). Copied unchanged from `LO2/maxnonoverlappingtasks.cpp` in the Problem-solving repository.