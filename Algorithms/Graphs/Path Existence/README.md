# Path Existence in an Undirected Graph (DFS)

## Introduction
This algorithm checks whether a path exists between a source vertex and a destination vertex in an undirected graph.

## How It Works
1. Build an adjacency list by adding each edge in both directions.
2. Start DFS from the source.
3. Mark each visited vertex to avoid revisiting it.
4. If the current vertex equals the destination, return `true`.
5. If no route reaches the destination, return `false`.

## Example
The sample graph has one component containing vertices 0, 1, and 2, and another containing 3, 4, and 5. It checks for a path from 0 to 4, which does not exist.

## Complexity
For `V` vertices and `E` edges:
- Time: **O(V + E)**.
- Space: **O(V + E)** for the adjacency list, visited array, and recursion stack.

## Notes
The implementation uses zero-based vertex labels in the range `0` through `n - 1`.

## Implementation
See [is path vailld.cpp](is%20path%20vailld.cpp). Copied unchanged from `LO1/is path vailld.cpp` in the Problem-solving repository.