# Two Pointers (Sorted Pair Sum)

## Overview
Uses two indices moving inward to find a pair meeting a target in a sorted array.

## Core Idea
If the current sum is too small, increase the left value; if too large, decrease the right value.

## When to Use
Pair sum, removing duplicates, interval merging, and monotonic window problems.

## Implementation Details
The input must be sorted in non-decreasing order. Returns one pair of 0-based indices or {-1,-1}.

## Complexity
O(N) time after sorting; O(1) auxiliary memory excluding sorting.

## Limitations
The simple inward movement relies on sorted order and monotonicity of the condition.

## Edge Cases
Requires at least two elements. Sum is computed in long long to reduce overflow risk.

## Related Problems and Topics
Sliding Window, Binary Search, Meet in the Middle.

## Build and Test
From the repository root:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Search_Techniques/Two_Pointers/test.cpp -o test
./test
```

## References
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
