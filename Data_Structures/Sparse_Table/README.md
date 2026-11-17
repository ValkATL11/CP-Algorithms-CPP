# Sparse Table (Range Minimum Query)

## Overview
Answers static range queries by combining overlapping power-of-two blocks.

## Core Idea
For an inclusive interval of length len, use two blocks of length 2^k where k = floor(log2(len)).

## When to Use
Static range minimum/maximum/gcd queries when the array never changes.

## Implementation Details
This implementation is 0-indexed and answers inclusive minimum queries.

## Complexity
O(N log N) preprocessing, O(1) per idempotent range query; O(N log N) memory.

## Limitations
No point updates. The O(1) overlapping-block trick requires an idempotent operation such as min, max, or gcd.

## Edge Cases
Do not query an empty interval. Preprocessing an empty array is allowed, but query is not.

## Related Problems and Topics
Segment Tree, Disjoint Sparse Table, RMQ + LCA.

## Build and Test
From the repository root:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Data_Structures/Sparse_Table/test.cpp -o test
./test
```

## References
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
