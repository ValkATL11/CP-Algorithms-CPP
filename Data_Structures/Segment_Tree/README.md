# Segment Tree (Range Sum)

## Overview
A binary tree over array intervals supporting associative range queries.

## Core Idea
Build stores child aggregates in each parent. A query combines only nodes intersecting the requested interval.

## When to Use
Range sum/min/max/gcd queries with point updates.

## Implementation Details
The public query(l,r) uses a 0-indexed inclusive interval. The identity for sum is zero.

## Complexity
O(log N) per point update or range query; O(N) memory.

## Limitations
This version handles point assignment and range sum. Adapt the merge and identity for other operations.

## Edge Cases
An empty array can be constructed, but queries require a valid non-empty interval. Query order is inclusive.

## Related Problems and Topics
Lazy Propagation, Sparse Table, Fenwick Tree.

## Build and Test
From the repository root:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Data_Structures/Segment_Tree/test.cpp -o test
./test
```

## References
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
