# Lazy Segment Tree (Range Add, Range Sum)

## Overview
Extends a Segment Tree with deferred updates for whole intervals.

## Core Idea
A lazy tag records an update that has affected a node aggregate but has not yet been pushed to its children.

## When to Use
Range addition with range sum, and similar range-update/range-query tasks.

## Implementation Details
All public intervals are 0-indexed and inclusive. Applying x to a segment of length len adds x × len to its sum.

## Complexity
O(log N) per range update or query; O(N) memory.

## Limitations
This implementation supports range addition and range sum only. Other update types need a correctly designed tag-composition rule.

## Edge Cases
Push before descending into children. Use 64-bit values when the total sum may exceed int.

## Related Problems and Topics
Segment Tree, Fenwick Tree with two BITs, Segment Tree Beats.

## Build and Test
From the repository root:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Data_Structures/Lazy_Propagation/test.cpp -o test
./test
```

## References
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
