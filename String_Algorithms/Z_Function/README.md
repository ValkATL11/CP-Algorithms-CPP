# Z-Function

## Overview
Computes the length of the longest substring starting at each position that matches a prefix.

## Core Idea
Maintain the rightmost Z-box [l,r]. Inside the box, reuse previously computed values and extend only when necessary.

## When to Use
Pattern matching through pattern + separator + text, string periodicity, and prefix comparisons.

## Implementation Details
Convention: z[0] = 0. Choose a separator that cannot occur in the input alphabet when concatenating strings.

## Complexity
O(N) time and O(N) memory.

## Limitations
For arbitrary byte strings, a unique integer sentinel is safer than assuming a character separator is absent.

## Edge Cases
Empty strings return an empty vector. Single-character strings return {0}.

## Related Problems and Topics
KMP, Rolling Hash, Manacher.

## Build and Test
From the repository root:

```bash
g++ -std=c++17 -O2 -pipe -Wall -Wextra String_Algorithms/Z_Function/test.cpp -o test
./test
```

## References
- [CP-Algorithms](https://cp-algorithms.com/)
- [C++ reference](https://en.cppreference.com/w/cpp)
