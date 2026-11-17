# Fenwick Tree (Binary Indexed Tree)

## Overview
Stores prefix aggregates with a compact array representation.

## Core Idea
Each index is responsible for a range determined by its least significant set bit.

## When to Use
Point updates with prefix sums, range sums, inversion counting, and frequency tables.

## Implementation Details
This implementation is 1-indexed internally. add(i, delta) and sum_prefix(i) expect 1 ≤ i ≤ n.

## Complexity
O(log N) per update or prefix query; O(N) memory.

## Limitations
The provided structure supports additive operations, not arbitrary associative operations or range updates without extra trees.

## Edge Cases
sum_prefix(0) returns zero. Use long long when sums can exceed 32-bit range.

## Related Problems and Topics
Segment Tree, Coordinate Compression, Inversion Counting.

## Build and Test
From the repository root:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Data_Structures/Fenwick_Tree/test.cpp -o test
./test
```

## References
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
