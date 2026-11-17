# Lowest Common Ancestor (Binary Lifting)

## Overview
Answers lowest common ancestor queries on a rooted tree.

## Core Idea
Store 2^k-th ancestors. Lift the deeper vertex, then lift both vertices from large powers down.

## When to Use
Tree distance, ancestor queries, path decomposition, and virtual-tree construction.

## Implementation Details
Build from a root in a connected tree. Vertices are 0-indexed. depth and up tables are built iteratively to avoid DFS stack overflow.

## Complexity
O(N log N) preprocessing, O(log N) per query; O(N log N) memory.

## Limitations
Assumes a tree (connected, undirected, acyclic). Does not directly handle forests without component checks.

## Edge Cases
lca(u,u) = u. For weighted distance, maintain root distances separately.

## Related Problems and Topics
Euler Tour + RMQ, Heavy-Light Decomposition, Rerooting DP.

## Build and Test
From the repository root:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Graph_Theory/LCA/test.cpp -o test
./test
```

## References
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
