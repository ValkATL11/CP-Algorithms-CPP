# Strongly Connected Components (Kosaraju)

## Overview
Partitions a directed graph into maximal strongly connected components.

## Core Idea
Run DFS on the original graph to get finishing order, then DFS on the reversed graph in reverse finishing order.

## When to Use
Condensation DAGs, mutual reachability, and 2-SAT foundations.

## Implementation Details
Vertices are 0-indexed. The returned component IDs are arbitrary but equal exactly for vertices in the same SCC.

## Complexity
O(N + M) time and O(N + M) memory.

## Limitations
Recursive DFS can overflow the call stack on a very deep graph. Convert to iterative DFS for strict stack limits.

## Edge Cases
Handles disconnected graphs, isolated vertices, and self-loops.

## Related Problems and Topics
Tarjan SCC, Condensation Graph, 2-SAT.

## Build and Test
From the repository root:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Graph_Theory/SCC/test.cpp -o test
./test
```

## References
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
