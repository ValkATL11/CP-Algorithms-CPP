# Knuth-Morris-Pratt (KMP)

## Overview
Finds every occurrence of a pattern in a text in linear time.

## Core Idea
The prefix function records the longest proper prefix that is also a suffix, allowing the pattern to shift without rechecking matched characters.

## When to Use
Exact string matching, periodicity, and border-related problems.

## Implementation Details
Returns 0-based starting positions. An empty pattern matches at every boundary from 0 through text.size().

## Complexity
O(N + M) time and O(M) auxiliary memory.

## Limitations
Exact matching only; for multiple patterns consider Aho-Corasick.

## Edge Cases
Overlapping matches are included. Works with bytes in std::string; Unicode code points need separate handling.

## Related Problems and Topics
Z-Function, Aho-Corasick, Rolling Hash.

## Build and Test
From the repository root:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra String_Algorithms/KMP/test.cpp -o test
./test
```

## References
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
