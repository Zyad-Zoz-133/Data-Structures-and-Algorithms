# Cycle Detection in an Undirected Graph (DFS)

## Introduction
A cycle is a path that starts and ends at the same vertex without repeating edges. In an undirected graph, DFS can detect a visited neighbor that is not the current node's parent.

## Intended Approach
1. Build an adjacency list from the undirected edges.
2. Start DFS from each unvisited vertex to cover disconnected components.
3. Track the parent of each vertex.
4. A visited neighbor other than the parent indicates a cycle.

## Complexity
For `V` vertices and `E` edges:
- Time: **O(V + E)**.
- Space: **O(V + E)** for the adjacency list, visited array, and recursion stack.

## Important Note About This Source
The file is preserved unchanged. Its nested `if` / `else if` structure does not implement the intended visited-neighbor check correctly in all cases. Also, its comment link refers to a directed-cycle problem while the implementation builds an undirected graph. Treat this as a learning attempt, not a verified general-purpose implementation.

## Implementation
See [has cycle.cpp](has%20cycle.cpp). Copied unchanged from `LO1/has cycle.cpp` in the Problem-solving repository.