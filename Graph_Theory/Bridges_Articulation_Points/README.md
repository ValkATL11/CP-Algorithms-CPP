# Bridges and Articulation Points

## Overview
Finds critical edges and vertices in an undirected graph.

## Core Idea
DFS discovery times and low-link values determine whether a child subtree can reach an ancestor without using its parent edge.

## When to Use
Connectivity resilience, bridge-connected components, and network vulnerability analysis.

## Implementation Details
The implementation uses edge IDs, so parallel edges are handled correctly. Vertices are 0-indexed.

## Complexity
O(N + M) time and O(N + M) memory.

## Limitations
Recursive DFS may overflow on very deep graphs. Input must be undirected.

## Edge Cases
For a DFS root, articulation requires at least two DFS children. A non-root is an articulation point if a child has low[child] ≥ tin[u].

## Related Problems and Topics
Tarjan SCC, 2-edge-connected components, DFS low-link.

## Build and Test
From the repository root:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Graph_Theory/Bridges_Articulation_Points/test.cpp -o test
./test
```

## References
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
