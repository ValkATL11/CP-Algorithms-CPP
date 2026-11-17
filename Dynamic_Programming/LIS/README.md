# Longest Increasing Subsequence (LIS)

## Overview
Finds the length and one reconstruction of a longest strictly increasing subsequence.

## Core Idea
Maintain tails[len-1], the smallest possible tail value for an increasing subsequence of that length.

## When to Use
Subsequence optimization, sorting reductions, and sequence DP.

## Implementation Details
Uses lower_bound, so the subsequence is strictly increasing. The returned indices are 0-based.

## Complexity
O(N log N) time and O(N) memory.

## Limitations
This is not the number of LIS and does not count all optimal subsequences.

## Edge Cases
Empty input returns an empty sequence. For non-decreasing LIS, use upper_bound instead.

## Related Problems and Topics
Patience Sorting, Bitonic Subsequence, LCS.

## Build and Test
From the repository root:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra Dynamic_Programming/LIS/test.cpp -o test
./test
```

## References
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
