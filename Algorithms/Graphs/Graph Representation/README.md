# Convert Edge List to Adjacency List

## Introduction
An edge list stores graph connections as pairs of vertices. An adjacency list stores, for each vertex, the vertices connected to it.

## How It Works
The function creates a vector of neighbor lists, then processes each edge `(u, v)` by adding `v` to `u`'s list and `u` to `v`'s list. This represents an **undirected graph**.

## Example
The sample edges are `(1,3)`, `(2,4)`, `(1,2)`, and `(4,3)`.

## Complexity
For `V` vertices and `E` edges:
- Building the adjacency list: **O(V + E)** including initialization.
- Storage: **O(V + E)**.

## Notes and Limitations
The current function hardcodes the graph size as 4 and assumes vertex labels fit the allocated indices. It prints the adjacency structure rather than returning it. This README describes the current source as-is.

## Implementation
See [convert the edge list to adj list.cpp](convert%20the%20edge%20list%20to%20adj%20list.cpp). Copied unchanged from `LO1/convert the edge list to adj list.cpp` in the Problem-solving repository.