# Disjoint Set Union (DSU)

## Overview
Maintains a partition of vertices into disjoint components.

## Core Idea
Find uses path compression; unite uses union by size. Together they keep trees almost flat.

## When to Use
Dynamic connectivity, Kruskal's MST, component counting, and grouping constraints.

## Implementation Details
Indices are 0-based. unite(a,b) returns false when both vertices are already in the same component.

## Complexity
Amortized O(α(N)) per operation; O(N) memory.

## Limitations
Does not support deletions of arbitrary edges. Use rollback DSU for offline dynamic connectivity.

## Edge Cases
N = 0 is supported for construction, but operations require valid indices. Repeated unions are harmless.

## Related Problems and Topics
Kruskal, DSU Rollback, Offline Dynamic Connectivity.

## Build and Test
From the repository root:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Data_Structures/DSU/test.cpp -o test
./test
```

## References
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
