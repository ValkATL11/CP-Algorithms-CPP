# 0-1 BFS

## Overview
Shortest paths in graphs whose edge weights are restricted to zero or one.

## Core Idea
Relax zero-weight edges to the front of a deque and one-weight edges to the back.

## When to Use
Binary-weighted graphs, state transitions with free/paid moves, and minimum-cost transformations.

## Implementation Details
Graph is 0-indexed. Every edge weight must be exactly 0 or 1.

## Complexity
O(N + M) per source; O(N + M) memory.

## Limitations
Not valid for arbitrary non-negative weights. Use Dijkstra when weights are not binary.

## Edge Cases
Unreachable nodes remain INF. Validate weights if input is not trusted.

## Related Problems and Topics
Dijkstra, BFS, Dial's Algorithm.

## Build and Test
From the repository root:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Graph_Theory/Shortest_Path/test.cpp -o test
./test
```

## References
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
